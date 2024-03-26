# Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.
# Digits mean numbers, not places! That is, if the given integer is "132456", even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.
# https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?leftPanelTabValue=SUBMISSION
def sum(n):
    odd = 0
    even = 0
    while(n>0):
        lastDigit = n % 10
        if(lastDigit % 2 == 0):
            even += lastDigit
        else:
            odd += lastDigit
        n = int(n / 10)
    return [odd,even]

print(sum(0))