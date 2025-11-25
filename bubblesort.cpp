#include <iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter no of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENter array elements";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}