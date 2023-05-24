#include<stdio.h>


main()
{
	
	int i,n,f=0,s=1,total;
	
	printf("Enter the value n = ");
	scanf("%d",&n);
	
	total = f+s;
	printf("%d,%d",f,s);
	
	for(i=3;i<=n;i++)
	{
		printf(",%d",total);
	
		f=s;
		s=total;
		total = f+s;
	}


}
