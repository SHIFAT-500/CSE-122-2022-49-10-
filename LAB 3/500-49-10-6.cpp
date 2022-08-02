//CODEFORCE PROBLEM : 282A
//PROBLEM NAME : Bit++


#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    char a[40];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
      if(a[1]=='+')
            x++;
        if(a[1]=='-')
            x--;
    }
    cout<<x<<endl;
}
