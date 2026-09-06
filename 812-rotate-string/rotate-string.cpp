class Solution {
public:
    bool rotateString(string s, string goal) {
        int shift = -1;
        if(s.size()!=goal.size()) return false;

        for(int shift=0; shift<goal.size(); shift++){
            if(s[0]!=goal[shift]){
                continue;
                
            }
        
        

        string word = "";

        for(int i=shift; i<goal.size(); i++){
            word += goal[i];
        }

        for(int i=0; i<shift; i++){
            word += goal[i];
        }
         bool same = true;
        for(int i = 0; i<s.size(); i++){
            if(s[i] != word[i]){
                same = false;
                break;
            }
        }

        if(same) return true;

        }

       

        return false;
    }
};