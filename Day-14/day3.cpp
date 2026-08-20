#include<iostream>
using namespace std;
int main(){
    //----------- For Loop in advance -----------
    //Print number from 280 to 250 with the help of for loop.
    for(int i=280;i>=250;i--){
        cout<<i<<" ";
    }

    //Print char from ‘A’ to ‘Z’ with the help of a for loop.
    for(int i=1;i<=26;i++){
        char c='A';
        c='A'+i-1;
        cout<<c<<" "<<endl;
    }

    //Print char from ‘Z’ to ‘A’ with the help of a for loop.
    for(int i=1;i<=26;i++){
        char c='Z';
        c='Z'-i+1;
        cout<<c<<" "<<endl;
    }

    //There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
    for(int i=220;i<=730;i+=7){
        cout<<i<<" ";
    }

    //Print Sum of square of first n natural number.
    int n;
    cout<<"Enter the num: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i*i<<" ";
    }

    //Print Sum of cube of first n natural number
    int n1;
    cout<<"Enter the num: ";
    cin>>n1;
    for(int i=1;i<=n1;i++){
        cout<<i*i*i<<" ";
    }

    //Print n’th Fibonacci number.
    int num;
    cout<<"Enter n'th fibbonacci num: ";
    cin>>num;
    int curr,last=0,prev=1;
    for(int i=3;i<=num;i++){
        curr=last+prev;
        last=prev;
        prev=curr;
    }
    cout<<curr;
}