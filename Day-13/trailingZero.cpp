#include<iostream>
using namespace std;

int trailingZeros(int num){
    int count=0;
    while(num>=5){
    count=count+num/5;
    num/=5;
    }
    return count;
}

int main(){
    int num,count=0;
    cout<<"Enter the num: ";
    cin>>num;
    cout<<trailingZeros(num);    
}