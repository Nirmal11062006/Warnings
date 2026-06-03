//function declares address of local variable
#include<stdio.h>
void fun()
{
	int a=10;
	return &a;
}
int main()
{
	fun();
	return 0;
}
