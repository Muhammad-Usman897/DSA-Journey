#include<iostream>
using namespace std;
int main(){
    //first Approach
    int arr[]={1,2,4,5,6,7};
    for(int i=0;i<6;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<endl;
            break;
        }
    }

    //Second Approach
    int n=7;
    int arr1[n-1]={1,2,3,4,6,7};
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr1[i];
    }
    sum=(n*(n+1)/2)-sum;
    cout<<sum;

}