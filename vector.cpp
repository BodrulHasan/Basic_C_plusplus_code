#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    int sum = 0;

    

    cout << "Vector Elements: ";
    for (int num : numbers) {
        cout << num << " ";
        sum += num;
    }
    cout << endl;
    

    cout << "Total Elements: " << numbers.size() << endl;

    cout << "Element at index 0: " << numbers[0] << endl;
    cout << "Element at index 1: " << numbers[1] << endl;
    cout << "Element at index 2: " << numbers[2] << endl;
    cout << "Element at index 3: " << numbers[3] << endl;

    cout << "Student score using index: " << sum << endl;

    return 0;
}