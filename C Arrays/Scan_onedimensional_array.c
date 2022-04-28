int main()
{
	int i;
	int arr[5];
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}