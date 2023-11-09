#include <limits.h>
#include <vector>

class Solution {
public:
    int max(std::vector<std::vector<int>>& args) {
        int max = INT_MIN;
        for (int i = 0; i < args.size(); i++) {
            for (int j = 0; j < args[i].size(); j++) {
                if (args[i][j] > max) {
                    max = args[i][j];
                }
            }
        }
        return max;
    }
};

#include <iostream>

int main() {
    Solution solution;

    // Create a sample 2D vector
    std::vector<std::vector<int>> input = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Call the max function to find the maximum value
    int result = solution.max(input);

    // Print the result
    std::cout << "The maximum value in the 2D vector is: " << result << std::endl;

    return 0;
}
