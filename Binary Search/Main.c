#include <stdio.h>

void b_search(int a[], int item, int size);
void quick(int a[], int l, int h);
int part(int a[], int l, int h);

int main()
{
	int size = 0, i = 0, search = 0;

	printf("\nEnter Size Of Array -> ");
	scanf("%d", &size);
	
	int arr[size];
	
	printf("\nEnter %d elements -> \n",size);
	
	for( ; i < size; i++)
		scanf("%d", &arr[i]);
	
	quick(arr, 0, size-1);

	printf("\nEnter element to be searched -> ");
	scanf("%d", &search);

	b_search(arr, search, size);
	
	printf("\n");
}