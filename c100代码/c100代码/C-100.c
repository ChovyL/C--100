//��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
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

/*��Ŀ��
��ҵ���ŵĽ������������ɡ�
����(I)���ڻ����10��Ԫʱ���������10% ��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10% ��ɣ�����10��Ԫ�Ĳ��֣������7.5 % ��
20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5 % ��
40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3 % ��
60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5 % ��
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1 % ��ɡ�
�Ӽ������뵱������I����Ӧ���Ž���������*/
int C2()
{
	double Bonus, Commission;
	double  i;
	printf("�����뱾�½�����Ԫ)��");
	scanf("%lf", &Bonus);
	i = Bonus / 10;
	if (i == 0)
	{
		Commission = Bonus * 0.1;
		printf("���¿����Ϊ��%f", Commission);
	}
	else if (i >= 1 && i < 2)
	{
		Commission = (Bonus - 10) * 0.075 + 1;
		printf("���¿����Ϊ��%f��Ԫ", Commission);
	}
	else if (i >= 2 && i < 4)
	{
		Commission = (Bonus - 20) * 0.05 + 1.75;
		printf("���¿����Ϊ��%f��Ԫ", Commission);
	}
	else if (i >= 4 && i < 6)
	{
		Commission = (Bonus - 40) * 0.03 + 1.75 + 1;
		printf("���¿����Ϊ��%f��Ԫ", Commission);
	}
	else if (i >= 6 && i < 10)
	{
		Commission = (Bonus - 60) * 0.015 + 1.75 + 1 + 0.6;
		printf("���¿����Ϊ��%f��Ԫ", Commission);
	}
	else if (i >= 10)
	{
		Commission = (Bonus - 100) * 0.01 + 1.75 + 1 + 0.6 + 40 * 0.015;
		printf("���¿����Ϊ��%f��Ԫ", Commission);
	}


}

/*��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�*/

//�ж�һ�����Ƿ�Ϊ����
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
				printf("����Ϊ%d", (int)i);
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


/*��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿*/
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
	printf("��һ������һ��ĵ�%d��", cnt);
}

/*��Ŀ��������������x,y,z��������������С���������*/

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

/*��Ŀ�����������α߳����Ǻ����������*/
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


