// Dutch National Flag algorithm
// // Leetcode Problem Number 75
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        int j = n-1;
        int k = 0;

        while(k<=j){

            if(nums[k]==0){
                swap(nums[i],nums[k]);
                i++;
                k++;
            } else if(nums[k]==2){
                swap(nums[k],nums[j]);
                j--;
            } else k++;
        }
    }
};