#include<iostream>
using namespace std;

int main()
{
    int A[100], n, key;
    cout<<"Enter Elements number"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" numbers"<<endl;

    // Get input A
    for (int i=0; i<n; i++) {
        cin>>A[i];
    }

    // Sort elements of array
    for (int j=1; j<n; j++) {
        key = A[j]; // Assign new value to key variable for compare
        int i = j - 1; // assign value of i for check

        // Insert New key into sorted part of array
        while ( i>-1 && A[i]>key ) {
            A[i+1] = A[i];
            i--;
        }
        // Assign new key to array
        A[i+1] = key;
    }

    // Print sorted data
    for (int i=0; i<n; i++) {
        cout<<A[i]<<" ";
    }

    return 0;
}
