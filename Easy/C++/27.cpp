#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for(vector<int>::iterator it = nums.begin(); it != nums.end();) {
            if((*it) == val) {
                it = nums.erase(it);
                size --;
            }
            else
                it ++;
        }
        return size;
    }
};

class Solution2 {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int j = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] != val) {
                nums[j ++] = nums[i];
            } else
                size --;
        }
        return size;
    }
};