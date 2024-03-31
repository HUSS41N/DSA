# https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720
# def sumOfDivisor(n: int) -> int:
#     sum = 0
#     for i in range(1,n+1):
#         if(n % i == 0):
#             sum += i
#     return sum

# def sumOfDivisor(n: int) -> int:
#     sum = 0
#     for i in range(1,int(n**0.5)+1):
#         if(n % i == 0):
#             sum += i
#             if i != n/i:
#                 sum += int(n/i)
#     return sum

def sumOfDivisors(n: int) -> int:
    divisor_sum = 0
    i = 1
    while i * i <= n:
        if n % i == 0:
            divisor_sum += i
            if i != n // i:  
                divisor_sum += n // i
        i += 1
    return divisor_sum

def sumOfAllDivisor(n: int):
    sum = 0
    for i in range(1,n+1):
        sum += sumOfDivisors(i)
    return sum

print(sumOfAllDivisor(5))
