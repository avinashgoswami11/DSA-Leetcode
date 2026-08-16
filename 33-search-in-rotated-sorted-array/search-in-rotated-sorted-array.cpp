class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==1) return nums[0]==target ? 0 : -1;

        int l = 0;
        int r = nums.size() - 1;
        int k = 0;
        
        while(l <= r){
            int m = l + (r-l)/2;
            if(m>0 && nums[m]<nums[m-1]){
                k = m;
                break;
            }
            else if(nums[m]>=nums[0]){
                l = m+1;
            }
            else{
                r = m-1;
            
            }
            
        }
    
        l = 0;
        r = k-1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m] == target){
                return m;
            }
            else if(nums[m]<target){
                l = m+1;
            }
            else{
                r = m-1;
            }
        }

        l = k;
        r = nums.size() - 1;
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m] == target){
                return m;
            }
            else if(nums[m]<target){
                l = m+1;
            }
            else{
                r = m-1;
            }
        
        }
        return -1;
    }
};