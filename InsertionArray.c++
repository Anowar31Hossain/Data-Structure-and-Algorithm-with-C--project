#include<iostream>
using namespace std;
int main(){
    int j,k,item,n;
    int arr[]={1,3,4,5,6,7};
    n=sizeof(arr);
    cout<<"Enter the item what you want to insert:";
    cin>>item;
    cout<<"Enter the position the that what position you want to search:";
    cin>>k;
    for(int j=n; j>=k; j=j-1){
        arr[j+1]=arr[j];

    }
    arr[k]=item;
    n=n+1;
    return 0;
}
