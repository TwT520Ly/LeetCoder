#include <cstdio>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        permuteDFS(nums, 0, result);
        return result;
    }

    void permuteDFS(vector<int>& nums, int start, vector<vector<int>>& result) {
        if(start == nums.size())
            result.push_back(nums);
        for(int i = start; i < nums.size(); i ++) {
            swap(nums[start], nums[i]);
            permuteDFS(nums, start+1, result);
            swap(nums[start], nums[i]);
        }
    }
};


int main() {
    return 0;
}


