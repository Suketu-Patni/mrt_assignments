#this file defines all the user classes and related functions
from errors import *
import random
from time import time_ns
import roversControlled as ctrl
import roverClasses as rc

MAINFILE = "rovers_controlled.bin"

class User:

    def __init__(self) -> None:
        raise GenericUserError()
    
    def __str__(self) -> str:
        return f"User ID: {self.user_id}"

    # the following function is defined because a generic user must not have access to
    # write to the full list of rovers, yet must have access to read it
    def get_all_controlled_rovers(self) -> None:
        for i in ctrl.rovers_dict.values():
            print(i)
    
    def get_rover_locn(self, swarm_id: int, rover_id: int) -> None:
        if self.user_id[0] == 's':
            rover_ = found_rover(swarm_id, rover_id)
            if rover_:
                print(rover_.rover_loc)
            else:
                # raise custom errors
                raise RoverNotFoundError
        else:
            raise InvalidAccessError
        
    def operate_rover(
        self, swarm_id: int, rover_id: int, delta_loc: [float, float, float]
    ) -> None:
        if self.user_id[0] == 'o':
            rover_ = found_rover(swarm_id, rover_id)
            if rover_:
                rover_.move_by(
                    delta_loc
                )
                # print("\nRover moved")
                return None
            
            else:
                raise RoverNotFoundError
        
        else:
            raise InvalidAccessError
        
    def add_rover(self, rover1: rc.Rover) -> None:
        if self.user_id[0] == 'm':
            rover_exists = found_rover(rover1.swarm_id, rover1.rover_id)
            if rover_exists:
                raise NonUniqueRoverError
            else:
                ctrl.rovers_dict.update({(rover1.swarm_id, rover1.rover_id): rover1})
                print("\nRover (", rover1.swarm_id, ", ", rover1.rover_id,") added")
        else:
            raise InvalidAccessError

    def remove_rover(self, rover1: rc.Rover) -> None:
        if self.user_id[0] == 'm':
            if ctrl.rovers_dict.pop((rover1.swarm_id, rover1.rover_id), None):
                print("\nRover (", rover1.swarm_id, ", ", rover1.rover_id,") removed")
                return None                
            else:
                raise RoverNotFoundError
        else:
            raise InvalidAccessError

    # add something unique to a scientist in its user id,
    # and have all the functions as generic, checking if user id matches that of a scientist.
    # so if a scientist tries to move it, it raises access error 

    # new feature 2:
    # when new users are generated, user id is assigned on its own

    


# for any user, check if swarm and rover ids match a particular rover that is
# being controlled
def found_rover(swarm_id: int, rover_id: int) -> int:
    # if found, return rover object, otherwise return none
    return ctrl.rovers_dict.get((swarm_id, rover_id))

class Scientist(User):

    def __init__(self) -> None:
        random.seed(time_ns())
        self.user_id = f"s{random.randint(0, 10000)}"

    # only view location
    


class Operator(User):

    def __init__(self) -> None:
        random.seed(time_ns())
        self.user_id = f"o{random.randint(0, 10000)}"

    # only move rover
    


class Manager(User):

    def __init__(self) -> None:
        random.seed(time_ns())
        self.user_id = f"m{random.randint(0, 10000)}"

    # only add/remove rovers from list of currently controlled rovers
    # make into a dictionary for faster search
    # make key as tuple (swarm, rover)id and value as Rover object

    
