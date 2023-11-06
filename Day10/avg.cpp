//Average of all numbers in an array
#include <iostream>
#include <vector>

class Solution {
public:
    double findAverage(std::vector<int>& arr) {
        double avg = 0.0;  // Initialize avg to 0.0 to ensure a double result
        double sum = 0.0;  // Initialize sum to 0.0

        for (int ele : arr) {
            sum += ele;
        }

        if (!arr.empty()) {
            avg = sum / arr.size();
        }

        return avg;
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    double average = solution.findAverage(arr);

    std::cout << "Average of the numbers in the vector: " << average << std::endl;

    return 0;
}
