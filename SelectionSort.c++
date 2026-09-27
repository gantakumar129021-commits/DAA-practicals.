#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int arr[]={5,1,4,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[minIndex]){
               minIndex=j;
            }
        }
        // swap
        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
    // print the array
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}
