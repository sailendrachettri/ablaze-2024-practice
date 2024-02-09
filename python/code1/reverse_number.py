num = int(input("Enter a number: "))
rev = 0

print("The digits are:", num)

while(num != 0):
    rev = rev * 10 + (num%10)
    num = num // 10

print("The reversed:  ", rev)

