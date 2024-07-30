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
    for (int i = 0; i <= n-1; i++)
    {
        int j = i ;      
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }

    cout << "Sorted Array : " << endl;
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
