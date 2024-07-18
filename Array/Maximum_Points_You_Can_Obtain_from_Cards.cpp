// Leetcode Problem Number 1423

class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int res = INT_MIN;
        for(int i = 0 ; i<k ; i++)ans+=nums[i];
        res = ans;
        int j = n-1;
        int i = k-1;

        while(i>=0){
            ans+=(nums[j] - nums[i]);
            j--;
            i--;
            res=max(ans,res);
        }
        return res;
    }
};