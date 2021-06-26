#include<iostream>
using namespace std;
int main()
{
    int isLowercaseVowel,isUppercaseVowel;
    char c;
    cout<<"enter an alphabet \n";
    cin>>c;
    isUppercaseVowel=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    isLowercaseVowel=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' );
    if(isLowercaseVowel||isUppercaseVowel )
    {
        cout<<c<<" is a vowel";
    }
    else
    {
     cout<<c<<" is a consonant";   
    }
    
}