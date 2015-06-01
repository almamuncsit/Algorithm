#include <iostream>
using namespace std;
int main()
{
    int n, key, low, high, mid, data[100];

    cout<<"Please enter number of elements : ";
    cin>>n;
    cout<<"Enter "<< n <<" numbers "<<endl;

    // Take all input numbers to array
    for (int i=0; i<n; i++) {
        cin>>data[i];
    }
    cout<<"Enter key what you want to search "<<endl;
    cin>>key;

    low = 0;
    high = n-1;
    mid = (low + high) / 2;

    // Search Data
    while (low <= high) {
        if (key == data[mid]){
            cout<<"Element found at position : "<<mid+1;
            break;
        } else if(key < data[mid]) {
            high = mid -1;
        } else {
            low = mid + 1;
        }

        mid = (low + high) / 2;
    }


    // Show Message if not found
    if (low > high )
        cout << "Not exist!" << endl;

    return 0;
}
