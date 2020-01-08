#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int length = nums.size();
       int low = 0;
       int high = length - 1;
       while(low <= high) {
           int mid = low + (high - low) / 2;
           if(nums[mid] < target)
               low = mid + 1;
           else if(nums[mid] > target)
               high = mid - 1;
           else
               return mid;
       }
       nums.insert(nums.begin()+low, target);
       return low;
    }
};

int main() {
    Solution solution;
    int length, temp, target;
    vector<int > nums;
    cin >> length;
    for(int i = 0; i < length; i ++) {
        cin >> temp;
        nums.push_back(temp);
    }
    cin >> target;
    solution.searchInsert(nums, target);
    return 0;
}