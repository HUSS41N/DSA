def prime(n):
    if(n == 1): return True
    for i in range(2,int(n**0.5)+1):
        if(n % i == 0):
            return False
    return True

print(prime(777))
# https://www.naukri.com/code360/problems/check-prime_624934?leftPanelTabValue=SUBMISSION