#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    const int n = 11;
    int bookIds[n];

    cout << "Enter 11 book IDs: ";
    for (int i = 0; i < n; ++i) {
        cin >> bookIds[i];
    }

    int choice;
    cout << "Choose sorting method:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(bookIds, n);
            cout << "Sorted using Bubble Sort.\n";
            break;
        case 2:
            selectionSort(bookIds, n);
            cout << "Sorted using Selection Sort.\n";
            break;
        case 3:
            insertionSort(bookIds, n);
            cout << "Sorted using Insertion Sort.\n";
            break;
        default:
            cout << "Invalid choice.\n";
            return 1;
    }

    cout << "Sorted Book IDs: ";
    for (int i = 0; i < n; ++i) {
        cout << bookIds[i] << " ";
    }
    cout << endl;

    int target;
    cout << "Enter the book ID to search for: ";
    cin >> target;

    int result = binarySearch(bookIds, n, target);
    if (result != -1) {
        cout << "Book ID found at index: " << result << endl;
    } else {
        cout << "Book ID not found!" << endl;
    }

    return 0;
}