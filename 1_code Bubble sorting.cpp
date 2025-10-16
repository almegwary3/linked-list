// code Bubble_sorting

#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sorting(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; i < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arrp[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 4, 3, 7, 2, 9, 8};
    int n = 7;

    bubble_sorting(arr, n);

    for (int i = 0; i < n; i++)

        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
