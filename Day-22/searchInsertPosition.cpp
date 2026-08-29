#include<iostream>
using namespace std;
int main(){

    //Search insert position
    int arr[]={1,4,6,8,10,14,16,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mid, start=0, end=n-1, index=n, target=15;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
        index=mid;
        break;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
        index=mid;
        end=mid-1;
        }
    }
    cout<<index;
}