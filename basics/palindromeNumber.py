# https://leetcode.com/problems/palindrome-number/submissions/1213973125/
def palindrome(n):
    copy = n
    ans = 0
    isNegative = False
    if(0>n):
        isNegative = True
        n = abs(n)
    while(n>0):
        lastDigit = n % 10
        ans = ans * 10 + lastDigit
        n //= 10
    if(copy == ans):
        return True
    return False

print(palindrome(123))
print(palindrome(121))