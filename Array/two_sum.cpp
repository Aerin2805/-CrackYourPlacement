// leetcode problem number 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int n = nums.size();

        for(int i = 0 ; i <n ; i++){

            int diff = target - nums[i];

            if(m.count(diff))return {m[diff],i};
            m[nums[i]] = i;
        }
        return {0 , 0};
    }
};