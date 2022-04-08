#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int arr[4]={1,2,3,4};
    //cin>>n;
    for(int i=0;1<<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i &(1<<j))
            {
                cout<<j<<" ";
            }
        }cout<<endl;
    }
    return 0;
}
