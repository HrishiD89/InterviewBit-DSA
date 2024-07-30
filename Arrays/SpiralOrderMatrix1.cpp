#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> newArray;

    // To keep track of the points
    int top = 0;                 // first row of the matrix
    int bottom = A.size() - 1;   // last row of the matrix
    int left = 0;                // first column of the matrix
    int right = A[0].size() - 1; // last column of the matrix

    while (top <= bottom && left <= right)
    {
        // from left to right;
        for (int i = left; i <= right; ++i)
        {
            newArray.push_back(A[top][i]);
        }
        ++top;

        // from top to bottom
        for (int i = top; i <= bottom; ++i)
        {
            newArray.push_back(A[i][right]);
        }
        --right;

        // from right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; --i)
            {
                newArray.push_back(A[bottom][i]);
            }
            --bottom;
        }

        // from bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; --i)
            {
                newArray.push_back(A[i][left]);
            }
            ++left;
        }
    }

    for (int i = 0; i < newArray.size(); ++i)
    {
        cout << newArray[i] << " ";
    }
    cout << endl;

    return 0;
}
