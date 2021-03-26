#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int ca = 0 , cb = 0;int id = 0;
    for(int i = 0 ; i < str.size();i++)
    {
        if(str[i]=='0')
        {
            cb = 0 ;
            ca++;
            if(ca==7)
            {
                id = 1;
                break;
            }
        }
        else
        {
            ca = 0 ;
            cb++;
            if(cb==7)
            {
                id = 1;
                break;
            }
        }
        
    }
    if(id)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }  
}