from turtle import *
from math import *

X= float( input('enter an x coordinate:    ') )
Y= float( input('enter a y coordinate:    ') )
I=1
penup()
hideturtle()
goto(X,Y)
speed(1)

while I<100:
    pendown()
    setheading( degrees(X/Y)**I )
    forward(abs(X+Y))
    X1 = cos(radians(degrees(X/Y)**I))*abs(X+Y)+X
    Y1 = sin(radians(degrees(X/Y)**I))*abs(X+Y)+Y
    X=(X+X1)/2
    Y=(Y+Y1)/2
    penup()
    goto(X,Y)
    I=I+1

done()
