class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left = 0 ; 
        int right = 0 ; 
        while (right< t.size()){
            if (s[left] == t[right]){
                left++;
                right++;
            }
            else if(s[left] != t[right]){
                right++;
            }
        }
        if (left == s.size()){
            return true ; 
        }
        else {
            return false ; 
        }
    }
};