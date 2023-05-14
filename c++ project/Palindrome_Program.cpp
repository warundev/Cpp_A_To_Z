#include<iostream>

using namespace std;

int main(){
    string word;
    cout<<"Enter the word : ";
    cin>>word;

    bool isPalindrome=true;
    for (int i = 0; i < word.length()/2; i++)
    {
        if (word[i] !=word[word.length()-1-i])
        {
            isPalindrome=false;
            break;
        }
        
    }
    if (isPalindrome)
    {
    cout<<word<<" is a palindrome."<<endl;
    }
    else{
    cout<<word<<" is not a palindrome."<<endl;
    }

return 0;

}