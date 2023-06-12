/* Nastya is reading a book */
#include<iostream>
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	int n;
	cin>>n;
	int larr[n],rarr[n],ctr=0;
	for(int i=0;i<n;i++)
		cin>>larr[i]>>rarr[i];
	int k;
	cin>>k;
	for(int i=0;i<n;i++)
		if(k>=larr[i]&&k<=rarr[i])
			ctr++;
		else if(k<larr[i])
			ctr++;
	cout<<ctr;
    return 0;
}