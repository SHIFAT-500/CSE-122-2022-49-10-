//CODEFORCE PROBLEM : 158A
//PROBLEM NAME : NEXT ROUND

#include<iostream>
using namespace std;
int main ()
{ int a,c,b[100],x=0,i;
  cin>>a>>c;
  for(int i=0;i<a;i++)
  {  cin>>b[i];
  }
  for(int i=0;i<a;i++)
  {
      if((b[i]>=b[c-1])&&(b[i]>0))
       x++;
  }
    cout<<x<<endl;
 return 0;
}
