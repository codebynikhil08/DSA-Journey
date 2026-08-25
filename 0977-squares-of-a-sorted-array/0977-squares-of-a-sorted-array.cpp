class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i =0 ; i< nums.size() ;i++){
            nums[i] = (nums[i]*nums[i]);
        }
        for (int i = nums.size() -1 ; i >= 0 ; i--){
            for(int j = 0 ; j < i ;j++){
                if( nums[j] >=  nums[i] ){
                    int temp = nums[j] ;
                    nums[j] = nums[i] ; 
                    nums[i] = temp ; 
                }
            }
        }
        return nums;
    }
};