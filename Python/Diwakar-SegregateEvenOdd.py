
num = input("Enter numbers separated by space")

lst=num.split()
ans=[]

//to get even numbers here
for num in lst:
    if(int(num)%2 == 0):
        ans.append(num)
        
//to get odd numbers here
for num in lst:
    if(int(num)%2 != 0):
        ans.append(num)
        
print(ans)

    
