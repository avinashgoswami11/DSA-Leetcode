class Solution {
public:
    int maxVowels(string s, int k) {
        int vowels = 0;
        for(int i=0; i<k; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') vowels++;
        }
        int ans = vowels;
        for(int right=k; right<s.size(); right++){
            if(s[right]=='a'||s[right]=='e'||s[right]=='i'||s[right]=='o'||s[right]=='u') vowels++;
            if(s[right-k]=='a'||s[right-k]=='e'||s[right-k]=='i'||s[right-k]=='o'||s[right-k]=='u')vowels--;
            ans = max(ans, vowels);
        }
        return ans;
    }
};