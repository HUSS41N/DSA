# https://www.naukri.com/code360/problems/check-armstrong_589
# 371

# n = int(input())
def armstrong(n):
    temp = n
    arr = []
    sum = 0
    while(temp):
        lastDigit = temp % 10
        arr.append(lastDigit)
        temp //= 10
    for i in range(len(arr)):
        sum += pow(arr[i],len(arr))
    if(sum == n):
        print("true")
        return
    print("false")

armstrong(371)

def armstrong2(n):
    originalNumber = n
    temp = n
    count = 0
    sum = 0
    while(n):
        count += 1
        n //= 10
    while(temp):
        lastDigit = temp % 10
        sum += pow(lastDigit,count)
        temp //= 10
    if(sum == originalNumber):
        print("true")
        return
    print("false")
armstrong2(371)