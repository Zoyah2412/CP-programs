/*Absolute sorting*/
#include<iostream>
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
	int t,n,flag;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        for(int k=0;k<n-1;k++){
                if(arr[k]<=arr[k+1])
                    flag=1;
                else{
                    flag=0;
                    break;
                }
        }
        if (flag==1)
            printf("0\n");
        else{
            int m=arr[0];
            for(int j=0;j<n-1;j++){
                m=max(m,arr[j+1]);
            }
            int s=1,e=m,mid,ans;
            while(s<=e){
                flag=0;
                int mid=(s+e)/2;
                for(int j=0;j<n-1;j++){
                    if((abs(arr[j]-mid))>(abs(arr[j+1]-mid))){
                        if(arr[j]<=arr[j+1])
                            e=mid-1;
                        else
                            s=mid+1;
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    ans=mid;
                    break;
                }
            }
            if(s>e)
                ans=-1;
            printf("%d \n",ans);
        }
    }
    return 0;
}