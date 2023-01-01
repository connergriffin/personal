from turtle import *
from math import *

height = float( input('please enter the height of the snowflake:     '))        # float because the height is a distance not a discrete set
diamonds = int( input('please enter the number of spikes on each branch of the snowflake (an odd integer):     '))

dist = height/(diamonds+3)                  # this calculates the distance between pairs of diamonds the plus three is 
n = int((diamonds - 1)/2)                   # the number of pairs of diamonds on a spike

hideturtle()
speed(0)
penup()
goto(0,dist)
deg = -30
setheading(deg)
pendown()

print( 'side length of diamond, (height/diamond+3)', dist)
for index in range(6):
    deg = deg + 60
    print( 'degree for first half of loop during the', index, 'iteration:     ',  deg)
    setheading(deg)
    forward(dist)
    deg = deg - 120
    print( 'degree for second half of loop during the', index, 'iteration:     ',  deg)
    setheading(deg)
    forward(dist)
