#include <iostream>
using namespace std;
int main()
{
    int data[15] = {1, 3, 4, 6, 7, 8, 9, 12, 14, 16, 19, 20, 23, 25, 48};
    int item, low = 0, high = 14, mid, possition = 0;
    cin>>item;
    // Search Data
    while (low <= high) {
        mid = low + (high-low)/2;
        if (item == data[mid]){
            possition = mid+1;
            break;
        } else if(item < data[mid]) {
            high = mid -1;
        } else {
            low = mid + 1;
        }
    }

    if (possition > 0 )
        cout<< "Item is found at location " <<possition<<endl;
    else
        cout << "Not exist!" << endl;

    return 0;
}
