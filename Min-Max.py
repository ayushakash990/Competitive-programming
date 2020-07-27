'''
# Sample code to perform I/O:
 
name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT
 
# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''
 
# Write your code here
n = int(input())
arr = list(map(int,input().split()))
ma = max(arr)
mi = min(arr)
 
s = sum(arr)
 
a1_max = s-mi
a2_min = s-ma
print(a2_min,a1_max)