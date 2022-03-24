#EUCLIDIANS ALGORITHM FOR  HCF OR GCD AND LCM
''''
def gcd(a, b):
    if a == 0 :
        return b
    return gcd(b%a, a)
def lcm(a,b):
    return (a*b)//gcd(a,b)
 
a = int(input())
b = int(input())
print("gcd(", a , "," , b, ") = ", gcd(a, b))
print("lcm(", a , "," , b, ") = ", lcm(a, b))

''''

'''
import math
a = int(input())
b = int(input())
n=int(input())
for i in range(n):
    x,y=list(map(int,input().split()))
    if(math.gcd(a,b)==math.gcd(x,y)):
        print("yes")
    else:
        print("no")
'''


