class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int l = 0; int m = n - 1;
        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--){
            if (abs(nums[l]) >= abs(nums[m])){
                ans[i] = nums[l] * nums[l];
                l++;
            }else{
                ans[i] = nums[m] * nums[m];
                m--;
            }
        }
        return ans;
    }
};