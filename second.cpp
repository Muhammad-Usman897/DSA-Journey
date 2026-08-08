#include<iostream>
using namespace std;
int main(){
    // ------------ how to take input from user ------------
    int a,b;
    cout<<"Enter you first Number: ";
    cin>>a;
    cout<<"Enter your second NUmber: ";
    cin>>b;
    cout<<"Sum of Numbers is: "<<a+b;


    // ------------ Typecasting in c++ ------------
    int a = 66;
    char c = 'b';
    a=c; //a store ASCII value of c
    cout<<a;


    // ------------ If-else statement ------------
    int package;
    cin>>package;
    if(package>10){
        cout<<"Accepted";
    }
    else{
        cout<<"Rejected";
    }

    int marks; 
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>33)
    cout<<"Pass";
    else
    cout<<"fail";

    int a,b; //a is greater or not
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    int num; //check num is even or odd
    cout<<"Enter your number: ";
    cin>>num;
    if(num%2==0){
        cout<<num<<" is Even number";
    }
    else{
        cout<<num<<" is odd number";
    }

    int number; //check number +ive or -ive
    cout<<"Enter your number: ";
    cin>>number;
    if(number>0){
        cout<<number<<" is positive";
    }
    else if(number==0){
        cout<<number<<" is 0";
    }
    else{
        cout<<number<<" is negative";
    }

    char c; //alphabet is vowel or consonant
    cout<<"Enter your character: ";
    cin>>c;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        cout<<c<<" is a vowel character";
    }
    else{
        cout<<c<<" is a consonant character";
    }

    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n==1){
        cout<<"Monday";
    }
    else if(n==2){
        cout<<"Tuesday";
    }
    else if(n==3){
        cout<<"Wednesday";
    }
    else if(n==4){
        cout<<"Thursday";
    }
    else if(n==5){
        cout<<"Friday";
    }
    else if(n==6){
        cout<<"Saturday";
    }
    else if(n==7){
        cout<<"Sunday";
    }
    else{
        cout<<"Wrong number! Please enter number between 1 to 7";
    }


    // ------------ For Loop ------------
    // print Anything 5 times
    for(int i=1;i<=5;i++){
        cout<<"Muhammad Usman"<<endl;
    }

    // print n natural number
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }

    // print square 1 to n
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" Square is: "<<i*i<<endl;
    }

    //print all even number upto n
    int n;
    cout<<"ENter the number: ";
    cin>>n;
    for(int i=2;i<=n;i=i+2){
         cout<<i<<endl;
        }
    
}