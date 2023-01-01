# draws a snowflake with arbitrary height and number of diamonds per spike

from turtle import *
from math import *


height = float( input('please enter the height of the snowflake:     ')
                )        # float because the height is a distance not a discrete set
diamonds = int( input('please enter the number of spikes on each branch of the snowflake (an odd integer):     '))

dist = height/(diamonds+3)                  # this calculates the distance between pairs of
                                            # diamonds as well as the side length of each diamond
n = int((diamonds - 1)/2)                   # the number of pairs of diamonds on a spike

hideturtle()
speed(0)
penup()
goto(0,dist)
deg = -30
setheading(deg)
pendown()

for index in range(6):                  # This draws the star
    deg = deg + 60
    setheading(deg)
    forward(dist)
    deg = deg - 120
    setheading(deg)
    forward(dist)

deg = 90
for index in range(6):                  # this draws each individual spike
    penup()
    goto(0,0)
    pendown()
    setheading( deg )
    deg = deg + 60
    forward( height/2 )
    right(30)
    for I in range(3):                  # draws the diamond at the end of each spike
            deg1 = 60 * ( (I-1)*(I-2)/2 + 2*(-I)*(I-2) + (I)*(I-1)/2 )
            forward(dist)
            left(deg1)
    forward(dist)

deg = 90
for i in range(n):                      # draws each pair of diamonds on each spike
    for index in range(6):
        penup()
        goto(0,0)
        setheading( deg )

        forward( (i+2)*dist )
        pendown()
    
        for I in range(4):              # draws the diamond on the right of the spike
            deg1 = 60 * ( (I-1)*(I-2)*(I-3)/(-24) + (I)*(I-2)*(I-3
                        )/2 + 2*(I)*(I-1)*(I-3)/(-2) + (I)*(I-1)*(I-2)/6 )
            right(deg1)
            forward(dist)
        setheading(deg-15)
        for I in range(4):              # draws the diamond on the left of the spike
            deg2 = 60 * ( (I-1)*(I-2)*(I-3)/(-12) + (I)*(I-2)*(I-3
                        )/2 + 2*(I)*(I-1)*(I-3)/(-2) + (I)*(I-1)*(I-2)/6 )
            left(deg2)
            forward(dist)
        setheading(deg+15)
        deg = deg + 60

done()
