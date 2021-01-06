#include <iostream>
using namespace std;
int main()
{
  int x = 0;
  int t;cin>>t;
  while(t--)
  {
    string str;
    cin>>str;
    if(str[1]=='+')
        x++;
    else if(str[1]=='-')
        x--;
  }
  cout<<x<<"\n";
}