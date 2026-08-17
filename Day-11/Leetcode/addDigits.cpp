#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the num: ";
    cin>>num;

        while(num>9){
        int ans=0, rem;
        while(num){
            rem=num%10;
            num/=10;
            ans+=rem;
        }
        num=ans;
        }
        cout<<num;
    }
