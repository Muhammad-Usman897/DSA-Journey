#include<iostream>
using namespace std;
int main(){

    //First and Last Position of element in sorted Array
    int arr[]={2,3,4,4,5,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=5;
    int start=0, end=n-1, mid, first=-1, last=-1;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    cout<<first<<endl;

    start=0, end=n-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    cout<<last;
}