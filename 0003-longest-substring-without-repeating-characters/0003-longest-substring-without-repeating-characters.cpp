class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        unordered_set<char>se;
        int ans=0;
        while(r<s.size())
        {
            while(se.find(s[r])!=se.end())
            {
                se.erase(s[l]);
                l++;
            }
            ans=max(ans,r-l+1);
            se.insert(s[r]);
            r++;
        }
        return ans;
      
    }
};
//TC=O(N)
//SC=O(N)