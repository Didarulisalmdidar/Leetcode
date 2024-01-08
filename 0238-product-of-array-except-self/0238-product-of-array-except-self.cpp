class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pre[n+1],sup[n+1];
        pre[0]=nums[0];
        sup[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
            pre[i]=pre[i-1]*nums[i];
        for(int i=n-2;i>=0;i--)
            sup[i]=nums[i]*sup[i+1];
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                ans.push_back(sup[i+1]);
            else if(i==n-1)
                ans.push_back(pre[i-1]);
            else
                ans.push_back(pre[i-1]*sup[i+1]);
        }
        return ans;
        
        
        
        
    }
};

//TC = O(N)