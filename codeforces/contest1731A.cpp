/* Joey takes money*/
#include<iostream>
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	int t,n,flag;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        long long int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        for(int j=1;j<n;j++){
            if(arr[j]!=1){
                arr[0]=arr[0]*arr[j];
                arr[j]=1;
            }
        }
        long long int s=0;
        for(int j=0;j<n;j++){
            s=s+arr[j];
        }
        long long int ans=s*2022;
        cout<<ans<<endl;
    }
}

