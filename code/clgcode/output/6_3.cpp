
#include <iostream>
using namespace std;

int main() {
    int m, n;

    // Read sizes of the arrays
    cout << "Enter the size of the first sorted array: ";
    cin >> m;
    cout << "Enter the size of the second sorted array: ";
    cin >> n;

    // Dynamically allocate memory for the arrays
    int* arr1 = new int[m];
    int* arr2 = new int[n];

    // Read elements for the first array
    cout << "Enter " << m << " sorted elements for the first array: ";
    for (int i = 0; i < m; ++i) {
        cin >> arr1[i];
    }

    // Read elements for the second array
    cout << "Enter " << n << " sorted elements for the second array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr2[i];
    }

    int* merged = new int[m + n];

    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }

    cout << "Merged sorted array: ";
    for (int idx = 0; idx < m + n; ++idx) {
        cout << merged[idx] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] merged;

    return 0;
}