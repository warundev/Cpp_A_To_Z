#include<iostream>
using namespace std;

int main(){
    string FirstName,LastName,FullName;

    cout<<"Enter the First Name : ";
    cin>>FirstName;
    cout<<"Enter the Last Name : ";
    cin>>LastName;

    FullName = FirstName + " " + LastName;
    cout<<"Your Full Name is : "<<FullName;

    return 0;
}