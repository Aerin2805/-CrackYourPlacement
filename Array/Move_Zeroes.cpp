// Leetcode Problem Number 283

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for(int i = 0 ; i<n ; i++){

            if(i==0 && nums[i]!=0)k++;
            else {
                if(nums[i]!=0){
                    swap(nums[i],nums[k]);
                    k++;
                }
            }
        }
    }
};