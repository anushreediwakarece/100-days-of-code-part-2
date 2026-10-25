#include<iostream>
using namespace std ; 
void bs(int arr[] , int n )
{
  for(int i =0 ; i<n-1 ; i++)
  {
    for(int j = i+1 ; j<n ; j++)
    {
        if(arr[i]>arr[j])
        {
            swap(arr[i], arr[j]);
        }
    }
  }
}
void print(int arr[] , int n )
{
    for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
}
int main()
{
    int arr[] = {5,4,3,1,2}; 
    int n = sizeof(arr)/sizeof(int); 
    bs(arr , n); 
    print(arr, n ); 
    return 0 ;

}