#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array in sorted way: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value:";
    cin>>target;
    int left=0,right=n-1,mid;
    while(left<=right){
       mid=(left+right)/2; 
       if(arr[mid]==target){
            cout<<"Target found at"<<" "<<mid<<"index";
            break;
       }
       else if(arr[mid]>target){
            right=mid-1;
       }
       else{
            left=mid+1;
       }
    }
    return 0;
}