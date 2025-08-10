#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int n1, int n2) {
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                arr2[j] = -1;  // Mark as used
                break;
            }
        }
    }
}

int main() {
    int arr1[100], arr2[100], n1, n2;

    cout << "Enter the number of elements in array1: ";
    cin >> n1;
    cout << "Elements of array1: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of elements in array2: ";
    cin >> n2;
    cout << "Elements of array2: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "Intersection of elements is: ";
    intersection(arr1, arr2, n1, n2);

    return 0;
}
