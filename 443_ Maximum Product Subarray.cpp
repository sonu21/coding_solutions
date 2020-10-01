class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        
        int max_pro=0,curr_pro=1;
        for(int i=0;i<nums.size();i++)
        {
            curr_pro=nums[i]*curr_pro;
            max_pro=max(max_pro,curr_pro);
            if(curr_pro==0)
            {
                curr_pro=1;
            }
        }
        curr_pro=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            curr_pro=nums[i]*curr_pro;
            max_pro=max(max_pro,curr_pro);
            if(curr_pro==0)
            {
                curr_pro=1;
            }
        }
        return max_pro;
        
    }
};
