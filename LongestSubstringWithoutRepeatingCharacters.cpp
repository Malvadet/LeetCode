#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> charSet;

        int left = 0;
        int maxlength = 0;

        for (int right = 0; right < n; ++right) {
            while (charSet.find(s[right]) != charSet.end()) {
                charSet.erase(s[left]);
                left++;
            }

            charSet.insert(s[right]);

            maxlength = max(maxlength, right - left + 1);
        }

        return maxlength;

    }
};

int main(){
    return 0;
}