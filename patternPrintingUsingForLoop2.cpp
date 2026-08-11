#include<iostream>
using namespace std;
int main(){
    int row,col;                            //*
    for(row=1;row<=5;row++){                //* *
        for(col=1;col<=row;col++){          //* * *
            cout<<"* ";                     //* * * *
        }                                   //* * * * *
        cout<<endl;                 
    }

    for(int row=1;row<=5;row++){            //1
        for(int col=1;col<=row;col++){      //1 2
            cout<<col<<" ";                 //1 2 3
        }                                   //1 2 3 4
        cout<<endl;                         //1 2 3 4 5
    }     
                                    
    for(int row=1;row<=5;row++){            //1
        for(int col=1;col<=row;col++){      //2 2
            cout<<row<<" ";                 //3 3 3
        }                                   //4 4 4 4
        cout<<endl;                         //5 5 5 5 5
    }                                

    for(int row=1;row<=5;row++){            //1
        for(int col=row;col>=1;col--){      //2 1
            cout<<col<<" ";                 //3 2 1
        }                                   //4 3 2 1     
        cout<<endl;                         //5 4 3 2 1
    }

    for(int row=1;row<=5;row++){            //a
        for(int col=1;col<=row;col++){      //b b
            char name='a'+(row-1);          //c c c
            cout<<name<<" ";                //d d d d
        }                                   //e e e e e 
        cout<<endl;
    }

    for(int row=5;row>=1;row--){            //* * * * * 
        for(int col=1;col<=row;col++){      //* * * *
            cout<<"* ";                     //* * * 
        }                                   //* *
        cout<<endl;                         //*
    }


    for(int row=5;row>=1;row--){            //1 2 3 4 5
        for(int col=1;col<=row;col++){      //1 2 3 4
            cout<<col<<" ";                 //1 2 3
        }                                   //1 2
        cout<<endl;                         //1
    }        

    for(int row=1;row<=5;row++){            //5
        for(int col=5;col>=5-row+1;col--){  //5 4
            cout<<col<<" ";                 //5 4 3
        }                                   //5 4 3 2       
        cout<<endl;                         //5 4 3 2 1
    }
                                    
}