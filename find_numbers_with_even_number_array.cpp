#include <iostream>
using namespace std;

// Function to count numbers with even number of digits
int countEvenDigitNumbers(int arr[], int size) {
    int evenCount = 0;

    for (int i = 0; i < size; i++) {
        int temp = arr[i];
        int digitCount = 0;

        if (temp == 0) digitCount = 1;
        else {
            while (temp != 0) {
                temp = temp / 10;
                digitCount++;
            }
        }

        if (digitCount % 2 == 0) {
            evenCount++;
        }
    }

    return evenCount;
}

int main() {
    int arr[100], x, size = 0;

    // Input numbers until -1 is entered
    while (cin >> x && x != -1) {
        arr[size++] = x;
    }

    int result = countEvenDigitNumbers(arr, size);

    cout << result << endl;

    return 0;
}
