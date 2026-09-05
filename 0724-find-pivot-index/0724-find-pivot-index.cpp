class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum = 0  ;
        int total_sum  = 0  ;
        for(int i : nums){
            total_sum += i ;
        }
        for (int i = 0; i< nums.size();i++){
            total_sum -= nums[i] ; 
            if( left_sum == total_sum ){
                return i ;
            }
            left_sum += nums[i] ; 
        }
        return -1;
    }
};