#include<iostream>
using namespace std;
int main(){

    // -------- Arithmetic Operator --------
    //Binary Operators +,-,*,/,% (double > float > int) ---- {*,/,%} > {+,-} ----
    cout<<13/2<<endl;
    cout<<13.7<<endl;
    cout<<4*2.3<<endl;

    //Unary Operators 1:post increment  2:pre increment  3:post decrement  4:pre decrement
    int a=10;
    cout<<a++<<endl;
    cout<<a<<endl;
    int b=++a;
    cout<<b<<" "<<a<<endl;

    int f=10;
    int d=--f;
    cout<<d<<" "<<f<<endl;
    cout<<f--<<" "<<f<<endl;

    // -------- Comparison Operator -------- {==, >, <, >=, <=, !=} gives answer in 0 or 1
    if(5==4){           //==
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }


    if(5>4){           //>
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }


    if(5<4){           //<
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }


    if(5>=4){           //>=
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }


    if(5<=4){           //<=
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }


    if(5!=4){           //!=
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }

    // -------- Logical Operator -------- {&&, ||, !} gives answer in 0 or 1
    cout<<endl;                             //&&
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y && x>z){
        cout<<"Yes";
    }
    else
    cout<<"No";


    char c; //alphabet is vowel or consonant    //||
    cout<<"Enter your character: ";
    cin>>c;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        cout<<c<<" is a vowel character";
    }
    else{
        cout<<c<<" is a consonant character";
    }

    cout<<!23;          //!


    // -------- Bitwise Operator -------- {&, |, ^, ~, <<, >>}
    cout<<(2&3);
    cout<<(2|3);
    cout<<(2^3);
    cout<<(~5);
    cout<<(6<<1);
    cout<<(6>>1);


    // -------- Assignment Operator -------- {=, +=, -=, *=, /=, %=}
    int i=10;
    i+=3;
    i-=3;
    i*=3;
    i/=3;
    i%=10;
    cout<<i;



}