#include<iostream>
using namespace std;

int main(){
    for (int i = 1; i <=5; i++)
    {
        int j=6-i;
        cout<<i<<" "<<j;
        if (i==j)
        {
            cout<<" Number Matched ";
        }
        cout<<endl;
    }
    
}