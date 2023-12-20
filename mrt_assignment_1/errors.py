# rover not found error
# access error
# generic user error
# rover already exists error

class RoverNotFoundError(Exception):
    def __init__(self, message = "Specified Rover was not found", error_code = 90):
        super().__init__(message)
        self.error_code = error_code

class InvalidAccessError(Exception):
    def __init__(self, message = "Invalid Access", error_code = 91):
        super().__init__(message)
        self.error_code = error_code

class GenericUserError(Exception):
    def __init__(self, message = "User cannot be generic", error_code = 92):
        super().__init__(message)
        self.error_code = error_code

class NonUniqueRoverError(Exception):
    def __init__(self, message = "Specified Rover already exists", error_code = 93):
        super().__init__(message)
        self.error_code = error_code