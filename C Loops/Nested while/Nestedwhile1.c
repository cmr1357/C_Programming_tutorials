int main()
{
	int i,j,range;
	printf("Enter the range for the pattern\n");
	scanf("%d",&range);
	printf("\n");
	i=0;
	while(i<=range)
	{
		j=0;
		while(j<=range)
		{
			printf("i = %d j= %d ",i,j);
			printf("\t");
			j++;
		}
			printf("\n");
			i++;
	}
	
	
	return 0;
}