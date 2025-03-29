#include <iostream>
#include <vector>
using namespace std;


int calculateSum(const vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return sum;
}

int main() {
    int n;
    cout << "\nHow many numbers you want to add: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter numbers:" << endl;
    for (int i = 0; i < n; i++)
        {
        cin >> vec[i];
    }

    int sum = calculateSum(vec);

    cout << "Sum: " << sum << endl;
    return 0;
}
