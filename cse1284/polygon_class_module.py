from turtle import *
from math import *

class polygon_class:

    def __init__(self, bcolor = 'black', fcolor = 'white', nsides = '3')
        if ( (type(bcolor)!= str) or (type(fcolor)!= str) or ((type(nsides)!= int) or num_sides <=2 )
            print('error')

        self.border_color = bcolor
        self.fill_color = fcolor
        self.num_sides = nsides

    def __str__ (self):
        s = 'the polygon has '
        s += str( self.num_sides )
        s += ' sides'

        return s

    def debug_dump (self, header = None):
        if header:
             print( header )
        print('border color:    ', self.border_color)
        print('fill color:  ', self.fill_color)
        print('number of sides: ', self.num_sides)

    def get_b_color(self):
        return self.border_color
    def get_f_color(self):
        return self.fill_color
    def get_n_sides(self):
        return self.num_sides

    def set_b_color(self, new_b_color):
        if( type(new_b_color) != str )
            print('error')
        self.border_color = new_b_color

    def set_f_color(self, new_f_color):
        if( type(new_f_color) != str )
            print('error')
        self.fill_color = new_f_color

    def set_num_sides(self, new_n_sides):
        if( (type(new_n_sides) != int) or (new_n_sides <= 2) )
            print('error')
        self.num_sides = new_n_sides
        

    def draw_poly(self)
        x = xcor()
        y = ycor()
        N = self.num_sides
        color(self.border_color,self.fill_color)

        DEG = (N-2)*180/N                           # calculates the degree of the angle measure of the polygon
        ADJ = 100/tan(radians(DEG/2))               # calculates the x coordinate for the starting position

        goto( -abs(ADJ)+x,100+y )                       # sends the pen to the starting position
        pendown()
        beginfill()
        speed(0)

        for I in range(N):                          # sets upper bound on index to n
            forward( abs(ADJ*2) )                   # goes forward the calculated side length
            right( 180-DEG )
        endfill()
                
