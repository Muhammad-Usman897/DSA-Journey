#include<iostream>
using namespace std;
int main(){

// ---------- While Loop ----------
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
int ii=1;
while(ii<=10){
    if(10%ii==0){
        cout<<ii<<endl;
    }
    ii++;
}


    // ---------- do-While Loop ----------
    //print sum of n natural number using do-while loop
    int sum=0,x=1;
    do
    {
        sum=sum+x;
        x++;
    } while (x<=10);
    cout<<"The sum of: "<<sum<<endl;

    // ---------- break, continue ----------
    //break
    for(int i=1;i<=10;i++){
        if(i==4){
            break;
        }
        cout<<i<<" ";
    }
    cout<<endl;

    //continue
    for(int i=1;i<=10;i++){
        if(i%4==0)
        continue;
        cout<<i<<" ";
    }
    
    // ---------- switch ----------
    int z=1;
    switch (z)
    {
    case 1:
        cout<<"Usman";
        break;

    case 2:
        cout<<"Furqan";
        break;
    
    default:
        cout<<"Jamal";
        break;
    }

    // ---------- Scope of a varible ----------
    int n=10;
    int y=20;
    cout<<n;
    if(y==20){
        int n=30;
        cout<<n;
    }

}