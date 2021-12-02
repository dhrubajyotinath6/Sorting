//selection sort
//O(n^2)--hence not commonly used
//swap() function in C++ takes O(n*log(n))
#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int counter=1;
    while(counter>=n)
    {
        for(int i=0; i<n-counter-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i], arr[i+1]);
            }
        }

        counter++;
    }
}


int main()
{
    int arr[]={6,7,8,4,3,1,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}