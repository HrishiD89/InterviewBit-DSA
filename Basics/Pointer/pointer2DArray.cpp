#include <bits/stdc++.h>
using namespace std;
/**
 * Main function to demonstrate how to access elements of a 2D array using pointers.
 *
 * @return integer value 0 to indicate successful execution.
 */
int main(){
    
    // Declare a 2D array B
    int B[2][3] = {{1,2,3},{4,5,6}};

    // Declare a pointer to an array of 3 integers
    int (*pointer)[3] = B;

    // Print the address of the 2D array B
    cout<<"Address of 2D array B: "<<B<<endl;

    // Print the address of the first row of the 2D array B
    cout<<"Address of the first row of the 2D array B: "<<*B<<endl;

    // Print the address of the second row of the 2D array B using pointer arithmetic
    cout<<"Address of the second row of the 2D array B: "<<*(B+1)<<endl;

    // Print the address of the second row of the 2D array B using pointer arithmetic
    cout<<"Address of the second row of the 2D array B (using pointer arithmetic): "<<B+1<<endl;

    // Print the address of the third element of the second row of the 2D array B
    cout<<"Address of the third element of the second row of the 2D array B: "<<*(B+1)+2<<endl;

    // Print the address of the first element of the second row of the 2D array B using double pointer dereference
    cout<<"Address of the first element of the second row of the 2D array B: "<<*(*(B+1))<<endl;

    // Print the address of the first element of the second row of the 2D array B using double pointer dereference
    cout<<"Address of the first element of the second row of the 2D array B (using double pointer dereference): "<<*(*B+1)<<endl;

    return 0;
}
