int main()
{
	int i,j,range;
	printf("Enter the range for the pattern\n");
	scanf("%d",&range);
	printf("\n");
	i=1;
	while(i<=range)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",j);
			j++;
		}
			printf("\n");
			i++;
	}
	
	
	return 0;
}