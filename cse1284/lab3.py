#from turtle import *

answer = int(input('what is the robot doing?\n1.) idle\n2.) dancing\n3.) sitting\n'))

if answer == 1:
    print('the robot is idle')
elif answer == 2:
    print('the robot is dancing')
else:
    color = int(input("what is the color of the robot's balloons?\n1.) pink\n2.) maroon\n3.) navy\n4.) chartreuse\n"))
    if color == 1:
        print('the robot is sitting')
        color_str = 'pink'
        print('the robot is holding', color_str,'balloons')
    elif color == 2:
        print('the robot is sitting')
        color_str = 'maroon'
        print('the robot is holding', color_str,'balloons')
    elif color ==3:
        print('the robot is sitting')
        color_str = 'navy'
        print('the robot is holding', color_str,'balloons')
    else:
        print('the robot is sitting')
        color_str = 'chartreuse'
        print('the robot is holding', color_str,'balloons')
