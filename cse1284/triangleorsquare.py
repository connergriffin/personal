from turtle import *

answer = input('do you want to draw a square or a triangle(S/T)?     ')
hideturtle()
speed(0)
penup()
if answer == 'S':
    penup()
    goto(-25,25)
    for i in range(4):
        setheading( 90*i )
        pendown()
        forward( 50 )
else:
    penup()
    goto(-25,25)
    for i in range(3):
        setheading( 120*i )
        pendown()
        forward( 50 )

done()
