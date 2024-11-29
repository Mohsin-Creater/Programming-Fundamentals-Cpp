#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter " << 5 << " numbers to store in the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter value for index " << i << ": ";
        cin >> arr[i];
    }
    cout << "\nThe values stored in the array are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Value at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
