from elevator_class_module import *

elA = elevator_class(6)
elB = elevator_class(4)
elC = elevator_class('banana')

print("A", elA)
print('B', elB)

print("")

elA.debug_dump( "A" )
elB.debug_dump( "B" )


elA.set_current_floor(5)
##elA.set_current_floor(7)
##elA.set_current_floor('pumpkin')

elA.debug_dump('A')

floor = elA.get_current_floor()

print("A is at floor", floor, "\n")

elB.current_floor = "kittens"
elB.debug_dump( "B" )   ## the underscores tell programmers that its intended to be modified using only accessor and mutator methods
