#include<iostream>
using namespace std;
int main(){
    //Find Minimum in Rotated Sorted Array
    int arr[]={8,10,2,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mid, ans=arr[0], start=0, end=n-1;

    while(start<=end){

        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        start=mid+1;
        else {
            ans=mid;
            end=mid-1;
        }
    }
        cout<<arr[ans];

}