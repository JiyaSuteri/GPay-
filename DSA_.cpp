// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of elements of array:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     float avg;
//     avg=sum/n;
//     cout<<"The average is: ";
//     cout<<avg;
//     return 0;
// }

// PRODUCT OF ARRAY ELEMENTS
// #include<iostream>
// using namespace std;
// int ProductOfArray(int a[],int sizeOfArray){
//     int product=1;
//     a[3]+=10;
//     for(int i=0;i<sizeOfArray;i++){
//         product*=a[i];
//     }
//     return product;
// }
// int main(){
//     int n;
    // cout<<"Enter the number of elements of array:";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
//     cout<<ProductOfArray(arr,n)<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }



// FINDING AN ELEMENT IN THE ARRAY IF FOUND RETURN ITS INDEX IF NOT FOUND RETURN -1 USING FUNCTION
// #include<iostream>
// using namespace std;
// int findingElement(int target, int a[],int n){
//     for(int i=0;i<n;i++){
//         if (a[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cout<<"Enter the number of elements of array:";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"Enter the target value to be found: ";
//     cin>>target;
//     cout<<findingElement(target,arr,n);
//     return 0;
// }

//findng element in sorted array 
#include<iostream>
using namespace std;
int FindElement(int a[],int target ){
    int start=0,end=9,mid=(start+end)/2;
    for(int i=0;i<10;i++){
        if(a[mid]==target){
            return mid;
            break;
        }
        else if(a[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int target;
    cout<<"Enter the target value to be found: ";
    cin>>target;
    cout<<FindElement(arr,target);
    return 0;
}