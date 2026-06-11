class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(int idx, vector<int> candidates, int target, vector<int> curr){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if(target < 0)return;

        for(int i = idx; i < candidates.size(); i++){
            curr.push_back(candidates[i]);
            backtrack(i, candidates, target - candidates[i], curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        backtrack(0, candidates, target, curr);
        return ans;
    }
};
