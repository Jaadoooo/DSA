#include <iostream>

class Solution {
public:
    int sum(int num1, int num2) 
    {
        return num1+num2;
    }
};

int main() {
    Solution solution;
    int result = solution.sum(15, 5);
    std::cout << "Result: " << result;
    return 0;
}
