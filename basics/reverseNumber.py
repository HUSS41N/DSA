#  Given a number N reverse the number and print it.

def reverse(n):
    ans = 0
    while(n>0):
        lastDigit = n % 10
        print(lastDigit)
        ans = ans * 10 + lastDigit
        n = int(n/10)
    return ans

# print(reverse(123))
print(reverse(1001))
