// Leetcode Problem Number 15

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i = 0; i < n-1 ; i++){
           int j = i+1;
           int k = n-1;

           while(j<k){
              int sum = nums[i]+nums[j]+nums[k];

              if(sum<0)j++;
              else if(sum>0)k--;
              else {
                ans.push_back({nums[i],nums[j],nums[k]});

                int tempIndex1 = j, tempIndex2 = k;
                    while(j < k && nums[j] == nums[tempIndex1]) j++;
                    while(j < k && nums[k] == nums[tempIndex2]) k--;
              }
           }

           while(i+1 < n && nums[i] == nums[i+1]) i++;
        }

        return ans;
    }
};