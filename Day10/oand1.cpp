//Replace even number by 0 and odd by 1
#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> modifyArray(std::vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 0) {
                arr[i] = 0;
            } else {
                arr[i] = 1;
            }
        }
        return arr;
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {1, 2, 3, 4, 5, 6};
    std::vector<int> modifiedArray = solution.modifyArray(arr);

    std::cout << "Modified Array: ";
    for (int value : modifiedArray) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
