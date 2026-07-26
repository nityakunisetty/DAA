#include <iostream>
using namespace std;
void maxMin(int a[], int i, int j, int &max, int &min)
{
    if (i == j)
    {
        max = min = a[i];
    }
    else if (i == j - 1)
    {
        if (a[i] < a[j])
        {
            min = a[i];
            max = a[j];
        }
        else
        {
            min = a[j];
            max = a[i];
        }
    }
    else
    {
        int mid = (i + j) / 2;
        int max1, min1;
        int max2, min2;
        maxMin(a, i, mid, max1, min1);
        maxMin(a, mid + 1, j, max2, min2);

        max = (max1 > max2) ? max1 : max2;
        min = (min1 < min2) ? min1 : min2;
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max, min;
    maxMin(a, 0, n - 1, max, min);
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    return 0;
}
