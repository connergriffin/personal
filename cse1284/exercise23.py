letter = input('What letter are you looking for:   ')

shopping_list = open( 'shopping_list.txt' , 'r')
line = '\n'
n=0

while(line != ''):
    line = shopping_list.readline()
    if letter in line:
        print('*', line , end = '')
        n  = n+1
    else:
        print(' ', line, end = '')

shopping_list.close()
print( n , "contain the letter" , letter)
