#Python code to segregate even and odd numbers
def splitevenodd(Arr): 
   even = [] 
   odd = [] 
   for i in Arr: 
      if (i % 2 == 0): 
         even.append(i) 
      else: 
         odd.append(i) 
   print("Even lists:", even) 
   print("Odd lists:", odd) 
  

Arr=list()
n=int(input("Enter the number of elements in list :"))
print("Enter the Elements in list:")
for i in range(int(n)):
   k=int(input(""))
   Arr.append(k)
splitevenodd(Arr) 