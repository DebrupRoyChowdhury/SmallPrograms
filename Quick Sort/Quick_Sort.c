#include <stdio.h>

int part(int a[], int l, int h)
{
	int piv = a[h], i = l-1, j=l, temp = 0;
	
	for ( ; j < h; j++)
	{
		if(a[j] < piv)
		{
			i++;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	temp = a[i+1];
	a[i+1] = a[h];
	a[h] = temp;
	
	return i + 1;
}
void quick(int a[], int l, int h)
{
	if(l < h)
	{
		int p = part(a, l, h);
		quick(a, l, p-1);
		quick(a, p+1, h);
	}
}

int main()
{
	int size = 0, i = 0;

	printf("\nEnter size of array -> ");
	scanf("%d", &size);
	
	int arr[size];
	
	printf("\nEnter %d elements into the array in any order -> \n",size);
	
	for( ; i<size; i++)
		scanf("%d", &arr[i]);
	
	printf("\nElements in the array before sorting are -> ");
	
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	
	quick(arr, 0, size-1);
	
	printf("\nElements in the array after  sorting are -> ");
	
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	
	printf("\n");
}