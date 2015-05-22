#include<iostream>
using namespace std;
int main()
{
    int data[100], temp, n;
    cout<<"Enter element number ";
    cin>>n;

    // Get input
    for(int i=0; i<n; i++) {
        cin>>data[i];
    }

    // sort data
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if (data[i] > data[j]) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    // Show output
    for(int i=0; i<n; i++) {
        cout<<data[i]<<" ";
    }

    return 0;
}
