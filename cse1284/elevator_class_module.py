## a class is a data type with actions you can perform on the data

## classes have properties or attributes
## classes have functions or actions

##=====================================================================##

## an elevator class
## attributes:   current floor, max floor
## functions: set current floor, get current floor

## elevator class
##    models an elevator in a building
##    starts in the lobby (floor 1)
##    can be summoned to other floors


## data
##    max_floor, positivie inteer, number of floors in the building
##    current_floor, pos int

## methods
##    __init__( max ) - create an elevator in a building with max floors
##    __str__



class elevator_class:

    ## constructor or initallizer
    ## creates a new elevator
    ## allocates memory
    ## sets initial values of data attributes

    def __init__ (self, maxf = 5):

        if (type(maxf) is not int) or (maxf < 1):
            print('error: elevator class init, masx floor must be a positive int')
            masxf = 5

        self.current_floor = 1
        self.max_floor = maxf
    ## get a string representation of an elevator object

    def __str__ (self):

        s = "the elevator is at floor "
        s += str( self.current_floor )

        return s

    def debug_dump(self, header = None):
        if header:
            print( header )
        print('max floor', self.max_floor)
        print('current floor', self.current_floor)
        print('')

    def get_current_floor( self ):
        return self.current_floor

    def set_current_floor( self, new_floor ):
        if (type( new_floor ) is not int) or (new_floor < 1 or new_floor > self.max_floor):
            print('error')
        self.current_floor = new_floor
