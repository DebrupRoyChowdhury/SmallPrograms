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