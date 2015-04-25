#include <stdio.h>
#include <stdlib.h>

int mirror(int room[][])

int main(int argc, char const *argv[])
{
	int w, d;
	scanf("%d %d",&w,&d);
	int room[d][w];
	int i, j;
	for (i = 0; i < d ; i++)
	{
		for (j = 0; j < w ; j++)
		{
			scanf("",room[i][j]);
		}
	}
	for (i = d; i >= 0 ; i--)
	{
		for (j = w; j >= 0 ; j--)
		{
			mirror(i, j);
		}
	}
	return 0;
}

int mirror(int i, int j)
{
	(room[][] == )
	{

	}	
}














