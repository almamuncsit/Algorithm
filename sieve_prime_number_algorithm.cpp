#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    long long int length, array[20000];
    cout<<"Enter Maximum length of data ";
    cin>>length;


    array[2] = 1;
    for (int i = 3; i<=length; i+=2) {
        array[i] = 1;
    }

    int n = (int)sqrt(length) +1;

    for (int i=3; i<=n; i++) {
        if(array[i] == 1) {
            for (int j=i*i; j<length; j+=i) {
                array[j] = 0;
            }
        }
    }


    cout<<"Print Prime Numbers "<<endl;
    for (int i = 2; i<=length; i++) {
        if (array[i] == 1) {
            cout<<i<<" ";
        }
    }

    return 0;
}
