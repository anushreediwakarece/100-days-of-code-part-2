// bubble sort code and logic understanding 
// we always pick the large element and swap the large element with the adjacent 
// and eventually push the large element to the end 
// when the same process is repeated the array is sorted in the ascending order 
// in bubble sort we take n-1 turns 
//for (int i =0 ; i<n-1 ; i++)
// {
//     for (int j =0 ; i<n-i-1 ; j++)
//     {
        //   if (arr[j] >arr[j+1])
        //   swap(arr[j], arr[j+1]); 
          
//     }
// }

#include<iostream>
using namespace std ; 

void bubblesort (int arr[] , int n )
{
    // in this function we will write the logic for bubble sort 
    for (int i =0 ; i<n ; i++)
    {
        for (int j =0 ; j<n-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j] , arr[j+1]); 
        }
    }
}
// we will write one more function to print the array 
void print (int arr[] , int n )
{
    for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
}
int main()
{
    int arr[]= {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int); 
    bubblesort(arr, n );
    print(arr, n ); 
    return 0 ; 
    
}