N=int(input("Enter the size of the array:"))
a=[0]*N
print("Enter the elements:")
for i in range(N):
    a[i]=int(input())
zero=0
i=0
while i<len(a):
  if(a[i]==0):
       zero+=1
       del a[i]
  else:
      i+=1
a+=[0]*zero
print(*a)
