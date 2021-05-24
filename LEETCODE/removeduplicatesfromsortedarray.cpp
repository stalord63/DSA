class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int res=1;
        int n=nums.size();
        if(n==0)
            return n;
        for(int i=0;i<n;i++){
            
            if(nums[i]!=nums[res-1])
            {nums[res]=nums[i];
            res++;}
        }
            return res;
        
    }
};