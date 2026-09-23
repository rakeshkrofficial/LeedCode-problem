#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

int main() {

    Solution obj;

    // Test Case
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Function call
    vector<int> answer = obj.twoSum(nums, target);

    // Output
    cout << "[" << answer[0] << ", " << answer[1] << "]" << endl;

    return 0;
}