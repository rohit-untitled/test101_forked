#include <iostream>
using namespace std;

int bs(int arr[], int l, int h, int key)
{
    if (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            return bs(arr, mid + 1, h, key);
        }
        else
        {
            return bs(arr, l, mid - 1, key);
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    int result = bs(arr, 0, n - 1, key);

    if (result != -1)
    {
        cout << result << endl;
    }
    else
    {
        cout << "Element not found " << endl;
    }

    return 0;
}
