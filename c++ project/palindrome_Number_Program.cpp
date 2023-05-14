#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    int rem,number=0,tem;
    tem=n;

    while(n>0){
        rem=n%10;
        number=(number*10)+rem;
        n=n/10;
    }
    if (tem==number)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}