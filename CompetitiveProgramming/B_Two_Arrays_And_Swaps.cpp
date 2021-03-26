#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n,k;cin>>n>>k;
    int a[n],b[n];
    for(int i = 0 ; i < n ; i++)
    {
      cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
      cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int i = 0;
    while(k>0&&i<n)
    {
      if(a[i]<b[n-i-1])
      {
        swap(a[i],b[n-i-1]);
        k--;
      }
      i++;
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i ++)
    {
      sum = sum + a[i];
    }
    cout<<sum<<"\n";
  }
}