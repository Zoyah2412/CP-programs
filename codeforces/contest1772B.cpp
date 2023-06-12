/* Matrix Rotation */
#include<iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define all(x) (x).begin(),(x).end()
using namespace std;
int main(){
	int t,i,j;
    cin>>t;
    for(int x=1;x<=t;x++){
        vector<vector<int>>v;
        v.resize(2);
        for(i=0;i<2;i++)
            v[i].resize(2);
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cin>>v[i][j];
            }
        }
        if((v[0][0]<v[0][1]) && (v[0][0]<v[1][0]) && (v[0][1]<v[1][1]) && (v[1][0]<v[1][1]))
            cout<<"YES";
        else{
            vector<vector<int>>v1=v;
            for(i=0;i<2;i++){
                for(j=i;j<2;j++)
                    swap(v[i][j],v[j][i]);
            }
            for(i=0;i<2;i++){    
                reverse(all(v[i]));
            }
            if((v[0][0]<v[0][1]) && (v[0][0]<v[1][0]) && (v[0][1]<v[1][1]) && (v[1][0]<v[1][1]))
                cout<<"YES";
            else{
                while(v!=v1){
                    for(i=0;i<2;i++){
                        for(j=i;j<2;j++)
                            swap(v[i][j],v[j][i]);
                    }
                    for(i=0;i<2;i++){    
                        reverse(all(v[i]));
                    }
                    if((v[0][0]<v[0][1]) && (v[0][0]<v[1][0]) && (v[0][1]<v[1][1]) && (v[1][0]<v[1][1])){
                        cout<<"YES";
                        break;
                    }
                }
                if(v1==v)
                    cout<<"NO";
            }
        }
        cout<<endl;
    }
    return 0;
}
    