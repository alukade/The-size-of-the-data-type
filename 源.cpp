#include<stdio.h>

int main()
{
	int i;
	char j;
	float k;

	i = 123;
	j = 'C';
	k = 3.14;

	printf("size of int is %d\n", sizeof(int));//sizeof������������͵Ļ������������
	printf("size of i is %d\n", sizeof(i));//sizeof�������������Ļ�������������Ҳ���Բ���
	printf("size of char is %d\n", sizeof(char));
	printf("size of j is %d\n", sizeof j);//���Ǿ���������������ŵ�����������ÿո����
	printf("size of float is %d\n", sizeof(float));
	printf("size of k is %d\n", sizeof k);//��Ҳ�Ǿ�������������

	return 0;
}