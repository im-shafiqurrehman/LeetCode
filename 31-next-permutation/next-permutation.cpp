class Solution {
public:
    void nextPermutation(std::vector<int>& nums) {
        int n = nums.size();
        int k = -1;
        
        // Step 1: Find the largest index `k` such that nums[k] < nums[k + 1]
        for (int i = n - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                k = i - 1;
                break;
            }
        }        
        // If no such `k` exists, reverse the entire array to get the smallest permutation
        if (k == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        // Step 2: Find the largest index `l` greater than `k` such that nums[k] < nums[l]
        for (int l = n - 1; l > k; l--) {
            if (nums[l] > nums[k]) {
                // Step 3: Swap the value of nums[k] with that of nums[l]
               swap(nums[k], nums[l]);
                break;
            }
        }
        // Step 4: Reverse the sequence from nums[k + 1] to the end to get the next permutation
      reverse(nums.begin() + k + 1, nums.end());
    }
};

// https://www.youtube.com/watch?v=LuLCLgMElus  (lecture link)