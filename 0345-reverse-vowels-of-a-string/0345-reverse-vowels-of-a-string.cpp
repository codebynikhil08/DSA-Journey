class Solution {
public:
    string reverseVowels(string s) {
        int left = 0 ; 
        int right = s.size()-1;
        string vowels = "aeiouAEIOU";
        while (left<=right){
            if (vowels.find(s[left]) != string::npos) {
                if(vowels.find(s[right])!= string::npos){
                    char temp = s[left];
                    s[left] = s[right];
                    s[right] = temp ;                
                    right--;
                    left++;
                }
                else{
                    right--;
                }
            }
            else{
                left++;
            }
        }
        return s ; 
    }
};