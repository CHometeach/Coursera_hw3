#include <stdio.h>
#include <stdlib.h>

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
	return 0;
}