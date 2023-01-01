from polygon_class_module import *

poly_a = polygon_class('blue', 'black', 7)
poly_b = polygon_class('pink', 'red', 4)
poly_c = polygon_class('green', 'dark forest green', -12)


poly_a.debug_dump( 'a' )
poly_b.debug_dump( 'b' )

poly_a.draw_poly()
poly_b.draw_poly()

poly_a.set_b_color()
