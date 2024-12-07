int main ()

{
    add();
    sub();
    m();
    d();
}
add()
{
printf ("addition of two numbers");
//this code display how two numbers of addition work in c //
int a;
 printf ("enter a");
 scanf("%d",&a);
 int b;
 printf("eneter b");
 scanf("%d",&b);
 int sum= a+b;
 printf("sum is :%d",a+b);
  return 0;
}
sub()
{

printf ("subtraction of two numbers");
//this code display how two numbers of subtraction work in c //
int a;
 printf ("enter a");
 scanf("%d",&a);
 int b;
 printf("eneter b");
 scanf("%d",&b);
 int sub= a-b;
 printf("sub is :%d",a-b);
  return 0;
}
m()
{
printf ("multiplication of two numbers");
//this code display how two numbers of multiplication work in c //
int a;
 printf ("enter a");
 scanf("%d",&a);
 int b;
 printf("eneter b");
 scanf("%d",&b);
 int m= a*b;
 printf("multiplication is :%d",a*b);
  return 0;
}
d()
{
 printf ("division of two numbers");
//this code display how two numbers of division work in c //
int a;
 printf ("enter a");
 scanf("%d",&a);
 int b;
 printf("eneter b");
 scanf("%d",&b);
 int m= a%b;
 printf("division is :%d",a%b);
  return 0;
}
