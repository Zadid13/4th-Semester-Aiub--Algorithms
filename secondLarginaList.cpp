#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int firstLargest, secondLargest,INT_MIN;
    cin >> firstLargest;
    secondLargest = INT_MIN;

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        if (x > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = x;
        } else if (x > secondLargest && x != firstLargest) {
            secondLargest = x;
        }
    }

    cout << "The second largest number is: " << secondLargest << endl;
    return 0;
}

