#include <iostream>
using namespace std;

int main()
{
    int n, key;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input sorted array elements
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input value to search
    cout << "Enter value to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    // Binary Search process
    while (low <= high)
    {
        int mid = (low + high) / 2; // find middle index

        if (arr[mid] == key)
        {
            cout << "Element found at position " << mid + 1 << endl;
            found = true;
            break;
        }
        else if (key < arr[mid])
        {
            high = mid - 1; // search left half
        }
        else
        {
            low = mid + 1; // search right half
        }
    }

    // If element not found
    if (!found)
        cout << "Element not found" << endl;

    return 0;
}
