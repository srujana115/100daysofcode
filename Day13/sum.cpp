#include <vector>

class Solution {
public:
    int sumOfElements(std::vector<std::vector<int>>& arr) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr[i].size(); j++) {
                sum += arr[i][j];
            }
        }
        return sum;
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

    // Call the sumOfElements function to calculate the sum of all elements
    int result = solution.sumOfElements(input);

    // Print the result
    std::cout << "The sum of all elements in the 2D vector is: " << result << std::endl;

    return 0;
}
