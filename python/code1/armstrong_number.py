num = int(input("Enter a number: "))


def sumOfAndPower(num):
    length = len(str(num))
    sum = 0

    while(num != 0):
        sum = sum + ((num%10)**length)
        num = num // 10
    
    return sum



sum2 = sumOfAndPower(num)

if(num == sum2):
        print("Armstrong")
else:
    print("Not Armstrong")
