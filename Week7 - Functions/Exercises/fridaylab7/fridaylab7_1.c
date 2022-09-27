//Name : Charunthon Limseelo
//ID   : 65070503410
//7.1 Prime Range

#include <stdio.h>

int	findprime(int num);

int	main()
{
	int	num1,num2;
	int	temp=0;
	int	x=0;
	scanf("%d",&num1);
	scanf("%d",&num2);
	while(num1<=num2)
	{
		temp=findprime(num1);
		if(temp!=1)
		{
			printf("%d\n",temp);
			x++;
		}
		num1++;
	}
	if(temp==1&&x==0)
		printf("None");
}

int	findprime(int	num)
{
	int	i=1;
	int	count=0;
	while(i<=num)
	{
		if(num%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==2)
		return num;
	else
		return 1;
}
