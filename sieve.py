n=int(input())
s=0
primes=[True for i in range(n+1)]
p=2
while p*p<=n:
    if primes[p]==True:
        for j in range(p*p,n+1,p):
            primes[j]=False
    p+=1
for i in range(2,n+1):
  if primes[i]:
      #print(i)
      s+=1
print(s)
"""l,r=map(int,input().split())
primes=[True for i in range(r+1)]
p=l
while p*p<=r:
    if primes[p]==True:
        for j in range(p*p,r+1,p):
            primes[j]=False
    p+=1

for k in range(2,r+1):
    if primes[k]:
        print(k)"""
