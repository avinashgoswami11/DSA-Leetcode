class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int n = nums.size();
      int l = 0;
      int r = n-1;
      if(n==1) return nums[0];
      while(l<=r){
        int m = l + (r-l)/2;
        if((nums[l]==nums[l+1]) && (nums[r]==nums[r-1]) && m>0 && m<(n-1)  && ( (nums[m]==nums[m-1]) || (nums[m]==nums[m+1]))){ 
            l+=2;
            r-=2;
        }
        else if(nums[l] != nums[l+1]){
            return nums[l];
        }
        else if(nums[r] != nums[r-1]){
            return nums[r];
        }
        else{
            return nums[m];
        }
      }
      return nums[0];  
    }
};