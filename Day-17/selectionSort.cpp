#include<iostream>
using namespace std;
int main(){

    int arr[]={9,7,3,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);


    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
        if(arr[j]<arr[index])
             index=j;
    }
    swap(arr[i],arr[index]);

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //Space complexity:
    //Auxillary space: O(1)

    //Time Complexity
    // O(n power 2)

}