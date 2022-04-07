#RECURSION FROM BOTTOM TO TOP

def bha(n):
    if n==0:
        return
    print(n)
    bha(n-1)
n=int(input())
bha(n)

###RECURSION FROM TOP TO BOTTOM

def bha(x,n):
    if n<x:
        return
    print(x)
    bha(x+1,n)
n=int(input())
bha(1,n)

#BACKTRACKING FROM BOTTOM TO TOP

def bha(n):
    if n==0:
        return
    bha(n-1)
    print(n)
    
n=int(input())
bha(n)



###BACKTRACKING FROM TOP TO BOTTOM

def bha(x,n):
    if n<x:
        return
    bha(x+1,n)
    print(x)
    
n=int(input())
bha(1,n)


