#include<iostream>
using namespace std ; 
// void insertion(int arr[] , int n )
// {
//   // we divide the array into 2 parts as sorted and unsorted 
//   // we need 2 loops to move across the array 
//   //1st loop is the loop which will trace the sorted part 
//   for(int i =0 ; i<n-1 ; i++)
//   {
//     // 2nd loop is for unsorted part 
//     for(int j =i+1 ; j<n-1 ; j++)
//     {
//         int curr = arr[j] ; 
//         if(curr<arr[i])
//         {
//             swap(arr[i], curr ); 
//         }
//     }
//   }
// }

//corrected : always consider unsorted part start from i =1 , the outer for loop tracks the unsorted part 
void insertion(int arr[] , int n )
{ 
    for(int i =1 ; i<n ; i++)
    {

    
         int curr = arr[i]; 
         //unsorted part se pehle wala entire part is sorted 
         // curr will get compared to every element of the sorted part 
         int prev = i-1;
         // we will use a while loop 
         while(prev>=0 && arr[prev]>curr)
         {
            swap(arr[prev], arr[prev+1]);
            prev--; 
         }
         arr[prev+1]= curr; 
    }
    
}
void print(int arr[] , int n )
{
    for(int i =0 ; i <n ; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
}
int main()
{
    int arr[] ={ 5,4,1,3,2}; 
    int n = sizeof(arr)/sizeof(int); 
    insertion(arr, n); 
    print(arr, n ); 
    return 0; 
}