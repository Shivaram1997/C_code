#include<stdio.h>
//start of program
const int t=100;
int v=20;
int j;
int add(int,int);
void main()
 {
static int a=20;
int x=10,res;
res=add(x,a);
printf("%d is the value",res);
 }
int add(int x,int a)
{
return x+a;
}
