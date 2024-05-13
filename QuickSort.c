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
    int pivot=A[low];
    int i=low+1;
    int j=high;
    int temp;
    do
    {
        while(A[i]<=pivot)
        {
            i++;
        }
        while(A[j]>pivot)
        {
            j--;
        }
        if(i<j)
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