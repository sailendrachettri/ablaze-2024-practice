# prime number in pyton

num = int(input("Enter a number: "))



def checkPrime(num):
    for i in range(2, (num//2) + 1):
        if(num % i == 0):
            return False
    
    return True

res = checkPrime(num)

print("is prime: ", res)