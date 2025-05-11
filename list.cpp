#include <iostream>
#include <vector>

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    myVector.push_back(6);

    for (int val : myVector) {
        std::cout << val << " ";
    }

    return 0;
}
