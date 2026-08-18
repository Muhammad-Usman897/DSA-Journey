#include<iostream>
using namespace std;

int sum(int a,int b) //Multiple parameters
{
    int ans=a+b;
    return ans;
}

int mul(int a,int b){
    int ans=a*b;
    return ans;
}

void fun(){
    cout<<"Muhammad Usman";
}

bool prime(int n=3) //Default parameter
{
    if(n<2)
    return 0;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<sum(a,b)<<endl;
    cout<<mul(a,b)<<endl;
    fun();
    cout<<endl;
    cout<<prime()<<endl;
    cout<<prime(a)<<endl;
    cout<<fact(a)<<endl;
    cout<<prime(b)<<endl;
    cout<<fact(b)<<endl;
    cout<<prime(b-a)<<endl;
    cout<<fact(b-a)<<endl;
}