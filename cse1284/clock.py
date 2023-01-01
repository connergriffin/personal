from turtle import *                                        # for drawing
from math import *                                          # for trig functions and radian conversion


hour = int(input( 'please input the hour:     ' ))
minute = int(input( 'please input the minute:      '))


hideturtle()
speed(0)
penup()
goto( 0,-25 )
pendown()
circle(25)
penup()
goto( 0,-250 )
pendown()
circle(250)
penup()
goto( 0,-265 )
pendown()
width(10)
circle( 265 )
penup()

goto( 0, 230 )
width(1)
polygon_side_length = 230*sin(radians(30))/sin(radians(75))
left(15)

for I in range(12):
    pendown()

    for index in range(4):
        deg = 60*( 5*(index-1)*(index-2)*(index-3)/(-24) + (index)*(index-2)*(index-3)/2 + 2*(
            index)*(index-1)*(index-3)/(-2) + (index)*(index-1)*(index-2)/6)
        right(deg)
        forward(25)

    right(75)
    penup()
    forward(polygon_side_length)

penup()
goto( 0,0 )
setheading(15)
goto( 0,240 )

adj1 = 10*cos(radians(30))
opp = 10*sin(radians(30))
adj2 = opp/tan(radians(60))
side_length = adj1 + adj2 +25
pendown()
for index in range(4):
        deg_coeef = 5*(index-1)*(index-2)*(index-3)/(-24) + (index)*(index-2)*(index-3)/2 + 2*(
            index)*(index-1)*(index-3)/(-2) + (index)*(index-1)*(index-2)/6
        deg = 60*deg_coeef
        right(deg)
        forward(side_length)


hour_deg = 450 - (minute/2 + hour*30)
minute_deg = 450 - minute*6
minute_length = 240-sqrt(3)*12.5
hour_length = 2/3*minute_length

penup()
goto( 0,0 )
setheading( 90+hour_deg )
backward( 20 )
pendown()
forward( 40 )
alpha = atan( hour_length/20 )
right( 180-degrees(alpha) )
forward( 20/cos(alpha) )
right( 180-(2*(90-degrees(alpha))) )
forward( 20/cos(alpha) )

penup()
goto( 0,0 )
setheading( 90+minute_deg )
backward( 20 )
pendown()
forward( 40 )
alpha = atan( minute_length/20 )
right( 180-degrees(alpha) )
forward( 20/cos(alpha) )
right( 180-(2*(90-degrees(alpha))) )
forward( 20/cos(alpha) )

done()
