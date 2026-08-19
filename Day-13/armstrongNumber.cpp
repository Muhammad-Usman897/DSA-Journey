#include<iostream>
#include <cmath>
using namespace std;

int countDigit(int num){
    int count=0;
    while(num){
    num/=10;
    count++;
    }
    return count;
}

bool armstrong(int num,int digit){
    int rem,ans=0;
    int n=num;
    while(n){
        rem=n%10;
        n/=10;
        ans=ans+pow(rem,digit);
    }

    if(ans==num)
    return 1;
    else
    return 0;
}

int main(){
    int num;
    cout<<"Enter the num: ";
    cin>>num;

    int digit=countDigit(num);
    cout<<armstrong(num,digit);
}