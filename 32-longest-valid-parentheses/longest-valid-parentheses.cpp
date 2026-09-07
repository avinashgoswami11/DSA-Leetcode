class Solution {
public:
    int longestValidParentheses(string s) {
        int result = 0;
        int n = s.size();
        int start = 0;
        int balance = 0;
        
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                
                balance++;
            }
            else{
                balance--;
                if(balance<0){
                balance=0;
                start = i+1;
            }
            else if(balance==0){
            result = max(result, i - start + 1);
        
            }
            
        }
    }

    balance = 0;
    start = n-1;

     for(int i=n-1; i>=0; i--){
            if(s[i] == ')'){
                
                balance++;
            }
            else{
                balance--;
                if(balance<0){
                balance=0;
                start = i-1;
            }
            else if(balance==0){
            result = max(result, start- i + 1);
        
            }
            
        }
    }
        
        return result;
    }
};