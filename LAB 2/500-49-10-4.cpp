//CODEFORCE PROBLEM : 158A
//PROBLEM NAME : NEXT ROUND

#include<iostream>
using namespace std;
int main ()
{ int n,c,b,x=0;
  cin>>n>>c;
  for(int i=0;i<n;i++)
  {  cin>>b;
     if(b>c&&b>0)
      x++;
  }
    cout<<x;
 return 0;
}
