#include<iostream>
using namespace std;
int main()
{
    int a;
    a=12;
    cout<<"Size of int "<<sizeof (a)<<endl;

    float b;
    cout<<"Size of float "<<sizeof (b)<<endl;

    char c;
    cout<<"Size of char  "<<sizeof (c)<<endl;

    
    char d;
    cout<<"Size of bool "<<sizeof (d)<<endl;

    
    short int si;
    long int li;
    cout<<"Size of shortint "<<sizeof (si)<<endl;
    cout<<"Size of char "<<sizeof (li)<<endl;
    return 0;
}