#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {3,5,1,8,10};
    int *pointer = A;
    cout << "*pointer: "<<&pointer << endl;
    cout << "pointer + 2: " << pointer + 2 << endl;
    cout << "*(pointer + 2): " << *(pointer + 2) << endl;
}