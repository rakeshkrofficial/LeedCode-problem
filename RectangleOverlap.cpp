#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int width = min(rec1[2], rec2[2]) - max(rec1[0], rec2[0]);

        int height = min(rec1[3], rec2[3]) - max(rec1[1], rec2[1]);

        return width > 0 && height > 0;
    }
};

int main() {

    Solution obj;

    vector<int> rec1 = {0, 0, 2, 2};
    vector<int> rec2 = {1, 1, 3, 3};

    bool answer = obj.isRectangleOverlap(rec1, rec2);

    cout << boolalpha << answer << endl;

    return 0;
}