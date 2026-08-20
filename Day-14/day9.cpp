#include<iostream>
using namespace std;
int main(){

    // First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
    //          *
    //         * *
    //        * * *
    //       * * * *
    //      * * * * *
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }

//     Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
    
//               1
//             1 2 3
//           1 2 3 4 5
//         1 2 3 4 5 6 7
//       1 2 3 4 5 6 7 8 9
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    //         A
    //       A B A
    //     A B C B A
    //   A B C D C B A
    // A B C D E D C B A
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            char c='A';
            c='A'+k-1;
            cout<<c<<" ";
        }
        for(char c='A'+i-2;c>='A';c=c-1){
            cout<<c<<" ";
        }
        cout<<endl;
    }

        //     *
        //    * *
        //   * * *
        //  * * * *
        // * * * * *
        // * * * * * 
        //  * * * *
        //   * * *  
        //    * *  
        //     *
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=5;i>=1;i--){
            for(int j=1;j<=5-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"* ";
            }
            cout<<endl;
        }

}