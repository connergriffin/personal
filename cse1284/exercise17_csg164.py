#version 1
#the function greatest finds the largest of an array of size 3
def greatest( n ):
    if n[0]>=n[1]:
        g = n[0]
        if n[2]>= n[0]:
            g = n[2]
    else:
        g = n[1]
        if n[2]>=n[1]:
            g = n[2]
    print(g)

#main part of function

nums0 = int(input('please input a number: '))
nums1 = int(input('please input a number: '))
nums2 = int(input('please input a number: '))
nums = [nums0,nums1,nums2]
greatest(nums)

#version 2
#the function greatest finds the largest of an array of size 3
def greatest( n ):
    if n[0]>=n[1]:
        g = n[0]
        if n[2]>= n[0]:
            g = n[2]
    else:
        g = n[1]
        if n[2]>=n[1]:
            g = n[2]
    return g

#main part of function

nums0 = int(input('please input a number: '))
nums1 = int(input('please input a number: '))
nums2 = int(input('please input a number: '))
nums = [nums0,nums1,nums2]

print(greatest( nums ))

#version 3
#the function greatest finds the largest of an array of size 3
def greatest( n ):
    if n[0]>=n[1]:
        g = n[0]
        if n[2]>= n[0]:
            g = n[2]
    else:
        g = n[1]
        if n[2]>=n[1]:
            g = n[2]
    return g
def least( n ):
    if n[0]<=n[1]:
        l = n[0]
        if n[2]<= n[0]:
            l = n[2]
    else:
        l = n[1]
        if n[2]<=n[1]:
            l = n[2]
    return l
    

#main part of function

nums0 = int(input('please input a number: '))
nums1 = int(input('please input a number: '))
nums2 = int(input('please input a number: '))
nums = [nums0,nums1,nums2]

print('the largest value you input was',greatest(nums))
print('the smallest value you input was',least( nums ))
