class Solution {
public:
    string largestOddNumber(string num) {
        string ans = "";
        int odd = -1;
        for(int i=0; i<num.length(); i++){
            if(num[i]%2==1){
                odd = i;
                
            }
        }
        
        for(int j=0; j<=odd; j++){
            ans += num[j];
        }
        return ans;
    }
};