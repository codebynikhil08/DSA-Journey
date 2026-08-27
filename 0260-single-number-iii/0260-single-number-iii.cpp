class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> mpp;
        for (int num :nums){
            mpp[num]++;
        }
        vector<int> ans;
        for ( int num :nums){
            if (mpp[num] == 1 ){
                ans.push_back(num);
            }
        }
        return ans ; 
    }
};