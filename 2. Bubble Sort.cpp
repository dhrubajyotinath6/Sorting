//Insertion sort
//O(n^2)
//we keep maintainig a sorted and an unsorted array

#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++) //first elements is considered to be sorted hence i=1
    {
        int value = arr[i]; //temp variable to store the value
        int hole = i;

        while(hole>0 && arr[hole-1]>value) 
        {
            arr[hole]=arr[hole-1];
            hole--;
        }

        arr[hole]=value;
    }
    
}


int main()
{
    int arr[]={6,7,8,4,3,1,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}