#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string s;
    while(cin >> s) {
        string temp;
        for(int i = 0; i < s.length(); i ++) {
            if((i+2) < s.length() && s[i+2] == '#') {
                string t = "";
                t += s[i];
                t += s[i+1];
                temp += (96 + atoi(t.c_str()));
                i += 2;
            } else
                temp += (96 + s[i] - 48);
        }
        cout << temp << endl;
    }
    return 0;
}