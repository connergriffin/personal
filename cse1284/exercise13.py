# draws a circle with border color and fill color chosen by the user
from turtle import *


border_color = input( 'please input a border color:     ' )         # gets the users input for the border color
answer = input( 'is shape filled (y or n)?     ')                   # gets the user to pick whether or not there is a fill color

if answer == 'y':                                                   # enters the if statement if the user wants the circle to have a fill color
    fill_color = input( 'please input the fill color:     ')        # gets the users input for the fill color
    hideturtle()
    speed(1)
    width(10)
    color( border_color,fill_color )       # sets the pen and fill color
    begin_fill()
    circle(100)                            # draws the appropriate circle
    end_fill()

else:                        # enters the else statement if the user doesn't want the circle to have a fill color
    hideturtle()
    speed(1)
    width(10)
    pencolor(border_color)   # sets the pen color
    circle(100)

done()
