# nth fibonacci 
# 0 1 1 2 3 5 8 ...
# sum of previous 2 numbers starting with 0 1
# https://leetcode.com/problems/fibonacci-number/submissions/1213938218/
def fibonacci(n):
    prev = 0
    next = 1
    current = prev + next
    for i in range(1,n):
        current = prev + next
        prev = next
        next = current
    print(current)


fibonacci(2)
