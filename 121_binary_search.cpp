//Binary Search

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, key, flag = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter elements of an array: ";

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the value to be searched: ";
    cin >> key;

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (key == a[mid])
        {
            flag = 1;
            cout << "Element found at index no: " << mid;
            break;
        }

        if (key < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (flag == 0)
    {
        cout << "Element not found";
    }

    return 0;
}
