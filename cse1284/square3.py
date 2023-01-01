#square drawing using set heading function

from turtle import *
from math import *

n = int(input('input degrees of rotation:    '))

penup()
speed( 1 )

goto( 70,130 )
pendown()

setheading( 0+n )
forward( 75 )

setheading( 90+n )
forward( 75 )

setheading( 180+n )
forward( 75 )

setheading( 270+n )
forward( 75 )

done()
