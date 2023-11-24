#include<stdio.h>
#include<stdlib.h>
void sort(int[],int);
void main()
{
	int *arr,N,i;
	printf("Enter the number of elements: ");
	scanf("%d",&N);
	arr=(int*)malloc(sizeof(int));
	printf("Enter the %d elements of the array arr:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,N);
	printf("Sorted Array is :\n");
	for(i=0;i<N;i++)
	printf("%d\n",arr[i]);
}
void sort(int array[],int size)
{
	int t,i,j;
	for(i=1;i<size;i++)
	{
		t=array[i];
		for(j=i-1;j>=0;j--)
		{
			if(array[j]>t)
			array[j+1]=array[j];
			else 
			break;
			array[j]=t;
		}
	}
}
