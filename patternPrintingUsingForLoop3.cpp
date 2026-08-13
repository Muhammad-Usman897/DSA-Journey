#include<iostream>
using namespace std;
int main(){

    for(int row=1;row<=5;row++){            //        *
        for(int col=1;col<=5-row;col++){    //      * *
            cout<<"  ";                     //    * * *
        }                                   //  * * * *
        for(int col=1;col<=row;col++){      //* * * * *
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int row=1;row<=5;row++){            //        1
        for(int col=1;col<=5-row;col++){    //      2 2
            cout<<"  ";                     //    3 3 3
        }                                   //  4 4 4 4
        for(int col=1;col<=row;col++){      //5 5 5 5 5
            cout<<row<<" ";
        }
        cout<<endl;
    }

    for(int row=1;row<=5;row++){                //        1
        for(int space=1;space<=5-row;space++){  //      1 2
            cout<<"  ";                         //    1 2 3 
        }                                       //  1 2 3 4
        for(int col=1;col<=row;col++){          //1 2 3 4 5
            cout<<col<<" ";
        }
        cout<<endl;
    }

    for(int row=1;row<=5;row++){                        //        A
        for(int col=1;col<=5-row;col++){                //      A B
            cout<<"  ";                                 //    A B C 
        }                                               //  A B C D
        for(char name='A';name<='A'+row-1;name=name+1){ //A B C D E
            cout<<name<<" ";
        }
        cout<<endl;

    }

    for(int row=1;row<=5;row++){                //        1
        for(int col=1;col<=5-row;col++){        //      2 1
            cout<<"  ";                         //    3 2 1
        }                                       //  4 3 2 1
        for(int col=row;col>=1;col--){          //5 4 3 2 1
            cout<<col<<" ";
        }
        cout<<endl;
    }
    
}