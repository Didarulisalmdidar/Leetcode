class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>s(nums.begin(),nums.end());
        int longest=0;
        for(auto it:s)
        {
            int len=1;
           if(!s.count(it-1))
           {
               while(s.count(it+len))
               {
                   len++;
               }
           }
            longest=max(longest,len);
        }
        
        return longest;
    }
    
};

//TC= O(N)