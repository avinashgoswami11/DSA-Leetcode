class Solution {
public:
    int maxDepth(string s) {
        int balance = 0;
        int max = 0;
        for(char c : s){
            if (c=='('){
                balance++;
                if(max<=balance){
                max = balance;
                }
            }
            else if(c==')'){
                balance--;
            }
            else{
                continue;
            }
        }
        return max;
    }
};