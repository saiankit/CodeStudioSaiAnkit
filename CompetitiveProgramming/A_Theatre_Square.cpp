#include <iostream>
using namespace std;
int main()
{
    long long int n,m,a,res;
    cin>>n>>m>>a;
    res = n%a==0 ? n/a : n/a + 1;//N side
    res = res* (m%a==0 ? m/a : m/a + 1);//N side * M side
    cout<<res<<"\n";
}