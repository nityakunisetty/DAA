#include <iostream>
using namespace std;
int main()
{
    int n, num, sum = 0;
    float avg;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }
    avg = (float)sum / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    return 0;
}
