#include<iostream>
using namespace std;
int main(){
    //Decimal to binary conversion
    int num;
    cout<<"Enter the num: ";
    cin>>num;
    int rem,ans=0,mul=1;
    while(num>0){
        rem=num%2;
        num/=2;
        ans+=rem*mul;
        mul*=10;
    }
    cout<<ans<<endl;

    //Binary to decimal conversion
    int binNum;
    int remi,answer=0,mult=1;
    cout<<"Enter the number: ";
    cin>>binNum;
    while(binNum){
        remi=binNum%10;
        binNum=binNum/10;
        answer=remi*mult+answer;
        mult=mult*2;
    }
    cout<<answer;

}