#include<iostream>
using namespace std;
int main(){
    
    // -------------01-------------
    for(int row=1;row<=5;row++){                //        *
        for(int space=1;space<=5-row;space++){  //      * * *
            cout<<"  ";                         //    * * * * *
        }                                       //  * * * * * * *  
        for(int star=1;star<=2*row-1;star++){   //* * * * * * * * *
            cout<<"* ";
        }
        cout<<endl;
    }

    // -------------02-------------
    for(int row=1;row<=5;row++){                //        1 
        for(int space=1;space<=5-row;space++){  //      1 2 1
            cout<<"  ";                         //    1 2 3 2 1
        }                                       //  1 2 3 4 3 2 1
        for(int col=1;col<=row;col++){          //1 2 3 4 5 4 3 2 1
            cout<<col<<" ";
        }
        for(int col=row-1;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    // -------------03-------------
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int row=n;row>=1;row--){                //* * * * * * * * * * *
        for(int space=1;space<=n-row;space++){  //  * * * * * * * * * 
            cout<<"  ";                         //    * * * * * * *
        }                                       //      * * * * *
        for(int star=1;star<=2*row-1;star++){   //        * * * 
            cout<<"* ";                         //          *
        }
        cout<<endl;
    }

    // -------------04-------------
    for(int row=4;row>=1;row--){                
        for(int star=1;star<=row;star++){
            cout<<"* ";                             //* * * * * * * *
        }                                           //* * *     * * *
        for(int space=1;space<=8-2*row;space++){    //* *         * *
            cout<<"  ";                             //*             * 
        }                                                               //* * * * * * * *
        for(int star=1;star<=row;star++){                               //* * *     * * *
            cout<<"* ";                                                 //* *         * *
        }                                                               //*             *
        cout<<endl;                                                     //*             *
    }                                                                   //* *         * *
    for(int row=1;row<=4;row++){                                        //* * *     * * *
        for(int star=1;star<=row;star++){                               //* * * * * * * *
            cout<<"* ";                             //*             *
        }                                           //* *         * *
        for(int space=1;space<=8-2*row;space++){    //* * *     * * *
            cout<<"  ";                             //* * * * * * * *
        }                                            
        for(int star=1;star<=row;star++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // -------------05-------------
    for(int row=1;row<=4;row++){
        for(int star=1;star<=row;star++){
            cout<<"* ";
        }
        for(int space=1;space<=8-2*row;space++){
            cout<<"  ";
        }
        for(int star=1;star<=row;star++){           //*             *
            cout<<"* ";                             //* *         * *
        }                                           //* * *     * * *
        cout<<endl;                                 //* * * * * * * *
    }                                               //* * *     * * *
    for(int row=3;row>=1;row--){                    //* *         * *
        for(int star=1;star<=row;star++){           //*             *
            cout<<"* ";                            
        }
        for(int space=1;space<=8-2*row;space++){
            cout<<"  ";
        }
        for(int star=1;star<=row;star++){
            cout<<"* ";
        }
        cout<<endl;        
    }

    // -------------06-------------
    for(int row=1;row<=5;row++){
        for(int space=1;space<=5-row;space++){
            cout<<" ";
        }
        for(int star=1;star<=row;star++){           //    *
            cout<<"* ";                             //   * * 
        }                                           //  * * * 
        cout<<endl;                                 // * * * *
    }                                               //* * * * * 
     for(int row=5;row>=1;row--){                   //* * * * * 
        for(int space=1;space<=5-row;space++){      // * * * *
            cout<<" ";                              //  * * *
        }                                           //   * *
        for(int star=1;star<=row;star++){           //    * 
            cout<<"* ";
        }
        cout<<endl;
    }

}