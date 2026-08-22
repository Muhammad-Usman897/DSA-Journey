#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,4,3,8,5,1};
    int ans=INT32_MIN;
    for(int i=0;i<7;i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    int second=INT32_MIN;
    for(int i=0;i<7;i++){
        if(ans!=arr[i]){
            second=max(second,arr[i]);
        }
    }
    cout<<second;
}