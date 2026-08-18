#include<iostream>
using namespace std;

// void swap(int m, int n) //Pass by Value
// {
//     int c;
//     c=m;
//     m=n;
//     n=c;
// }

void swap(int &m, int &n) //Pass by Reference
{
    int c;
    c=m;
    m=n;
    n=c;
}

void swap(float &c, float &d) //Function Overloading
{
    float r;
    r=c;
    c=d;
    d=r;
}

int main(){
    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<endl;
    float f1=4.8,f2=2.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
}