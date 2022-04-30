//Function pass required arguments
int add(int, int);
int main()
{
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	int k=add(a,b);
	printf("Sum= %d\n",k);
	return 0;
}
int add(int x,int y)
{
	int sum=x+y;
	return sum;
}