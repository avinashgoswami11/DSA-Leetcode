class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long need = 1LL*m*k;
        if(need>bloomDay.size()){
            return -1;
        }
        int low = 1;
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while(low<high){
            int day = low + (high-low)/2;
            int flowers = 0;
            int bouquet = 0;
            for(int i : bloomDay){
                if(i<=day){
                    flowers++;
                    if(flowers==k){
                        bouquet++;
                        flowers = 0;
                    }
                }
                else{
                    flowers = 0;
                }
            }
            if(bouquet>=m){
                high = day;
            }
            else{
                low = day + 1;
            }
        }
        return low;
    }
};