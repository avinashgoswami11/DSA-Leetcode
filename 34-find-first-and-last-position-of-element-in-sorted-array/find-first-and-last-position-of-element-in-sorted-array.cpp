class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int first = -1;
        int last = -1;

//first occurence
        while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m] == target){
                first = m;
                r = m-1;
            }
            else if(nums[m] < target){
                l = m+1;
            }
            else{
                r = m-1;
            }

//last occurence
        int l = 0;
        int r = nums.size() - 1;
            while(l<=r){
            int m = l + (r-l)/2;
            if(nums[m] == target){
                last = m;
                l = m+1;
            }
            else if(nums[m] < target){
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
     }

        return {first, last};
    }
};