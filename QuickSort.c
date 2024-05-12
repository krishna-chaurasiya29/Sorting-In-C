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

void QuickSort(int *A, int low, int high)
{
printf(" ");
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