num_groceries = int(input('how many groceries do you need to get?    '))

groceries = []

for i in range(num_groceries):
    grocery = input('please input a grocery item     ')
    groceries.append(grocery)


for item in groceries:
    print(item)
