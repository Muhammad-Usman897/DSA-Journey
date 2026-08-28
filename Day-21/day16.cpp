#include<iostream>
using namespace std;
int main(){

    //Write a program to convert binary numbers to decimal numbers using a for loop.
    int num=11101;
    int rem, ans=0, mul=1;
    for(int i=num;i>0;i=i/10){
        rem=i%10;
        ans+=rem*mul;
        mul*=2;
    }
    cout<<ans<<endl;

    //Write a program to convert decimal numbers to binary numbers using a for loop.
    int num1=31;
    int rem1, ans1=0, mul1=1;
    for(int i=num1;i>0;i=i/2){
        rem1=i%2;
        ans1=rem1*mul1+ans1;
        mul1*=10;
    }
    cout<<ans1<<endl;

    //Write a program to convert decimal numbers to Octal numbers.
    int num2=25;
    int rem2, ans2=0, mul2=1;
    for(int i=num2;i>0;i=i/8){
        rem2=i%8;
        ans2=rem2*mul2+ans2;
        mul2*=10;
    }
    cout<<ans2<<endl;

    //Write a program to convert Octal numbers to decimal numbers.
    int num3=31;
    int rem3,ans3=0,mul3=1;
    for(int i=num3;i>0;i/=10){
        rem3=i%10;
        ans3=rem3*mul3+ans3;
        mul3*=8;
    }
    cout<<ans3<<endl;

    //Write a program to convert binary to Octal numbers
    int num4=111011;
    int rem4, ans4=0, mul4=1;
    for(int i=num4;i>0;i=i/10){
        rem4=i%10;
        ans4+=rem4*mul4;
        mul4*=2;
    }
    int num5=ans4;
    int rem5, ans5=0, mul5=1;
    for(int i=num5;i>0;i=i/8){
        rem5=i%8;
        ans5=rem5*mul5+ans5;
        mul5*=10;
    }
    cout<<ans5<<endl;

    //Write a program to convert Octal numbers to binary numbers
    int num6=31;
    int rem6,ans6=0,mul6=1;
    for(int i=num6;i>0;i/=10){
        rem6=i%10;
        ans6=rem6*mul6+ans6;
        mul6*=8;
    }
  
    int num7=ans6;
    int rem7, ans7=0, mul7=1;
    for(int i=num7;i>0;i=i/2){
        rem7=i%2;
        ans7=rem7*mul7+ans7;
        mul7*=10;
    }
    cout<<ans7<<endl;

}