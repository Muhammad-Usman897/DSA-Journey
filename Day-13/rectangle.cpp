#include<iostream>
using namespace std;

bool rectangle(int a, int b, int c, int d){
    if((a==b && c==d) || (a==d && b==c) || (a==c && b==d))
    return 1;
    else
    return 0;
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<rectangle(a,b,c,d);
}