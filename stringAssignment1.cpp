#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i=1;i<s.size();i+=2){
        s[i]='#';
    }
  cout<<s;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.size();
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        c++;
    }
    cout<<"the number of consonants"<<n-c;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    string str;
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        str+=s[i];
    }
    if(str.compare(s)==0)
        cout<<"Palindrome";
        else
        cout<<"Not Palindrome";
    
    return 0;
} 
#include <iostream>
#include<string.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string str;
     string st;
    int n=s.size();
    for(int i=0;i<n/2;i++)
    {
        st+=s[i];
    }
    for(int i=n-1;i>=n/2;i--)
    {
        str+=s[i];
    }
    
cout<<st+str;
return 0;
}
#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
       int num=int(s[i]);
       cout<<num-48;
    }
    return 0;
}