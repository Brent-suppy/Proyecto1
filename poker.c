#include <stdio.h>

int main()
{
	int cartas[3];
	int car1, car2, car3;
	printf("Introduzca su mano de tres cartas: ");
	scanf("%d %d %d",&car1, &car2, &car3);
	if(car1<=13 && car2<=13 && car3<=13)
	{
		if(car1==car2 && car2==car3)
		{
			if(car1==13)
			{
				printf("*\n");
			}
			else
			{
				printf("%d %d %d",car1+1,car2+1,car3+1);
			}
		}	
		else if(car1==car2) 
		{
			if(car1<13)
			{
				printf("%d %d",car1+1,car2+1);
			}
		}	
		else if(car2==car3) 
		{
			if(car2<13)
			{
				printf("%d %d",car2+1,car3+1);
			}
		}
		else if(car1==car3)
		{
			if(car1<13)
			{
				printf("%d %d %d",car1+1,car3+1,car2);
			}
		}	
		else if(car1!=car2 && car2!=car3 &&car1!=car3)
		{
			car1=car2;
			printf("%d %d %d\n",car1, car2, car3);
			printf("Le gana cualquier par o cualquier conjunto\n");
		}
	}
	
} 