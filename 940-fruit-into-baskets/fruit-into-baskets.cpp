class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxf = *max_element(fruits.begin(), fruits.end());
        vector<int> freq(maxf+1, 0);
       int n = fruits.size();
       int left = 0;
       int ans = 0;
       int distinct = 0;
       for(int right = 0; right<n; right++){
        
        if(freq[fruits[right]]==0){ 
            distinct++; 
            
        }

        freq[fruits[right]]++;

        while(distinct>2){
            freq[fruits[left]]--;
           
            if(freq[fruits[left]]==0){
                distinct--; 
            }
            left++;
        }
        ans = max(ans, right-left+1);
       }
       return ans;
    }
};