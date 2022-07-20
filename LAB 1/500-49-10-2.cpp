
//CODEFORCE PROBLEM : 71A
//PROBLEM NAME : WatermelonWay Too Long Words

#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,b;
    char x[500];
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>x;
       b=strlen(x);
       if(b<=10)
        cout<<x<<endl;
       else
       cout<<x[0]<<b-2<<x[b-1]<<endl;
    }
    return 0;
}
