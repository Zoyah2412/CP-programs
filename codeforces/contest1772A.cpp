/* A+B? */
#include<iostream>
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	int t,a,b;
    cin>>t;
    char arr[3];
    for(int i=1;i<=t;i++){
        cin>>arr[0]>>arr[1]>>arr[2];
        a=int(arr[0])-48;
        b=int(arr[2])-48;
        int c=a+b;
        cout<<c<<endl;
    }
    return 0;
}