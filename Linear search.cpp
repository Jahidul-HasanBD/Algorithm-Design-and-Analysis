#include <iostream>
using namespace std;

int main()
{
    int n, key;

    // Input number of elements
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Input value to search
    cout << "Enter value to search: ";
    cin >> key;

    bool found = false;

    // Linear Search: checking each element one by one
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            found = true;
            break; // stop search if found
        }
    }

    // If element not found
    if (!found)
        cout << "Element not found" << endl;

    return 0;
}