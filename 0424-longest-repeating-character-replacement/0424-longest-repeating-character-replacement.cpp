class Solution {
public:
    int characterReplacement(string s, int k) {
       map<char,int>mp;
       int l=0,r=0;
        int ans=0;
       while(r!=s.size())
       {
           mp[s[r]]++;
           int mx=0;
           for(char ch='A';ch<='Z';ch++)
           {
               mx=max(mx,mp[ch]);
           }
           int w_size=r-l+1;
           if(w_size-mx<=k)
           {
               ans=max(ans,w_size);
               r++;
           }
           else
           {
               mp[s[l]]--;
               l++;
               w_size=r-l+1;
               ans=max(ans,w_size);
               r++;
           }
       }
        return ans;
    }
};
//tc=O(N)
//SC=O(26)