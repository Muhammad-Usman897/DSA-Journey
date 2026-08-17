#include<iostream>
using namespace std;
int main(){
    int X,sqrt;
    cout<<"Enter the num: ";
    cin>>X;
    for(int i=1;i<X;i++){
        sqrt=i*i;
        if(sqrt==X){
            cout<<i;
        }
        else if(sqrt>X){
            cout<<i-1;
            break;
        }
    }
}