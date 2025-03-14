#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  // Handle empty array case

        int i = 0;  // Pointer to place the next unique element
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];  // Place the unique element at the correct position
            }
        }
        return i + 1;  // The new length is i + 1
    }
};

int main(){
    return 0;
}