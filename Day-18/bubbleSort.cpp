#include<iostream>
using namespace std;

void sortArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
}

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={5,4,3,2,1,6,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortArray(arr,n);
}

//Auxillary Complexity: O(1)
//Time Complexity: O(n^2)