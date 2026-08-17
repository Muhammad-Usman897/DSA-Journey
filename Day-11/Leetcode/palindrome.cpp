#include<iostream>
using namespace std;
int main(){
    
    int x;
    cout<<"Enter the num: ";
    cin>>x;
        if(x<0){
            cout<<"Not a palindrome";
        }
        int num=x,rem,ans=0;
        while(num){
            rem=num%10;
            num/=10;
            ans=ans*10+rem;
        }
        if(x==ans)
        cout<<"Palindrome";
        else
        cout<<"Not a palindrome";
        
    }

