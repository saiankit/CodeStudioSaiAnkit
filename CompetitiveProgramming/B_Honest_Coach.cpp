#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i ++)
    {
      cin>>arr[i];
    }
    sort(arr, arr+n);
    int minDiff = 200000000;
    for(int i = 1; i < n ; i++)
    {
      minDiff = min(minDiff, arr[i]-arr[i-1]);
    }
    cout<<minDiff<<"\n";
  }
}