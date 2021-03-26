#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string red;
        string blue;
        cin>>red;
        cin>>blue;
        
        int r = 0;
        int b = 0;

        for(int i = 0 ; i < n ; i++) {
            if(red[i]>blue[i]) {
                r++;
            }else if(red[i]<blue[i]) {
                b++;
            }else{
                r++;
                b++;
            }
        }

        if(r>b){
            cout<<"RED"<<"\n";
        } else if(r<b) {
            cout<<"BLUE"<<"\n";
        } else{
            cout<<"EQUAL"<<"\n";
        }
    }
}