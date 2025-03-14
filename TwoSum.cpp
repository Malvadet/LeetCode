#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map;
        int size = nums.size();

        for (int i = 0; i < size; ++i) {
            int complement = target - nums[i];

            if(num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i};
            }

            num_map[nums[i]] = i;
        }

        return {};
        
    }
};

int main(){
    return 0;
}