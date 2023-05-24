#include<stdio.h>

main()

{
	int first,last,num,sum;
	printf("Enter the number = ");
	scanf("%d",&num);
	last = num%10;
	while(num>=10)
	{
	    num=num/10;
	}
	first=num;
	sum=last+first;
	printf("%d",sum);
}
