#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    cout<< "Printing all sub arrays....\n";

    for(int st=0;st<n;st++)
    {
        for(int en=st;en<n;en++)
        {
            for(int i=st;i<=en;i++){

            cout<<arr[i];
            }
            cout<< " ";
        }
        cout<<endl;
    }
}
