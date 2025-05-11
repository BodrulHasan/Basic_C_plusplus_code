#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter Elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    cout << "Enter Target: ";
    cin >> target;

    
    int low = 0, high = n - 1, mid, result = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            result = mid;
            break;
        }
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found!" << endl;

    return 0;
}