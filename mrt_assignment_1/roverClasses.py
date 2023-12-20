# this file defines the Rover and Daughter Rover classes

import roversControlled as ctrl

def distance(loc1: [float, float, float], loc2: [float, float, float]) -> float:
    return sum((loc1[i] - loc2[i]) ** 2 for i in range(3)) ** 0.5

class Rover:

    # class attributes
    length = 1
    width = 2
    height = 3
    roverGeometry = (length, width, height)

    # instantiation
    def __init__(
        self, swarm_id: int, rover_id: int, rover_loc: [float, float, float] = [0, 0, 0]
    ) -> None:
        # default location is the origin
        self.swarm_id = swarm_id
        self.rover_id = rover_id
        self.rover_loc = rover_loc

    # displaying
    def __str__(self) -> str:
        return f"Swarm ID: {self.swarm_id}\nRover ID: {self.rover_id}\nRover location: {self.rover_loc}"

    # new feature 1:
    # senses how many controlled drones are strictly within a given radius
    def sense_number_nearby(self, radius: float) -> int:
        counter = -1
        for i in ctrl.rovers_dict.values():
            if distance(i.rover_loc, self.rover_loc) < radius:
                counter += 1

        return counter

    # move message i.e. change location of rover
    def move_by(
        self, delta_loc: [float, float, float]
    ) -> None:
        for i in range(3):
            self.rover_loc[i] += delta_loc[i]

class DaughterRover(Rover):

    # must have half the dimensions
    daughterRoverGeometry = [i / 2 for i in Rover.roverGeometry]
    (daughterLength, daughterWidth, daughterHeight) = daughterRoverGeometry

    # instantiation
    def __init__(
        self, swarm_id: int, rover_id: int, rover_loc: [float, float, float] = [0, 0, 0]
    ) -> None:
        Rover.__init__(self, swarm_id, rover_id, rover_loc)

    # displaying
    def __str__(self) -> str:
        return super().__str__()

    # move message checking done by parent class method
    def move_by(
        self, delta_loc: [float, float, float]
    ) -> None:
        Rover.move_by(self, [i / 2 for i in delta_loc])