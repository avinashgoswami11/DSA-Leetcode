class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while(low<high){
            int m = low + (high-low)/2;
            int sum = 0;
            int d = 1;
            for(int i : weights){
                 
                if(sum + i > m){
                    d++;
                    sum = 0;
                }
               sum += i;
            }
            
            if(d<=days) high = m;
            else low = m+1;
        }
        return low;
    }
};