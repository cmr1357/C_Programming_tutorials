//print 3 D array
#include<stdio.h>
int main()
{
	int i,j,k;
	int arr[3][4][2]={{{1,2},{3,4},{5,6},{7,8}},{{11,12},{13,14},{15,16},{17,18}},{{22,33},{44,45},{45,66},{77,90}}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<2;k++)
			{
				printf("%d",arr[i][j][k]);
				printf("\t");
			}
				printf("\n");
		}
	}
	return 0;
}