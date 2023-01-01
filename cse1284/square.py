# draw a square

from turtle import *

speed(2)

# measure angles in degrees, not radians
degrees()

# start at 200, 30
penup()
goto(200,30)

# put the pen down
# medium thickness blue pne

pendown()
width(3)
color('blue')

# move 50 pixels
# turn counterclockwise 90 degree
forward(50)
right(90)

# move 50 pixels
# turn counterclockwise 90 degree
forward(50)
right(90)

# move 50 pixels
# turn counterclockwise 90 degree
forward(50)
right(90)

# move 50 pixels
# turn counterclockwise 90 degree
forward(50)
right(90)

# all done
done()
