class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int total = 0;
        for(int i : cardPoints){
            total += i;
        }

        int windowSum = 0;
        int windowSize = n-k;
        for(int i=0; i<windowSize; i++){
            windowSum += cardPoints[i];
        }

        
        int minSum = windowSum;
        for(int right=windowSize; right<n; right++){
            windowSum += cardPoints[right];
            windowSum -= cardPoints[right-windowSize];

            minSum = min(minSum, windowSum);
            
        }

        return total-minSum;
    }
};