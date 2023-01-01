from turtle import *
from math import *

height = float( input('please enter the height of the snowflake:     '))        # float because the height is a distance not a discrete set
diamonds = int( input('please enter the number of spikes on each branch of the snowflake (an odd integer):     '))

dist = height/(diamonds+3)                  # this calculates the distance between pairs of diamonds the plus three is 
n = int((diamonds - 1)/2)                   # the number of pairs of diamonds on a spike

hideturtle()
speed(0)

print('height of each spike:     ', height/2)
deg = 90
for index in range(6):
    penup()
    goto(0,0)
    pendown()
    setheading( deg )
    print('degree that the', index, 'spike is pointing:     ', deg)
    deg = deg + 60
    forward( height/2 )
    right(30)
    for I in range(3):
            deg1 = 60 * ( (I-1)*(I-2)/2 + 2*(-I)*(I-2) + (I)*(I-1)/2 )
            forward(dist)
            left(deg1)
    forward(dist)
