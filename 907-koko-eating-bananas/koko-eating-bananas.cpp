class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        while(low<high){
            int speed = low + (high - low)/2;
            int hours = 0;
            for(int i : piles){
                hours += ceil((double)i/speed);
            }
            if(hours<=h){
                high = speed;
            }
            else{
                low = speed+1;
            }
        }
        return high;
    }
};