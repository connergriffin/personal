import keyboard
from sys import exit

keep_running = True
keys = []


last_key =''

def my_key_handler(key):
    global keep_running
    global last_key

    if key =='escape':
        stop_keyboard_listener()
        keep_running = False
        return
    last_key = key

def stop_keyboard_listener():
    for key in keys:
        keyboard.remove_hotkey( key )

def start_keyboard_listener ( key_list = None ):
    global keys

    print( "" )
    print( "detecting keypresses" )
    print( "press ESC to quit" )
    print( "" )
    if key_list == None:
      keys = [ 'c', 'w','a','s','d', 'escape' ]
    else:
      keys = key_list + [ 'escape' ]

    for key in keys:
        keyboard.add_hotkey( key, my_key_handler, args=[ key ] )

def main():
    global last_key
    mode = 1
    start_keyboard_listener(['c', 'w','a','s','d', 'escape'])
    while keep_running:
        if (last_key != ''):
            if (last_key == 'c'):
                if mode == 1:
                    mode = 2
                else:
                    mode = 1
            if mode == 1:
                if last_key == 'w':
                    print('forward')
            print(mode)
            last_key = ''
    exit()

main()
