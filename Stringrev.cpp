#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    string str;
    for(int i=s.length()-1;i>=0;i--){
        str+=s[i];
    }
    cout<<s+str;

    return 0;
}