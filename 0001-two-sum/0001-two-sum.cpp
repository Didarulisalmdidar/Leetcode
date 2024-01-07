class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int search=target-nums[i];
            if(mp.find(search)!=mp.end())
            {
                return {mp[search],i};
            }
            else
                mp[nums[i]]=i;
                
        }
        return{};
        
    }
};
//TC = O(N) SC= O(N)