class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        
        while(low<high){
            int m = low + (high-low)/2;
            int sum = 0;
            int n = 1;
            for(int i : nums){
                if(sum + i > m){
                    n++;
                    sum = 0;
                }
                sum += i;
            }
            if(n<=k) high = m;
            else low = m + 1;
        }
        return low;
    }
};