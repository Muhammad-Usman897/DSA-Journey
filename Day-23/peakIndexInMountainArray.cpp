#include<iostream>
using namespace std;
int main(){

    //Find Peak index in Mountain Array
    int arr[]={2,4,5,7,10,14,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0, end=n-1, mid, ans;

    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
        ans=mid;
            break;
        }
        else if(arr[mid]>arr[mid-1])
        start=mid+1;
        else
        end=mid-1;
    }
    cout<<ans;
}