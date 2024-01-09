class Solution {
public:
    bool isPalindrome(string s) {
       string p="";
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]) ||(s[i]>='0' && s[i]<='9'))
            p+=tolower(s[i]);
    } 
    int i=0,j=p.size()-1;
        while(i<=j)
        {
            if(p[i]!=p[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};