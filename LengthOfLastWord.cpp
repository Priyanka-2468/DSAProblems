class Solution {
public:
    int lengthOfLastWord(string s) {
    int l= s.length();
    bool flag=false;
    int count=0;
    for(int i=l-1;i>=0;i--){
        if(s[i]==' ' && flag==true)
        break;
        if(s[i]!=' ')
        {
            flag=true;
            count++;
        }
    }
    return count;    
    }
};