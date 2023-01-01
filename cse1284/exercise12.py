# draws a triangle or square

from turtle import *

answer = input( 'do you want to draw a square or a triangle(S/T)?     ' )
hideturtle()
speed(0)
penup()
if answer == 'S':                   # enters the if if the user inputs S
    penup()
    goto(-25,25)
    for i in range(4):              # draws a square
        setheading( 90*i )
        pendown()
        forward( 50 )
else:                               # enters the else if the user does not input S
    penup()
    goto(-25,25)
    for i in range(3):              # draws a triangle
        setheading( 120*i )
        pendown()
        forward( 50 )

done()
