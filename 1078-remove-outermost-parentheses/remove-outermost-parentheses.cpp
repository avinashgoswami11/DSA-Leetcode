class Solution {
public:
    string removeOuterParentheses(string s) {
        int x = 0;
        string ans = "";
        for(char c : s){
            if(c == '('){
                if(x>0){
                    ans += c;
                    
                }
                x++;
                
                
                }
                else{
                    x--;
                    if(x>0){
                        ans += c;
                    }
            }
        }
        return ans;
    }
};