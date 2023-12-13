#include<iostream>
using namespace std;
int main()
{
    int n,size;
    int arr[]= {};
    cout<<"Enter array maximum size:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter array element:";
        cin>>arr[i];
    }
    cout<<arr;
}
