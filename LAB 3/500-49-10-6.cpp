//CODEFORCE PROBLEM : 282A
//PROBLEM NAME : Bit++


#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    char s[40];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
      if(s[1]=='+')
            x++;
      if(s[1]=='-')
            x--;
    }
    cout<<x<<endl;
    return 0;
}
