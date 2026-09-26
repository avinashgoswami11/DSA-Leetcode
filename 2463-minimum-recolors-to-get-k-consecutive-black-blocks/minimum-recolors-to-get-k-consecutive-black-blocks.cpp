class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minW = 0;
        for(int i=0; i<k; i++){
            if(blocks[i]=='W'){
                minW++;
            }
        }
        int ans = minW;
        for(int right=k; right<blocks.size(); right++){
            if(blocks[right]=='W') minW++;
            if(blocks[right-k]=='W')minW--;
            ans = min(ans, minW);
        }
        return ans;
    }
};