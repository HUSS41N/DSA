# Given an integer N, write a program to count the number of digits in N.
import math

def count(n):
    count = 0
    while(n>0):
        n //=10
        count+=1
    return count

print(count(100))


def count2(n):
    return len(str(n))

print(count2(100))

def count3(n):
    return math.floor(math.log10(n) + 1)

print(count3(1990))