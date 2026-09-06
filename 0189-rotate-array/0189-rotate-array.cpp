class Solution {
public:
    void reversearray(vector<int> &nums,int start,int end){
        while(start<= end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp ;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size() ;
        reversearray(nums,0 , nums.size()-k-1);
        reversearray(nums ,nums.size()- k , nums.size() - 1);
        reversearray(nums , 0 , nums.size() - 1);
    }
};