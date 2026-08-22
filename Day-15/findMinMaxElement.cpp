#include<iostream>
using namespace std;
int main(){
    //Find minimum element in the array
    int arr[]={5,2,8,3,9};
    int ans=INT32_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<ans)
        ans=arr[i];
    }
    cout<<ans<<endl;

    //Find maximum element in the array
    int arr1[]={3,9,12,54,6};
    int ans1=INT32_MIN;
    for(int i=0;i<5;i++){
        if(arr1[i]>ans1)
        ans1=arr1[i];
    }
    cout<<ans1;

}