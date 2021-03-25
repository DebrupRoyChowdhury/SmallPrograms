#include <stdio.h>

void b_search(int a[], int item, int size)
{
	int l = 0, u = size-1, m = size/2;

	while((m > l) && (m < u))
	{
		if (item == a[m])
		{
			printf("\nElement %d was found in position %d\n", item, (m+1));
			return;
		}

		else if (item >= a[m])
			l=m;

		else if (item <= a[m])
			u=m;

		m=(l+u)/2;
	}
	printf("\nElement %d wasn't found in the array\n", item);
}