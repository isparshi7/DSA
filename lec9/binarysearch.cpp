#include <iostream>
using namespace std;

// Recursive Binary Search Function
int binarySearchRecursive(int arr[], int left, int right, int key) {
    if (left > right)
        return -1; // Base case: not found

    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
        return mid; // Key found

    if (arr[mid] > key)
        return binarySearchRecursive(arr, left, mid - 1, key); // Search left half

    return binarySearchRecursive(arr, mid + 1, right, key); // Search right half
}

int main() {
    int size, key;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size]; // Create an array

    cout << "Enter " << size << " sorted elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // Input elements
    }

    cout << "Enter the element to search: ";
    cin >> key;

    // Calling the recursive binary search function
    int result = binarySearchRecursive(arr, 0, size - 1, key);

    // Output the result
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
