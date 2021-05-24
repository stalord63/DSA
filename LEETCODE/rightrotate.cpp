class Solution {
public:
    void reverse(vector<int>& num,int low,int high){
        
        while(low<high){
            swap(num[low],num[high]);
            low++;
            high--;
        }
        
        
    }
    void rotate(vector<int>& nums, int k) {
        vector<int> res;
        res=nums;
        int n=res.size();
        k=k%n;
        
        
        
        reverse(res,0,n-1);
        reverse(res,0,k-1);
        reverse(res,k,n-1);
        nums=res;
    }
};