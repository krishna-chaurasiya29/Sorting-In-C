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

    //Bubble shorting applieng here
    for(int i=0;i<n-1;i++)
    {
        //To check that after every pass array is shorted or not
        bool flag=true;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {//Swapping of the numbers
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;//If Swapped the bool will become false and the loop will run till it become shorted
            }
        }
        if(flag==true) break;
    }
    printf("\nAfter Sorting  \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}
//Time Complexibilit in Bubble short in the best case is O(n)
//In worst and average cases it is O(n^2)
//Space Complexibility is O(1) in all the case
//Bubble Sort is sort Stable
//sort stable means means if the array contains 2 or more same elements in the array then the first coming array will come first and the last coming will come at last.
