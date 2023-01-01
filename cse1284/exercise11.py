from turtle import *

hideturtle()
speed(1)
penup()
goto(-25,25)
for i in range(4):
    setheading( 90*i )
    pendown()
    forward( 50 )
answer = input('do you want to draw another square (enter yes or no)?     ')
if answer == 'yes':
    penup()
    goto( -50,50 )
    for i in range(4):
        setheading( 90*i )
        pendown()
        forward( 100 )

done()
 
