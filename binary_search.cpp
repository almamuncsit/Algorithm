#include <iostream>
using namespace std;
int main()
{
    // initial data in a array
    int data[15] = {1, 3, 4, 6, 7, 8, 9, 12, 14, 16, 19, 20, 23, 25, 48};
    //declear variable;
    int item, low = 0, high = 14, mid, possition = 0;
    // Get input element for search 
    cin>>item;
    // Search Data
    while (low <= high) {
         // Genarate Mid point of affected array
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

    
    if (possition > 0 ) // Print outpur if found
        cout<< "Item is found at location " <<possition<<endl;
    else // Print outpur if not found
        cout << "Not exist!" << endl;

    return 0;
}
