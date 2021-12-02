//count sort--similar like precomputation 
//mostly linear time
#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void countSort(int arr[], int n)
{
    //finding the maximum number in the array to be sorted
    int largest=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    vector<int> count(largest+1, 0); //creating a dynamic array and initilazing all as 0

    for(int i=0; i<n; i++)
    {
        count[arr[i]]++; //incrementing the count array every time we encounter a number
    }

    //putting back the elements

    int cnt = 0;

    for(int i=0; i<=largest; i++)
    {
        while(count[i]>0)
        {
            arr[cnt]=i; //enter the number
            count[i]--; //devrease count

            cnt++; //move to the next space

        }
    }


    
}


int main()
{
    int arr[]={6,7,8,4,3,1,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    countSort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}