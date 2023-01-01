

boxes = int( input( 'how many boxers were ordered?     ' ))
trucks = boxes/1400

if boxes < 350:
    print('too few orders! wait for more')
elif boxes <= 1400:
    print('load the truck and ship the bagels')
else:
    trucks =round(trucks)-1
    bob = boxes%1400
    if bob > 150:
        trucks = trucks + 1
    if trucks <= 1:
        print('too many orders! rent a truck')
    else:
        print('too many orders! rent',trucks,'trucks')
    if bob <= 150 and bob > 0:
        print('and send bob')
