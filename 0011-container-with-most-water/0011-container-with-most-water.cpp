class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int ans=0;
        while(left<right)
        {
            int res=min(height[left],height[right]);
            int dis=right-left;
            int tot=res*dis;
            if(tot>ans)
                ans=tot;
            if(res==height[left])
                left++;
            else
                right--;
            
        }
        return ans;
        
    }
};