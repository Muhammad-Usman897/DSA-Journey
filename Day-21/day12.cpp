#include<iostream>
using namespace std;
int main(){

    //1: Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO.
    int temp;
    cout<<"Enter the temperature: ";
    cin>>temp;
        if(temp > 70 && temp < 90){
            cout<<"Yes"<<endl;
        }
    else
    cout<<"No"<<endl;

    //2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.
    int num;
    cout<<"Enter the num: ";
    cin>>num;
    if(num%2==0 && num>0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

    //3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    if(age >= 13 && age <= 19){
        cout<<"Person is teenager"<<endl;
    }
    else
        cout<<"Person is not a teenager"<<endl;

    //4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.
    int a,b,c;
    cout<<"Enter the value of a, b, c: ";
    cin>>a>>b>>c;
    if(a > b && a > c)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl; 
    
    cout<<(2*3-48==5/4*6)<<endl;
    cout<<( 6<<2-4*8/2)<<endl;
    cout<<(5>4<3/2-8%4+5)<<endl;
    cout<<(14-8+92>>2+70);
    
}