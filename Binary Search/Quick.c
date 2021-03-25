#include <stdio.h>

int part(int a[], int l, int h);

void quick(int a[], int l, int h)
{
	if(l < h)
	{
		int p = part(a, l, h);
		quick(a, l, p-1);
		quick(a, p+1, h);
	}
}