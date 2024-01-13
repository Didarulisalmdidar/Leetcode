class Solution {
public:
    int characterReplacement(string s, int k) {
       vector<int>mp(26);
       int l=0,r=0;
        int ans=0,mx=0;
       while(r<s.size())
       {
           mp[s[r]-'A']++;
           
           mx=max(mx,mp[s[r]-'A']);
           int w_size=r-l+1;
           if(w_size-mx>k)
           {
              mp[s[l]-'A']--;
               l++;
           }
           ans=max(ans,r-l+1);
           r++;
       }
        return ans;
    }
};
//tc=O(N)
//SC=O(26)