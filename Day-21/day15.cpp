#include<iostream>
using namespace std;
int main(){
    //1: Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.
    int num;
    cout<<"Enter the num: ";
    cin>>num;
    int n=1;
    while(n<=num){
        if(n%2==0)
        cout<<n<<" ";
        n++;
    }
    cout<<endl;


    int n1=1;
    int num1=15;
    do
    {
        if(n1%2==0)
        cout<<n1<<" ";
        n1++;
    } while (n1<=num1);
    cout<<endl;

    //2: Find the factorial of a number n using a while loop and do a while loop.
    int fact;
    cout<<"Enter the number for a factorial: ";
    cin>>fact;
    int i=1;
    int mul=1;
    while(i<=fact){
        mul=mul*i;
        i++;
    }
    cout<<mul<<endl;


    int j=1, ans=1, fac=6;
    do
    {   ans=ans*j;
        j++;
    } while (j<=fac);
    cout<<ans<<endl;

    //3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).
    int number=20;
    int k=1;
    while(k<=number){
    if(k%3==0 || k%5==0){
        k++;
        continue;
    }
    cout<<k<<" ";

    k++;
}

    //4: Given a number n, print the corresponding month of it. For n=1, print Jan, n=2, print Feb…, if the user puts any invalid number, don’t do anything. (Use switch here)
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<"January"<<endl;
        break;
    case 2:
        cout<<"Feburary"<<endl;
        break;
    case 3:
        cout<<"March"<<endl;
        break;        
    case 4:
        cout<<"April"<<endl;
        break;
    case 5:
        cout<<"May"<<endl;
        break;
    case 6:
        cout<<"June"<<endl;
        break;
    case 7:
        cout<<"July"<<endl;
        break;
    case 8:
        cout<<"August"<<endl;
        break;
    case 9:
        cout<<"September"<<endl;
        break;
    case 10:
        cout<<"October"<<endl;
        break;
    case 11:
        cout<<"November"<<endl;
        break;
    case 12:
        cout<<"December"<<endl;
        break;
    default:
        cout<<"Enter number b/w 1 to 12"<<endl;
        break;
    }

    //5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.
    char c='A';
    while(c<='Z'){
        cout<<c<<" ";
        c=c+1;
    }
    cout<<endl;
    int z=1;
    while(z<=26){
        char name='a'+z-1;
        cout<<name<<" ";
        z++;
    }

    //6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.
    int prime;
    cout<<"Enter number to check its prime or not: ";
    cin>>prime;
    int p=2;

    if(prime<2)
    cout<<"Numbe is not prime: ";

    while(p<prime){
        if(prime%p==0){
            cout<<"Number is not prime: ";
            break;
        }
        else
        cout<<"Prime";
        break;

        p++;
    }

    
}