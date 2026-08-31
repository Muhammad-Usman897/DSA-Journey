#include<iostream>
using namespace std;
int main(){

    //Search Element in Rotated Sorted Array
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mid, ans=-1, start=0, end=n-1, target=5;

    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]==target){
            ans=mid;
            break; 
        }
        else if(arr[mid>arr[0]]){
            if(arr[start]<=target && arr[mid]>=target)
            end=mid-1;
            else
            start=mid+1;
        }
        else
            if(arr[mid]<=target && arr[end]>=target)
            start=mid+1;
            else
            end=mid-1;
    }
    cout<<ans;
}