#include<stdio.h>
#include<limits.h>
#include<conio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void PrintArr(int *A,int n)
{
for(int i=0;i<n;i++)
{
    printf("%d ",A[i]);
}
printf("\n");
}

int partition(int A[],int low , int high)
{
    int pivot=A[low];//element considered as a reference
    int i=low+1;//low +1 as first index element is considered as pivot 
    int j=high;//n-1
    int temp;//for swapping
    do
    {
        while(A[i]<=pivot)//for solving left side 
        //it will find element greater than pivot element as it find it will stop there
        {
            i++;// if not found element greater than pivot it will move towards right 
        }
        while(A[j]>pivot)//for solving right side
        //if it finds the element lesser than pivot element as it will found it will stop there
        {
            j--;//if not found decrement will be done
        }
        if(i<j)//the greater and lesser element founded swapping will be done for them
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
        while(i<j);
        
        temp=A[low];
        A[low]=A[j];
        A[j]=temp;
        return j;
}
void QuickSort(int A[], int low, int high)
{
int partitionIndex;
if(low<high)
{
    partitionIndex=partition(A,low,high);
    QuickSort(A,low,partitionIndex-1);// sort left subarray
    QuickSort(A,partitionIndex+1,high);//sort right subarray
}
}
int main()
{
int n;
print("Enter the Size of the Array\n");
scanf("%d",&n);
int A[n];
printf("Enter The Elements \n");
for(int i=0;i<n;i++)
{
    scanf("%d",&A[i]);
}
PrintArr(A,n);
QuickSort(A,0,n-1);
PrintArr(A,n);
return 0;
}
/*
In the quicksort algorithm, every time you get a fresh unsorted subarray, you do a partition on it. 
 Partition asks you to first choose an element as a pivot. And as already decided, we would choose the first element of the unsorted subarray as the pivot.
  We would need two more index variables, i and j. 
  Below enlisted is the flow of our partition algorithm we must adhere to.
   We always start from step 1 with each fresh partition call
*/
/*
1 Define i as the low index, which is the index of the first element of the subarray, and j as the high index, which is the index of the last element of the subarray.

2 Set the pivot as the element at the low index i since that is the first index of the unsorted subarray.
Increase i by 1 until you reach an element greater than the pivot element.

3 Decrease j by 1 until you reach an element smaller than or equal to the pivot element.

4 Having fixed the values of i and j, interchange the elements at indices i and j.

5 Repeat steps 3, 4, and 5 until j becomes less than or equal to i.

6 Finally, swap the pivot element and the element at the index.
*/