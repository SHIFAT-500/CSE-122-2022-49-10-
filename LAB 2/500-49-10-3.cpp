
//CODEFORCE PROBLEM : 231A
//PROBLEM NAME : Team

#include<iostream>
using namespace std;
int main()
{
    int n,b,a,c,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
      {cin>>a>>b>>c;
    if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))
        x++;
      }
      cout<<x;
    return 0;
}
