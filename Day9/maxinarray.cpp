//Maximum number in an array
#include <vector>
#include <iostream>
#include <climits>
using namespace std;
class Solution {
public:
    int findMax(vector<int>& arr) {
        int max = INT_MIN;
        for (int elem : arr) {
            if (elem > max) {
                max = elem;
            }
        }
        return max;
    }
};
int main() {
    Solution solution;
    vector<int> arr = {10, 5, 8, 20, 15, 3, 25};
    int maximum = solution.findMax(arr);
    
    cout << "The maximum element in the vector is: " << maximum << endl;
    
    return 0;
}
