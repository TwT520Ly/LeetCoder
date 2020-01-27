#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0)
            return 0;
        int start = 0, end = 0;
        int maxLens = 0;
        int map[128] = {0};
        map[int(s[start])] = 1;
        while(end <= s.size()-1) {
            maxLens = maxLens > (end - start + 1) ? maxLens : (end - start + 1);
            end ++;
            while(map[int(s[end])] != 0) {
                map[int(s[start])] = 0;
                start ++;
            }
            map[int(s[end])] = 1;
        }
        return maxLens;
    }
};

