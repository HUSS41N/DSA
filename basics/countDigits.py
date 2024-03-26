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


# https://www.codingninjas.com/studio/problems/count-digits_8416387?leftPanelTabValue=SUBMISSION
def countDigits(n: int) -> int:
    count = 0
    temp = n
    while(n > 0):
        lastDigit = n % 10
        if(lastDigit != 0 and temp % lastDigit == 0):
            count+=1
        n = int(n/10)
    return count

countDigits(660)