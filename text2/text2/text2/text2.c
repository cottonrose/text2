#define _CRT_SECURE_NO_WARNINGS 1

////1.�����������ͱ�����ֵ��������ֵ�����ݽ��н���
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	int c;
//	printf("������a��b��ֵ��\n");
//	scanf("%d %d",&a,&b);
//	printf("��������\n");
//	c = a;
//	a = b;
//	b = c;
//	printf("a = %d b = %d\n",a,b);
//	return 0;
//}
////2.����������ʱ����������������������
//#include<stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	printf("������a��b��ֵ��\n");
//	scanf("%d %d",&a,&b);
//	printf("��������\n");
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d b = %d",a,b);
//  
//	return 0;
//}
//3.��10�����������ֵ
//#include<stdio.h>
//
//int main()
//{
//	int a[10]={0};
//	int i=0;
//	int max=0;
//	printf("������10��������\n");
//	for(i=0;i<10;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<10;i++)
//	{
//		if(a[i]>max)
//		{
//			max=a[i];
//		}
//	}
//	printf("���ֵΪ��%d\n",max);
//
//	return 0;
//}
//4.�����������Ӵ�С���
//#include<stdio.h>
//
//int main()
//{
//	int a[5] = {0};
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	printf("�������������\n");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	printf("������Ӵ�С���Ϊ��\n");
//	for(i=0;i<4;i++)
//	{
//		for(j=i+1;j<5;j++)
//		{
//			if(a[j]>a[i])
//			{
//				temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	return 0;
//}
//5.�������������Լ��
//����һ(շת�����)��

//#include<stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	int i = 0;
//	printf("������a��b:\n");
//	scanf("%d %d",&a,&b);
//	printf("�����������Լ���ǣ�\n");
//	if(a>b)
//	{
//		i = a % b;
//		while(i)
//		{
//			a = b;
//			b = i;
//			i = a % b;
//		}
//		printf("%d",b);
//	}
//	else
//	{
//		i = b % a;
//		while(i)
//		{
//			b = a;
//			a = i;
//			i = b % a;
//		}
//		printf("%d",a);
//	}
//
//
//	return 0;
//}
//��������stein�㷨����

#include<stdio.h>
#include<math.h>

int min(int m,int n)
{
	if(m<n)
	{
		return m;
	}
	else
	{
		return n;
	}
}

int com_div(int i,int j)
{
	int min(int m,int n);
	int k=1;

	while( i!=0 && j!=0 )
	{
		if( (i%2==0) && (j%2==0))
		{
			i = i >> 1;
			j = j >> 1;
			k = k << 1;
		}
		else if( (i%2==0) && (j%2!=0) )
		{
			i = i >>1;
		}
		else if( (i%2!=0) && (j%2==0) )
		{
			 j = j >> 1;
		}
		else if( (i%2!=0) && (j%2!=0) )
		{
			int i1 = i;
			int j1 = j;
			i = abs(i-j);
			j = min(i1,j1);
		}
	}
	return k*j;
}
int main()
{
	int com_div(int i,int j);
	int a;
	int b;
	printf("������a��b:\n");
	scanf("%d %d",&a,&b);
	printf("�����������Լ���ǣ�%d\n",com_div(a,b));
	return 0;
}
