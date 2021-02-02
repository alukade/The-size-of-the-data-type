#include<stdio.h>

int main()
{
	int i;
	char j;
	float k;

	i = 123;
	j = 'C';
	k = 3.14;

	printf("size of int is %d\n", sizeof(int));//sizeof后面跟变量类型的话，必须加括号
	printf("size of i is %d\n", sizeof(i));//sizeof后面跟具体变量的话，可以用括号也可以不用
	printf("size of char is %d\n", sizeof(char));
	printf("size of j is %d\n", sizeof j);//这是具体变量名不加括号的情况，必须用空格隔开
	printf("size of float is %d\n", sizeof(float));
	printf("size of k is %d\n", sizeof k);//这也是具体变量名的情况

	return 0;
}