int main()
{
	int i,j,range;
	printf("Enter the range for the pattern\n");
	scanf("%d",&range);
	printf("\n");
	i=0;
	do
	{
		j=0;
		do
		{
			printf("i = %d j= %d ",i,j);
			printf("\t");
			j++;
		}while(j<=range);
			printf("\n");
			i++;
	}while(i<=range);
	
	
	return 0;
}