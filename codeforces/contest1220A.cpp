/*Cards*/
#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int ctro=0,ctrz=0;
    for(int i=0; i<n; i++){
        if(s[i]=='z')
            ctrz++;
        else if(s[i]=='n')
            ctro++;
    }
    for(int i=0;i<ctro;i++)
        cout<<1<<" ";
    for(int i=0;i<ctrz;i++)
        cout<<0<<" ";
    return 0;
}