#include<stdio.h>

main()
{

    int i=1,n,num;
	printf("Enter value of n = ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);

         num=num*i;
		i++;

	}
	printf("factorial=%d",num);

} 
