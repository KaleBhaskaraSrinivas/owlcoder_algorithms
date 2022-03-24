import math



 # } Driver Code Ends
#User function Template for python3

class Solution:    
    ##Complete this function
    def modInverse(self,a,m):
        if a<m:
            a,m=m,a
        b=m
        r,t1,t2,t=0,0,1,0
        q=0
        t=0
        k=a
        while(b!=0):
            r=a%b
            q=a//b
            t=t1-t2*q
            a=b
            b=r
            t1=t2
            t2=t
            
        if t1<0:
            return t1%k
        return t1     

#{ 
#Driver Code Starts.
    
    
def main():
    
    T=int(input())
    
    while(T>0):
        
        
        am=[int(x) for x in input().strip().split()]
        a=am[0]
        m=am[1]
        ob=Solution()
        print(ob.modInverse(a,m))
        
        
        T-=1
    
    




if __name__=="__main__":
    main()
#} Driver Code Ends
