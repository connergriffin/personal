from turtle import *                                        # for drawing
from math import *                                          # for tan and radian conversion

N = int( input('enter an integer greater than 2:    ') )    # asks the user to input the number of sides

penup()                                                     # puts a dot at the origin for reference
goto( 0,0 )
dot()

DEG = (N-2)*180/N                           # calculates the degree of the angle measure of the polygon
ADJ = 100/tan(radians(DEG/2))               # calculates the x coordinate for the starting position

goto( -abs(ADJ),100 )                       # sends the pen to the starting position
pendown()
speed(0)

for I in range(N):                          # sets upper bound on index to n
    forward( abs(ADJ*2) )                   # goes forward the calculated side length
    right( 180-DEG )                        # turns right the supplement of the calculated inner angle measure


print('the interior measure of each angle is', DEG)         # gives the user the measurements of the polygon
print('the length of each side is', ADJ*2)

done()
