#include<iostream>
using namespace std;
int main(){
    //   First Pattern:
    //    4 4 4 4 4 4
    //    4 4 4 4 4 4
    //    4 4 4 4 4 4  
    //    4 4 4 4 4 4
    //    4 4 4 4 4 4 
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<4<<" ";
        }
        cout<<endl;
    }

    //   Second Pattern:
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    //    1 4 9 16 25
    for(int i=1;i<=6;i++){
    for(int j=1;j<=5;j++){
        cout<<j*j<<" ";
    }
    cout<<endl;
}


    //  Third Pattern:
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    // 1 8 27 64 125 216
    for(int i=1;i<=5;i++){
        for(int j=1;j<=6;j++){
            cout<<j*j*j<<" ";
        }
        cout<<endl;
    }

//    Fourth Pattern:
//     F G H I J K  
//     F G H I J K
//     F G H I J K
//     F G H I J K
//     F G H I J K

    for(int i=1;i<=5;i++){
        for(char c='F';c<='K';c=c+1){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}