// lets make this code menu driven 
#include<iostream>
#include<climits>
using namespace std ; 

//universal print function for all of the cases: 
void print(int arr[], int n)
{
    for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl; 
}
void ins (int arr[], int n )
{
    for(int i =1 ; i<n ; i++)
    {
      int curr=arr[i]; 
      int prev= i-1; 
      while(prev>=0 &&  arr[prev]>curr)
      {
        swap(arr[prev], arr[prev+1]); 
        prev--; 
      }
      arr[prev+1]= curr; 
    }
  
}
void bs(int arr[], int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j =0 ; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]); 
            }
        }
    }
}

void select(int arr[] , int n )
{
 // logic for selection sort was pick the smallest element from an unsorted array and put in the beginning of the sorted array 
 for(int i =0 ; i<n-1 ; i++)
 { 
   int  minidx = i ; //first consider the minimum element  to be element on 0th element 
    for(int j =i+1; j<n; j++)
    {
       if(arr[j]<arr[minidx])
       {
        minidx=j ; 
       }
       
    }
    swap(arr[i], arr[minidx]); 
 }
}

void count (int arr[] , int n )
{
    // in counting sort we create a frequency array 
    //step 1 is initialising the frequency array 
  int freq[100000] = {0}; 
    //step 2  is to initialise and find the minimum and maximum values 
    int minVal = INT_MAX; 
    int maxVal=INT_MIN;
    //now we will use a for loop to find the range of the given array 
    for(int i =0 ; i<n ; i++)
    {
         minVal = min(minVal , arr[i]); 
         maxVal = max(maxVal, arr[i]); 
    }
    // now we have to fill the frequency array 
    for(int i =0 ; i<n ; i++)
    {
        freq[arr[i]]++; 
    }
    // now we will rewrite the original array in sorted way with the help of frequency array 
    int j =0 ; 
    for(int i=minVal; i<=maxVal ; i++)
    {
        while(freq[i]>0)
        {
            arr[j++]=i; 
            freq[i]--; 
        }
    }

}
int main()
{
int original[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
int n = sizeof(original)/sizeof(int);
int arr[10];

    int choice =0 ; 
    while (choice !=5 )
    {
        //display the menu : 
        cout<<"\n----Main Menu ----\n";
        cout<<"1.insertion sort\n";
        cout<<"2.Bubble sort\n";
        cout<<"3.selection sort\n";
        cout<<"4.counting sort\n";
        cout<<"5.exit\n";
        cout<<"Enter your choice: ";

        cin>>choice;

        // reset arr to the unsorted original before every sort
        for(int i =0 ; i<n ; i++)
        {
            arr[i]=original[i];
        }

        switch(choice)
        {
            case 1 :
            cout<<"You selected option 1"<<endl;
            ins(arr, n );
            print(arr,n);
            break ;
            case 2 :
            cout<<"You selected option 2"<<endl;
            bs(arr, n );
            print(arr, n );
            break ;
            case 3 :
            cout<<"You have selected option 3"<<endl;
            select(arr,n);
            print(arr, n );
            break ;
            case 4:
            cout<<"You have selected option 4"<<endl;
            count(arr, n );
            print(arr, n );
            break ;
            case 5 :
            cout<<"You have selected option 5"<<endl;
            break ;
            default :
            cout<<"Invalid choice"<<endl;
        }

    }
    return 0 ; 
}
