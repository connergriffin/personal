foodA = 'apple'
priceA = 5.99

foodB = 'banana'
priceB = 18.99

header = format('food','10s')
header = header + format('price','5s')
table = header + '\n--------------------\n'
table = table + format(foodA,'10s') + format(priceA,'5.2f') + '\n'
table = table + format(foodB,'10s') + format(priceB,'5.2f')
print(table)
