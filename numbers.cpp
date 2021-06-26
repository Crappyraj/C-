#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0,d=0;
    cin>>n;

    int a[n];
    int b[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    for(int i = 0; i < n; i++)
        cin>>b[i];
        n=a[i];
        while(n>0)
        {
            c++;
            n=n/10;
        }
        n=b[i];
        while(n>0)
        {
            d++;
            n=n/10;
        }
    for(int i = 0; i < n; i++)
    {
        if(c==2  && a[i]%2 == 1 && d==2 && b[i]%2 == 0)
        {
            cout<<a[i]+b[i]<<'\n';
        }
        else if(c==2 && a[i]%2 == 0 && d==2 && b[i]%2 == 1)
        {
            cout<<abs(a[i]-b[i])<<'\n';
        }
        else if(a[i]%2 == 0 && b[i]%2 == 0)
        {
            cout<<a[i]*b[i]<<'\n';
        }
        else if(a[i]%2 == 1 && b[i]%2 == 1)
        {
            cout<<a[i]*b[i]<<'\n';
        }
        else
        {
            cout<<0<<'\n';
        }
    }
    return 0;
}