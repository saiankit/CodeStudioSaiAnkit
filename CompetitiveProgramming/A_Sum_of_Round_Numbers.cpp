#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n;cin>>n;
    //Step #1 - Find the len of number
    int temp = n;
    int len = 0 ;
    while(temp!=0)
    {
      temp = temp / 10; //~Removes the last digit
      len++;
    }
    temp = n;
    int count = 0;
    //Step #2 - Inputting into an array
    int arr[len];
    for(int i = len-1 ; i >=0 ; i-- )
    {
      arr[i] = temp % 10;
      temp = temp / 10;
      if(arr[i]!=0)
      {
        count++;
      }
    }
    //Step #3 and #4
    cout<<count<<"\n";
    for(int i = 0 ; i < len ; i++)
    {
      if(arr[i]!=0)
      {
        cout<<arr[i]*pow(10,len-i-1)<<" ";
      }
    }
    cout<<"\n";
  }
}