#  Given a number N reverse the number and print it.
# https://leetcode.com/problems/reverse-integer/
def reverse(n):
    INT_MAX = 2**31 - 1
    INT_MIN = -2**31
    ans = 0
    isNegative = False
    if(0>n):
        n = abs(n)
        isNegative = True
    while(n!=0):
        lastDigit = n % 10
        print(lastDigit)
        ans = ans * 10 + lastDigit
        n = int(n/10)
    if(ans > INT_MAX or ans < INT_MIN):
        return 0
    return -1 * ans if isNegative else ans


# print(reverse(123))
print(reverse(-123))
