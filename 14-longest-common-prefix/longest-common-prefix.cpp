class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1; i<strs.size(); i++){
            string temp = "";
            for(int j=0; j<strs[i].length() && j<ans.length(); j++){
                if(ans[j] == strs[i][j]){
                    temp += strs[i][j];
                }
                else{
                    break;
                }
            }
            ans = temp;
        }
        return ans;
    }
};