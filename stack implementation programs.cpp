// 12
// 1 1 1 2 2 2 3 3 3 4 4 5
// 1 2 3 4 5


// #include <bits/stdc++.h>
// using namespace std;
// void org_values(int *st,int *arr, int n, int *top){
//     int i,j;
//     for(int i=0;i<n;i++){
//         if(*top==-1 || (arr[i]!=st[*top])){
//             *top+=1;
//             st[*top]=arr[i];
//         }
//     }
// }
// int main() {
// 	int arr[100],st[100],i,top=-1,n;
// 	cin>>n;
// 	for(i=0;i<n;i++){
// 	    cin>>arr[i];
// 	}
// 	org_values(st,arr,n,&top);
// 	for(i=0;i<=top;i++){
// 	    cout<<st[i];
// 	}
// 	return 0;
// }


// 12
// 1 1 1 2 2 2 3 3 3 4 4 5
// 1 32 33 34 25 1

// #include <bits/stdc++.h>
// using namespace std;
// void org_values(int *st,int *cnt,int *arr, int n, int *top){
//     int i,j;
//     for(i=0;i<n;i++){
//         if(*top==-1 || (arr[i]!=st[*top])){
//             *top+=1;
//             st[*top]=arr[i];
//             cnt[*top]=1;
    
//         }
//         else if(arr[i]==st[*top])
//         {
//             cnt[*top]+=1;
//         }
//     }
// }
// int main() {
// 	int arr[100],st[100],cnt[100],i,top=-1,n;
// 	cin>>n;
// 	for(i=0;i<n;i++){
// 	    cin>>arr[i];
// 	}
// 	org_values(st,cnt,arr,n,&top);
// 	for(i=0;i<=top;i++){
// 	    //printf("%d %d", st[i], cnt[i]);
// 	    cout<<st[i]<<cnt[i]<<endl;
// 	}
// 	return 0;
// }


// 12
// 1 1 1 2 2 2 3 3 3 4 4 5
// 1 2 3 4 5

// #include <stdio.h>
// void org_values(int *st,int *arr, int n, int *top){
//     int i,j;
//     for(i=0;i<n;i++){
//         if(*top==-1 || (arr[i]!=st[*top])){
//             *top+=1;
//             st[*top]=arr[i];
//         }
//     }
// }
// int main() {
// 	int arr[100],st[100],i,top=-1,n;
// 	scanf("%d",&n);
// 	for(i=0;i<n;i++){
// 	    scanf("%d", &arr[i]);
// 	}
// 	org_values(st,arr,n,&top);
// 	for(i=0;i<=top;i++){
// 	    printf("%d",st[i]);
// 	}
// 	return 0;
// }



// 12
// 1 1 1 2 2 2 3 3 3 4 4 5
// 1 32 33 34 25 1

// #include <stdio.h>
// void org_values(int *st,int *cnt,int *arr, int n, int *top){
//     int i,j;
//     for(i=0;i<n;i++){
//         if(*top==-1 || (arr[i]!=st[*top])){
//             *top+=1;
//             st[*top]=arr[i];
//             cnt[*top]=1;
    
//         }
//         else if(arr[i]==st[*top])
//         {
//             cnt[*top]+=1;
//         }
//     }
// }
// int main() {
// 	int arr[100],st[100],cnt[100],i,top=-1,n;
// 	scanf("%d",&n);
// 	for(i=0;i<n;i++){
// 	    scanf("%d", &arr[i]);
// 	}
// 	org_values(st,cnt,arr,n,&top);
// 	for(i=0;i<=top;i++){
// 	    printf("%d %d", st[i], cnt[i]);
// 	}
// 	return 0;
// }























