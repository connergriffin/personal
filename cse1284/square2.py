# draw a square

from turtle import *

speed(1)

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

goto(250,30)
goto(250,-20)
goto(200,-20)
goto(200,30)

# all done
done()
