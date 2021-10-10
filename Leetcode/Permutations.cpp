Link-https://leetcode.com/problems/permutations/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n = nums.size();
         vector<vector<int>> Arr;
        sort(nums.begin(),nums.end());
        
        do {
            vector<int> Arr1;
            for(int i=0;i<n;i++)
                Arr1.push_back(nums[i]);
            Arr.push_back(Arr1);
    } while (next_permutation(nums.begin(), nums.end()));
 
        return Arr;
    }
};
