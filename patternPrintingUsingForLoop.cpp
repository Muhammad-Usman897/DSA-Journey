#include<iostream>
using namespace std;

int main(){

    //print * five times
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //print number 10 pattern
    int row,col;
    for(row=1;row<=4;row++){
        for(col=1;col<=5;col++){
            cout<<10<<" ";
        }
        cout<<endl;
    }

    //pattern number print 11111 22222 33333 44444 55555
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }

    //pattern number print 12345 12345 12345 12345 12345
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    // pattern number print 54321 54321 54321 54321 54321
    int row,col;
    for(row=1;row<=5;row++){
        for(col=5;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    // pattern number print 1 4 9 16 25  1 4 9 16 25  1 4 9 16 25  1 4 9 16 25  1 4 9 16 25
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }

    // Pattern of alphabets
    for(char c='a'; c<='e' ;c=c+1){
        for(int j=1;j<=5;j++){
            cout<<c<<" ";
        }
        cout<<endl;
    }

    int count=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}