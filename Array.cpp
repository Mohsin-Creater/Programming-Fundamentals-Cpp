#include <iostream>
using namespace std;

int main() {
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    
    int Number;
    bool result = false;
    cout << "Enter a number to check if it is in the array: ";
    cin >> Number;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == Number) {
            result = true;
            break;
        }
    }
    if (result) {
        cout << "The number " << Number << " is present in the array." << endl;
    } else {
        cout << "The number " << Number << " is not present in the array." << endl;
    }

    return 0;
}

