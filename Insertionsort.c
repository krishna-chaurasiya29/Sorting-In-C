#include<stdio.h>
#include<limits.h>
#include<conio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    //To determine the size of the arraym if allocating the memory directly
    // int n=sizeof(arr)/sizeof(arr[0]);

    //Taking the Elements from the user
    printf("Enter the Elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before Sorting  \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    //Insertion Sort Algorithm Start From Here
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(arr[j] && arr[j]<arr[j-1])
        // swap(arr[j],arr[j-1]);
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
        j--;
    }

    printf("\nAfter Sorting  \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}
//In Insertion Sort Swapping from End till the element finds its position
//Swap happens only when the elemet is smaller than its left element
//n-1 passes will occur as in insertion sort it starts form index no 1 not from 0
//ass it considers that the first element in the array is already sorted
//we are concerned with all the emlemets of the sroted array and only the first element of the unsorted array
//Time Complexibility of Inseriton Sort in worst & Avg Case is O(n^2) & for best case 
//Time Complexibility of Insertion Sort in Best Case is O(n)
//Insertion Sort is Sort Stable
//In Insertion Sort always n-1 passes are done
