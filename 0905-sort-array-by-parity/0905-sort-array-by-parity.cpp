class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int low = 0 ;
        int mid = 0 ;
        int high = nums.size()-1;
        while(mid<=high){
            if (nums[mid] % 2 == 0 ){
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp ; 
                mid++;
                low++;
            }
            else if (nums[mid] % 2 == 1){
                mid++;
            }
        }
        return nums ; 
    }
};