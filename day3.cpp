// Reverse an array with the swap method.
#include <algorithm>
#include <iostream>
using namespace std ; 
void print(int arr[] , int n )
{
    for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl ; 
}
int main()
{
     int arr [] ={5,4,3,9,2}; 
     int n =sizeof(arr)/sizeof(int); 
 int st =0 ; 
 int end = n-1; 
 while (st<end)
 {
    swap(arr[st], arr[end]);
    st++;
    end--;
 }
 print(arr, n ); 
 return 0; 
}