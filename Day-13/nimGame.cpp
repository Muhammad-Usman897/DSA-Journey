#include<iostream>
using namespace std;

bool canWinNim(int n){
    if(n%4!=0)
    return 1;
    else
    return 0;
}

int main(){
    int n;
    cout<<"Enter the num: ";
    cin>>n;
    cout<<canWinNim(n);
}