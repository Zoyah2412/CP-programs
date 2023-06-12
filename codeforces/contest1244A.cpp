/* pens and pencils*/
#include<iostream>
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int a,b,c,d,k,x,y;
		cin>>a>>b>>c>>d>>k;
		if(a%c==0)
			x=a/c;
		else
			x=(a/c)+1;
		if(b%d==0)
			y=b/d;
		else
			y=(b/d)+1;
		if((x+y)>k)
			cout<<"-1";
		else
			cout<<x<<" "<<y;
		cout<<endl;
	}
	return 0;
}

