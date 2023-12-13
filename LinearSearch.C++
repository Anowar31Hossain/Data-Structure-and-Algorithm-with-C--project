#include<iostream>
using namespace std;
int main()
{
    int n,item,count=0,h;
    int arr[20];
    cout<<"Enter array length:";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];

    }
     for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Enter item what you want search:";
    cin>>item;
    for(int i=0; i<n; i++){
        if(item==arr[i]){
            count++;
            h=i;
        }
    }
    if(count=1){
        cout<<"your search item is found in position: "<<h<<endl;
    }
    else{
        cout<<"your search item is not found in any position of array.";
    }
    return 0;
}
