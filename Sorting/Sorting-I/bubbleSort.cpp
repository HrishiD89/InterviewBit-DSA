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
    for (int i = n-1 ; i >=0;i--){
        for(int j = 0 ;j <=i-1 ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<< "sorted Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
