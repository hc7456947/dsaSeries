#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> ans;
    for (auto it = nums.begin(); it != nums.end(); it++) {
        cout << *it << endl;
        ans.push_back(nums[*it]);
    }
    return ans;
}

int main() {
    vector<int> v = {0, 2, 1, 5, 3, 4};
    vector<int> result = buildArray(v);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
