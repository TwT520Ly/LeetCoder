#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector<vector<int>>::iterator iter = matrix.begin(); iter != matrix.end(); iter ++) {
            if((*iter).size() == 0)
                continue;
            if(target >= *((*iter).begin())) {
                vector<vector<int>>::iterator temp_iter = iter + 1;
                if((temp_iter != matrix.end() && target < *((*temp_iter).begin())) || temp_iter == matrix.end()) {
                    int low = 0;
                    int high = (*iter).size() - 1;
                    while(low <= high) {
                        int mid = low + (high - low) / 2;
                        if((*iter)[mid] < target)
                            low = mid + 1;
                        else if((*iter)[mid] > target)
                            high = mid - 1;
                        else
                            return true;
                    }
                    return false;
                } else
                    continue;
            }
        }
        return false;
    }
};

int main() {

    return 0;
}