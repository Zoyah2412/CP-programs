/*Fafa and his company*/
#include<iostream>
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	int n,ctr=0;
	cin>>n;
	for(int l=1;l<=(n/2);l++){
		if(((n-l)%l)==0)
			ctr++;
	}
	cout<<ctr;
	return 0;
}