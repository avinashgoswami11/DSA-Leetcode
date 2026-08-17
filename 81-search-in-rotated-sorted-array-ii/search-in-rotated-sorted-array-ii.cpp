class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==1){ if(nums[0] == target){return true;} else{return false;}}
        int l = 0;
        int r = nums.size() - 1;
        int k = 0;
       
        for(int i=1; i<n;i++){
            if(nums[i]<nums[i-1]){
                k = i;
                break;
            }
        }
        l = 0;
        r = k-1;
        while(l<=r){
           int m = l + (r-l)/2;
            if(nums[m] == target) return true;
            else if(nums[m] > target) r = m-1;
            else l = m+1;
        }
        l = k;
        r = n-1;
        while(l<=r){
          int  m = l + (r-l)/2;
            if(nums[m] == target) return true;
            else if(nums[m] > target) r = m-1;
            else l = m+1;
        }
        return false;
    }
};