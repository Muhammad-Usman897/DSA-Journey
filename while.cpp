#include<iostream>
using namespace std;
int main(){

// print talbe using while loop
int num,i=1;
cout<<"Enter the num: ";
cin>>num;
while (i<=10)
{
    cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    i++;
}

//print factor of 10 using while loop
int i=1;
while(i<=10){
    if(10%i==0){
        cout<<i<<endl;
    }
    i++;
}


}