##creates a shopping list from the users input

shopping_list = open( 'shopping_list.txt' , 'w' )   ## opens a file for writing
n=0                                                 ## initializes the counter
item = input( 'please type in items one at a time when done hit enter\n' )  ## gets initial input
while( item != '' ):    ## a while loop that checks for the empty string
    n = n+1             ## counts the number of items
    shopping_list.write( item + '\n' )  ## writes the input to the file
    item = input( '' )  ## gets input

shopping_list.close()   ## closes the file
print ( 'you have' , n , 'items in your shopping list' )    ## prints the number of items in the shopping list
