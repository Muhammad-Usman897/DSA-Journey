#include<iostream>
using namespace std;
int main(){

    int arr[]={2,4,6,7,12,15,14,17,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1;
    int key;
    cout<<"Enter the element for search: ";
    cin>>key;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            cout<<"Found";
            break;
        }
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
}

//Time Complexity ----> Wrost case:O(logn)  Best case:O(1)  Average case:O(logn)