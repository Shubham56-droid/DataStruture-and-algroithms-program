a = int(input("Enter the number : "))

fact = 1

for i in range (a , 0 , -1):
    fact *= i

print("factrial of", a , "is =", fact)
