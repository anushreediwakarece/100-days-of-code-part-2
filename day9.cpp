//counting sort code 
#include<iostream>
#include<climits>
using namespace std ; 
void cs (int arr[] , int n )
{
 // declaration of frequency array 
    int freq[100000] = {0};
    int minVal = INT_MAX; 
    int maxVal = INT_MIN; 
    for(int i =0 ; i<n ; i++)
    {
        minVal = min(minVal , arr[i]); 
        maxVal = max(maxVal , arr[i]); 
    }
    //now we will fill the freq array 
    for (int i =0 ; i<n ; i++)
    {
        freq[arr[i]]++; 
    }
    int j =0; 
   for(int i = minVal ; i<= maxVal ; i++)
   {
    while(freq[i]>0 )
    {
        arr[j++] = i;
        freq[i]--; 
    }

   }

}
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
    int arr[] ={1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/ sizeof(int); 
    cs (arr, n); 
    print(arr, n ); 
    return 0 ; 
}