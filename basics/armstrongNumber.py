# https://www.naukri.com/code360/problems/check-armstrong_589
# 371

n = int(input())
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

armstrong(n)