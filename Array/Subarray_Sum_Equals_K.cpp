// Leetcode Problem Number 560

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int sum =0;
        int ans =0;
        m[0]=1;
        for(int i = 0 ; i<nums.size() ; i++){
            sum+=nums[i];
            int t = sum - k;

            if(m.count(t))ans+=m[t];
            m[sum]++;
        }

        return ans;
    }
};