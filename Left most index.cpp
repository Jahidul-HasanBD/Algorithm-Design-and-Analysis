#include <iostream>
using namespace std;

int main()
{
    int n, key;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input sorted array (must be sorted)
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input value to search
    cout << "Enter value to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    int result = -1; // store leftmost index

    // Binary Search for leftmost occurrence
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            result = mid;   // possible answer
            high = mid - 1; // move left to find first occurrence
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    // Output result
    if (result != -1)
        cout << "Leftmost index is: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
