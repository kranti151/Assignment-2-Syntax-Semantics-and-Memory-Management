#include <iostream>
using namespace std;

int calculateSum(int* arr, int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    // Allocate memory dynamically
    int* numbers = new int[5]{1, 2, 3, 4, 5};

    int sum = calculateSum(numbers, 5);
    cout << "Sum in C++: " << sum << endl;

    // Must manually free memory
    delete[] numbers;

    return 0;
}
