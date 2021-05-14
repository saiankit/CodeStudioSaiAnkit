#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//TODO: Function for isVowel  "A", "O", "Y", "E", "U", "I"
bool isVowel(char ch) {
    if(ch < 97) {
        ch = ch + 32;
    }
    if(ch=='a'||ch=='y'||ch=='o'||ch=='e'||ch=='u'||ch=='i') {
        return true;
    }
    return false;
}

int main() {
    string s;
    cin>>s;
    for(char ch: s) {
        if(!isVowel(ch)){
            //TODO : Find the lowercase version
            if(ch<97) {
                ch = ch + 32;
            }
            cout<<"."<<ch;
        }
    }
    cout<<"\n";
}