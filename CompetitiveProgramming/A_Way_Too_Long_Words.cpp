#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while (k--)
    {
        char s[100];
        cin>>s;
        int len = strlen(s);
        if(len>10)
        {
            cout<<s[0]<<len -2 <<s[len-1]<<"\n";
        }
        else
        {
            cout<<s<<"\n";
        }
    }
}