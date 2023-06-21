#include <iostream>
using namespace std;

int main() {
    int A[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    int num, count = 0;

    cout << "Input a number to search: ";
    cin >> num;

    for (int i = 0; i < 10; i++) {
        if (A[i] == num) {
            count++;
        }
    }

    cout << "The number occurs " << count << " times in the array" << endl;

    return 0;
}
