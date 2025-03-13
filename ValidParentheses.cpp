#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        int i = 0;

        if(n == 1) return false;
        
        while (i < n - 1) {
            if(s[i] == '(') {
                if(s[i + 1] == ')') {s.erase(i, 2); n = n - 2; if(i > 0) i--; continue;}
                if(s[i + 1] == '}' || s[i + 1] == ']') return false;
            }
            if(s[i] == '{') {
                if(s[i + 1] == '}') {s.erase(i, 2);  n = n - 2; if(i > 0) i--; continue;}
                if(s[i + 1] == ')' || s[i + 1] == ']') return false;
            }
            if(s[i] == '[') {
                if(s[i + 1] == ']') {s.erase(i, 2);  n = n - 2; if(i > 0) i--; continue;}
                if(s[i + 1] == '}' || s[i + 1] == ')') return false;
            }
            i++;
        }

        if (n != 0) return false;
        return true;
    }
};

int main(){
    return 0;
}