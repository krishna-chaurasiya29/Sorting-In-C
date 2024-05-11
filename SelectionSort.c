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
    printf("Unsorted Array \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

//Selection Sort Application start from Here
for(int i=0;i<n-1;i++)//loop will run n-1 timess
{
    int min=INT_MAX;
    int minidx=-1;
    for(int j=i;j<=n-1;j++)
    {
        if(min>arr[j])//Checking weather the next element is smaller or not
        {
            min=arr[j];//when found we willl replace min with that
            minidx=j;
        }
    }
        //Swapping the element
        //To swap min and first element of the array
        //arr[i] will be the first element of the array as it starts from the sorted array
        int temp=arr[minidx];
        arr[minidx]=arr[i];
        arr[i]=temp;
}

printf("Sorted Array\n");
for(int i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
return 0;
}
//Time complexibility of Selction Sort is O(n^2) weather it is best,worst or avg case
//Selection Sort is not SORT STABLE 
//if we use =equalto sign in the line no 36 it might be possible that it may be possible but most of time it reamins unstable only