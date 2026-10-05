// reverse array code : 
#include<iostream>
using namespace std ; 
void print(int arr[], int n )
{
 // this is the main function that will print the reverse array 
   for (int i =0 ; i<n ; i++)
   {
    cout<<arr[i]<<" "; 
   }
}
int main()
{
    const int n = 6;
    int arr[n] = { 5,8,6,3,0,4}; 
    //here we have declared the given array , now we will create one copy array 
    int arr1[n]; 
    for(int i =0 ; i<n ; i++)
    {
        arr1[i]=arr[n-i-1]; 
    }
    // the above for loop ensures that the values are copied 
    //for overwriting 
    for(int i =0 ;i<n ;i++)
    {
        arr[i] = arr1[i]; 
    }
    cout<<"revesed array is : "; 
    print(arr , n );
    return 0; 
}