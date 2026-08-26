#include<iostream>
using namespace std;

void sortArray(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the element in array at "<<i<<" index: ";
        cin>>arr[i];
    }

    sortArray(arr,n);
}

//space complexity: O(1)
//Time Complexity: Wrost case: O(n^2), Best case: O(n), Average case: O(n^2)