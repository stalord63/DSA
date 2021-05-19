class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>s;
        int n=nums.size();
        int power=pow(2,n);
        
        for( int  counter=0;counter<power;counter++)
        {
            vector<int> yo;
            for(int j=0;j<n;j++)
                if(((counter)&(1<<j))!=0)
                   yo.push_back(nums[j]); 
            
            s.push_back(yo);
        }
        return s;
    }
};