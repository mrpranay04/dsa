#include<iostream>
using namespace std;

int main() {
    int n, m, i, j;

    cout << "Enter the size of the first array: ";
    cin >> n;

    cout << "Enter the size of the second array: ";
    cin >> m;

    int arr1[n], arr2[m], arr3[n + m];

    // Input elements for the first array
    for (i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " of the first array: ";
        cin >> arr1[i];
    }

    // Input elements for the second array
    for (j = 0; j < m; j++) {
        cout << "Enter element " << j + 1 << " of the second array: ";
        cin >> arr2[j];
    }

    // Copy elements of the first array into the merged array
    for (i = 0; i < n; i++) {
        arr3[i] = arr1[i];
    }

    // Copy elements of the second array into the merged array
    for (j = 0; j < m; j++) {
        arr3[n + j] = arr2[j];
    }

    // Print the merged array
    cout << "Array after merging: " << endl;
    for (i = 0; i < (n + m); i++) {
        cout << "Value at index " << i + 1 << ": " << arr3[i] << endl;
    }

    return 0;
}
