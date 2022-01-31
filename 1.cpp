#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin >> t;
    while(t--){
        int m,x,y,arr[m];
        cin>>m>>x>>y;
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        int z=x*y;
        int brr[100]={0};
        int a,b,c;
        for(int i=0;i<m;i++){
            a=arr[i]-x*y;
            b=arr[i]+x*y;
            for(int i=a;i<=b;i++){
                brr[i]=1;
            }

        }
        for(int i=0;i<100;i++){
            if(brr[i]==0) count ++;
        }
        cout<<count<<endl;

    }
}