#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    long long int length, array[20000];
    cout<<"Enter Maximum length of data ";
    cin>>length;

    // Make all possible element 1
    array[2] = 1;
    for (int i = 3; i<=length; i+=2) {
        array[i] = 1;
    }
    // Get square root of length of array
    int n = (int)sqrt(length) +1;

    //Filter prime number
    for (int i=3; i<=n; i++) {
        if(array[i] == 1) {
            for (int j=i*i; j<length; j+=i) {
                array[j] = 0;
            }
        }
    }

    // Print Prime numbers
    cout<<"Print Prime Numbers "<<endl;
    for (int i = 2; i<=length; i++) {
        if (array[i] == 1) {
            cout<<i<<" ";
        }
    }

    return 0;
}
