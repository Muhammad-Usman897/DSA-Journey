#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,8,11,5};
    int x=0, index=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            index=i;
            break;
        }
    }
    cout<<index;

}