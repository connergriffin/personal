from turtle import *

width = float( input( 'please input building width:     ' ) )
height = float( input( 'please input building height:     ' ) )
floors = int( input( 'please input the number of floors:     ' ) )
buildings = int( input( 'please input the number of office buildings:     '))

buildingmidpoint = width/2
floor_height = height/floors
ground = width*2
midpoint = width*buildings

y = 0

for ind in range(buildings):
    penup()
    goto(-midpoint + (ground*ind),0)
    pendown()
    setheading(0)
    forward(ground)
    penup()
    goto(-midpoint + (width/3),0 )
    for index in range(3):
        pendown()
        deg = (index-1)*(index-2)*45 + index*(index-1)*135
        dist = height*(index-1)*(index-2
                )/2 + index*(index-2)*(-25) + height*index*(index-1)/2
        setheading(deg)
        forward(dist)

    for i in range(floors):
        penup()
        goto( -buildingmidpoint,y )
        pendown()
        for I in range(3):
            deg = (I-1)*(I-2)*45 + I*(I-1)*135
            dist = floor_height*(I-1)*(I-2
                )/2 + I*(I-2)*(-width) + floor_height*I*(I-1)/2
            setheading(deg)
            forward(dist)
        setheading(0)
        y = y+floor_height
    y = 0
done()
