#include <iostream>
using namespace std;
int main()
{
    int data[15] = {1, 3, 2, 5, 8, 9, 6, 7, 4, 10, 48, 12, 26, 84, 95};
    int item, i;
    cin>>item;
    // Search Data
    for(i=0; i<15; i++){
        if(data[i] == item) {
            cout<< "Item is found at location " <<i+1<<endl;
            break;
        }
    }

    // Show Message if Item not found
    if(i>=15)
        cout << "Not exist!" << endl;

    return 0;
}
