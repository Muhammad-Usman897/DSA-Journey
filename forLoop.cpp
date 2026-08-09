#include<iostream>
using namespace std;

int main(){
//print number 100 to 200 using for loop
for (int i = 100; i <= 200; i++)
{
    cout<<i<<endl;
}

//print alphabets 'a' to 'z'
for(char name='a';name<='z';name=name+1){
    cout<<name<<endl;
}

//print number in reverse order
int n;
cout<<"Enter the number: ";
cin>>n;
for(int i=n;i>=1;i--){
    cout<<i<<endl;
}

//print number 1 to 100 with the jump of 3
for(int i=1;i<=100;i=i+3){
    cout<<i<<" ";
}

//Multiplication table making
int table;
cout<<"Enter the table number: ";
cin>>table;
for(int i=1;i<=10;i++){
    cout<<table<<"*"<<i<<"="<<table*i<<endl;
// }

//Calculate power of a number
int n,pow,num;
cout<<"Enter the number: ";
cin>>n;
cout<<"Enter power: ";
cin>>pow;
num=n;
for(int i=1;i<pow;i++){
    num=num*n;
}
cout<<n<<" Power "<<pow<<" is "<<num;

// Sum of n natural number
int n, sum=0;
cout<<"Enter the number: ";
cin>>n;
for(int i=1;i<=n;i++){
    sum=sum+i;
}
cout<<"The sum of "<<n<<" is"<<sum;

// Factorial of a number
int num,fact=1;
cout<<"Enter the number: ";
cin>>num;
for(int i=1;i<=num;i++){
    fact=fact*i;
}
cout<<"The factorial of a "<<num<<" is "<<fact;

// Check a number is prime or not
int num,is;
cout<<"Enter the number: ";
cin>>num;
if(num<2){
    cout<<"The number is not prime";
    return 0;
}
else{

    for(int i=2;i<num;i++){
        if(num%i==0){
        cout<<"The number is not prime";
        return 0;
        }
    }
    cout<<"The number is prime";
    return 0;    
}


// print fibonacci series
int last=0,prev=1,curr,n;
cout<<"Enter the number: ";
cin>>n;
for(int i=3;i<=n;i++){
    curr=last+prev;
    last=prev;
    prev=curr;
}
cout<<curr;

    }
}
