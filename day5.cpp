//selection sort code : 
#include<iostream>
using namespace std ; 
void select (int arr[] , int n )
{ //this function has the entire logic for selection sort 

    for(int i =0 ; i<n-1; i++)
    { int min= arr[i] ;
        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j; 
            }
            swap(arr[i],arr[min]); 

        }
    }

}
void print (int arr[], int n )
{
    for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
}
int main() 
{
 int arr[]= { 7, 9, 6, 5 , 8, 4 }; 
 int n = sizeof(arr)/sizeof(int); 
 select(arr, n ); 
 print(arr, n ); 

}