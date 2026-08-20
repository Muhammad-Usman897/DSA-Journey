#include<iostream>
using namespace std;
int main(){

    //----------------- If-else -----------------
    //Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
    int n1=15,n2=12;
    if(n1>n2){
        cout<<n1<<endl;
    }
    else if(n2>n1)
    {
        cout<<n2<<endl;
    }
    else
    cout<<"Number are same"<<endl;

    //Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
    int age=26;
    if(age>18)
        cout<<"Adult"<<endl;
    else
    cout<<"Teenager"<<endl;

    //Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
    int n=5;
    if(n==1)
    cout<<"January";

    else if(n==2)
    cout<<"Feburary";

    else if(n==3)
    cout<<"March";

    else if(n==4)
    cout<<"April";

    else if(n==5)
    cout<<"May";

    else if(n==6)
    cout<<"June";

    else if(n==7)
    cout<<"July";

    else if(n==8)
    cout<<"August";

    else if(n==9)
    cout<<"September";

    else if(n==10)
    cout<<"October";

    else if(n==11)
    cout<<"November";

    else if(n==1)
    cout<<"December";

    else
    cout<<"number will be greater than 0 and less than 13.";

    //Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.
    int ag;
    cout<<"Enter the age: ";
    cin>>ag;
    if(ag<12 || ag>65){
        cout<<"Yes";
    }
    else
    cout<<"NO";


    //----------------- for Loop -----------------
    //Print “Pakistan will win the World Cup 2023”, 20 times.
    for(int i=1;i<=20;i++){
        cout<<"Pakistan will win the World Cup 2023"<<endl;
    }
    cout<<endl;

    //Print all Odd numbers from 1 to n, take n as an input from the user.
    int num;
    cout<<"Enter the num: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%2==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    //Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
    int num1;
    cout<<"Enter the number: ";
    cin>>num1;
    for(int i=1;i<=num1;i++){
        if(i%4==0){
            cout<<i<<" ";
        }
    }

}