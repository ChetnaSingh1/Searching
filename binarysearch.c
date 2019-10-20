#include<stdio.h>
#include<conio.h>
int binsearch(int arr[],int n,int key);
void bubblesort(int arr[],int n);
int arr[10],n,key;

int main()
{
	int i,pos;
	printf("Enter the number of elements in the list\n");
	scanf("%d",&n);
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	printf("Enter the values one by one\n");
	for(i=0;i<n;i++)
	{
		printf("Enter element %d\t",i);
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
//	printf("The sorted array %d\n",arr);
	pos=-1;
	pos=binsearch(arr,n,key);
	if(pos!=-1)
	printf("\n The key %d is found at position %d\n",key,pos+1);
	else
	printf("\n The element is not present\n");
}
void bubblesort(int arr[],int n)
{
	printf("The sorted elements= ");
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
		printf("%d\n",arr[i]);
	}
	
}

int binsearch(int arr[],int n,int key)
{
	int i,first,middle,last;
	first=0;
	last=n-1;
	while(last>=first)
	{
		middle=(first+last)/2;
		if(key>arr[middle])
		first=middle+1;
		else if (key<arr[middle])
		last=middle-1;
		else 
		return middle;
	}
	return-1;
}

