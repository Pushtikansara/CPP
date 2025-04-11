#include <iostream>
using namespace std;

// Recursive function to calculate sum
int recursiveSum(int arr[], int size, int index = 0) {
    if (index == size) return 0;
    return arr[index] + recursiveSum(arr, size, index + 1);
}

// Iterative function to calculate sum
int iterativeSum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
     return total;
}

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int* arr = new int[size];  // Dynamic array allocation

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int recSum = recursiveSum(arr, size);
    int iterSum = iterativeSum(arr, size);

    cout << "Recursive Sum: " << recSum << endl;
    cout << "Iterative Sum: " << iterSum << endl;
    cout<<"24ce052_pushti kansara";



    return 0;
}
