#include <iostream>
using namespace std;
int main()
{
    int n,count;
    cin>>n;
    int res = 0;
    while(n--)
    {
        count = 0;
        int arr[3];
        for(int i = 0 ; i <3 ; i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                count ++;
            }
        }
        if(count >=2)
        {
            res ++;
        }
    }
    cout<<res<<"\n";
}