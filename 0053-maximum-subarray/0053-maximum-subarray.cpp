class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum = 0 , max_sum = INT_MIN ;
        for ( int i : nums )
        { 
            curr_sum = curr_sum + i ; 
            max_sum = max(curr_sum, max_sum);
            if (curr_sum < 0 ){
                curr_sum =0 ; 
            }
        }
        return max_sum ;
        
    }
};