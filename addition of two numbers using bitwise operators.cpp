#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b;
    cin>>a>>b;
    int c=a&b;
    int sum=a^b;
    while(c!=0)
    {
        a=sum;
        b=c<<1;
        sum=a^b;
        c=a & b;
    }
    cout<<sum;
  return 0;
}
