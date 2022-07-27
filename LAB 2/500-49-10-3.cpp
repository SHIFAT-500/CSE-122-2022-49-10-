
//CODEFORCE PROBLEM : 231A
//PROBLEM NAME : Team

#include<iostream>
using namespace std;
int main()
{
    int d,b,a,c,x=0;
    cin>>d;
    for(int i=0;i<d;i++)
      {cin>>a>>b>>c;
    if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))
        x++;
      }
      cout<<x;
    return 0;
}
