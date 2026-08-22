#include<iostream>
using namespace std;
int main(){
    //Array initilize methods
    int arr[5]={6,5,3,8,9};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int arr1[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    int arr2[5]={6,5,3};
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    int arr3[5]= {0};
    for(int i=0;i<5;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    //Take input from the user
    int arrInput[5];
    for(int i=0;i<5;i++){
        cin>>arrInput[i];
    }
    for(int i=0;i<5;i++){
        cout<<arrInput[i]<<" ";
    }
    cout<<endl;

    // int size;
    // cout<<"Enter the size of the array: ";
    // cin>>size;
    // int arr4[1000];
    // for(int i=0;i<size;i++){
    //     cin>>arr4[i];
    // }
    // for(int i=0;i<size;i++){
    //     cout<<arr4[i]<<" ";
    // }
    // cout<<endl;

    //Size of a array
    int arr5[5]={2,1,4,3,6};
    cout<<sizeof(arr);
    cout<<sizeof(arr)/sizeof(arr[0]);

}