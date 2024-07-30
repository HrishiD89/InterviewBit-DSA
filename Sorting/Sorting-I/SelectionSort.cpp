#include <bits/stdc++.h>
using namespace std;
// function declaration;
void SortedArray(vector<int> arr, int n);

int main()
{
    vector<int> A = {25, 17, 13, 31, 2};
    int n = A.size();
    cout << "Unsorted Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    SortedArray(A, n);
    return 0;
}

void SortedArray(vector<int> arr, int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        // find minimum element
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    cout << "Sorted Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
