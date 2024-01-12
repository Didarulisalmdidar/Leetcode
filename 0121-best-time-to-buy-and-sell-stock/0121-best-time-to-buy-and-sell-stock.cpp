class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0,right=1;
        int ans=0;
        while(right<prices.size())
        {
            if(prices[right]>prices[left])
            {
                int res=prices[right]-prices[left] ;
                ans=max(ans,res);
            }
            else
            {
               left=right;
                
            }
             right++;
        }
        return ans;
        
    }
};
//tc=O(N)
//SC=O(1)