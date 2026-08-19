class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while(low<high){
            int m = low + (high - low)/2;
            int sum = 0;
            for(int i : nums){
                sum += ceil((double)i/m);

            }
            if(sum<=threshold){
                high = m;
            }
            else{
                low = m + 1;
            }
        }
        return low;
    }
};