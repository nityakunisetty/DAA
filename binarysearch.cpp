#include <iostream>
using namespace std;
int binarySearch(int a[], int low, int high, int key)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (a[mid]==key)
        return mid;
    if (key < a[mid])
        return binarySearch(a, low, mid - 1, key);
    return binarySearch(a, mid + 1, high, key);
}
int main()
{
    int n, key;
    cout<<"enter number of elements: ";
    cin >> n;
    int a[100];
    cout<<"enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
     cout<<"enter the element to be searched: ";
    cin >> key;
    
    int index = binarySearch(a, 0, n - 1, key);
    if (index == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << index;
    return 0;
}
