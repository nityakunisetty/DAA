#include <iostream>
using namespace std;
int merge(int a[], int low, int mid, int high)
{
	int invCount=0;
    int b[100];
    int i = low;
    int j = mid + 1;
    int k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            invCount += (mid - i + 1);
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }

    for (int x = low; x <= high; x++)
        a[x] = b[x];
        
    return invCount;
}
int mergeSort(int a[], int low, int high)
{
    if (low>=high)
    return 0;
    int invCount=0;
        int mid = (low + high) / 2;
        invCount+=mergeSort(a, low, mid);
        invCount+=mergeSort(a, mid + 1, high);
        invCount+=merge(a, low, mid, high);
    return invCount;
}
int main()
{
	int n;
	cout<<"enter number of elements: ";
	cin>>n;
    int a[100];
    cout<<"enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int invCount=mergeSort(a, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "Inversion Count: " << invCount;
    return 0;
}
