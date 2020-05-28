//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
#include<stdio.h>
#include <math.h>

int C1()
{
	for (int i = 1; i < 5; i++)
	{
		int a = i;
		for (int j = 1; j < 5; j++)
		{
			if (j != a)
			{
				int b = j;
				for (int k = 1; k < 5; k++)
				{
					if (k != a && k != b)
					{
						int c = k;
						printf("%d \n", 100 * a + 10 * b + c);
					}
				}
			}
		}
	}
}

/*题目：
企业发放的奖金根据利润提成。
利润(I)低于或等于10万元时，奖金可提10% ；
利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；
20万到40万之间时，高于20万元的部分，可提成5 % ；
40万到60万之间时高于40万元的部分，可提成3 % ；
60万到100万之间时，高于60万元的部分，可提成1.5 % ；
高于100万元时，超过100万元的部分按1 % 提成。
从键盘输入当月利润I，求应发放奖金总数？*/
int C2()
{
	double Bonus, Commission;
	double  i;
	printf("请输入本月奖金（万元)：");
	scanf("%lf", &Bonus);
	i = Bonus / 10;
	if (i == 0)
	{
		Commission = Bonus * 0.1;
		printf("当月可提成为：%f", Commission);
	}
	else if (i >= 1 && i < 2)
	{
		Commission = (Bonus - 10) * 0.075 + 1;
		printf("当月可提成为：%f万元", Commission);
	}
	else if (i >= 2 && i < 4)
	{
		Commission = (Bonus - 20) * 0.05 + 1.75;
		printf("当月可提成为：%f万元", Commission);
	}
	else if (i >= 4 && i < 6)
	{
		Commission = (Bonus - 40) * 0.03 + 1.75 + 1;
		printf("当月可提成为：%f万元", Commission);
	}
	else if (i >= 6 && i < 10)
	{
		Commission = (Bonus - 60) * 0.015 + 1.75 + 1 + 0.6;
		printf("当月可提成为：%f万元", Commission);
	}
	else if (i >= 10)
	{
		Commission = (Bonus - 100) * 0.01 + 1.75 + 1 + 0.6 + 40 * 0.015;
		printf("当月可提成为：%f万元", Commission);
	}


}

/*题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？*/

//判断一个数是否为整数
//  a = (int) a;
int C3()
{
	int a;
	for (double i = 1;; i++)
	{
		if (sqrt(i + 100) == (int)(sqrt(i + 100)))
		{
			if (sqrt(i + 268) == (int)(sqrt(i + 268)))
			{
				printf("该数为%d", (int)i);
				break;
			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
	}
}


/*题目：输入某年某月某日，判断这一天是这一年的第几天？*/
int C4()
{
	int year, month, day;
	scanf("%d,%d,%d", &year, &month, &day);

	int cnt = 0;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		switch (month)
		{
		case 1:
			cnt = day;
			break;

		case 2:
			cnt = 31 + day;
			break;

		case 3:
			cnt = 31 + 29 + day;
			break;

		case 4:
			cnt = 31 + 29 + 31 + day;
			break;

		case 5:
			cnt = 31 + 29 + 31 + 30 + day;
			break;

		case 6:
			cnt = 31 + 29 + 31 + 30 + 31 + day;
			break;

		case 7:
			cnt = 31 + 29 + 31 + 30 + 31 + 30 + day;
			break;

		case 8:
			cnt = 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
			break;

		case 9:
			cnt = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
			break;

		case 10:
			cnt = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
			break;

		case 11:
			cnt = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
			break;

		case 12:
			cnt = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
			break;
		}
	}
	else
	{
		switch (month)
		{
		case 1:
			cnt = day;
			break;

		case 2:
			cnt = 31 + day;
			break;

		case 3:
			cnt = 31 + 28 + day;
			break;

		case 4:
			cnt = 31 + 28 + 31 + day;
			break;

		case 5:
			cnt = 31 + 28 + 31 + 30 + day;
			break;

		case 6:
			cnt = 31 + 28 + 31 + 30 + 31 + day;
			break;

		case 7:
			cnt = 31 + 28 + 31 + 30 + 31 + 30 + day;
			break;

		case 8:
			cnt = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
			break;

		case 9:
			cnt = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
			break;

		case 10:
			cnt = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
			break;

		case 11:
			cnt = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
			break;

		case 12:
			cnt = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
			break;
		}
	}
	printf("这一天是这一年的第%d天", cnt);
}

/*题目：输入三个整数x,y,z，把这三个数由小到大输出。*/

int C5()
{
	int a, b, c;
	int temp;
	scanf("%d %d %d", &a, &b, &c);
	if (a >= b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b >= c)
	{
		temp = c;
		c = b;
		b = temp;
	}
	printf("%d < %d < %d", a,b,c);
}

/*题目：输人三角形边长用星号输出倒三角*/
int C6()
{
	int i,num = 0;
	scanf("%d", &i);
	while (i> 0)
	{
		for (int k = 0; k < num; k++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
		num++;
		i = i - 2;
	}
}


