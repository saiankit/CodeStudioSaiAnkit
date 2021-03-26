#include <iostream>
using namespace std;
long long int ceil(long long int a, long long int b , long long int c, long long int d)
{
  if((a-b)%(c-d))
    return (a-b)/(c-d) + 1;
  else
    return (a-b)/(c-d);
}
int main()
{
  int t;cin>>t;
  while(t--)
  {
    long long int a,b,c,d,bedTime;cin>>a>>b>>c>>d;
    if(b>=a)
    {
      bedTime = b;
    }
    else
    {
      if(d>=c)
        bedTime = -1;
      else
        bedTime = b + c*ceil(a,b,c,d);
    }
    cout<<bedTime<<"\n";
  }
}