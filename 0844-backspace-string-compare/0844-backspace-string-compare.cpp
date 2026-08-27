class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        int i = n1-1 ,j = n2-1;
        int skips = 0 ; 
        int skipt = 0; 

        while(i >= 0 || j >= 0 ){
            while ( i >=0 ){
                if (s[i] == '#'){
                    skips++;
                    i--;
                }
                else if(skips > 0 ){
                    skips--;
                    i--;
                }
                else {
                    break; 
                }
            }
            while(j>=0){
                if(t[j] == '#'){
                    skipt++;
                    j--;
                }
                else if( skipt >0 ){
                    skipt--;
                    j--;
                }
                else{
                    break;
                }
            }

            if (i>=0 && j>= 0){
                if(s[i] != t[j]){
                    return false ;
                }
                i--;
                j--;

            }
            else if (i>= 0 || j>= 0 ){
                return false;
            }
        }
        return true;
    }
};