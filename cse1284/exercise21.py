foods = ['mascarpone','margarine','mung daal','muscadine']
prices = [8.99,10.99,12.99,14.99]


print(format('food','12s')+format('price','8s'))
print('')
for i in range(len(foods)):
	print( format(foods[i],'12s') + format(prices[i],'8.2f') )
