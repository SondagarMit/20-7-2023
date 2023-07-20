#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,n;
 float ans;

 clrscr();
 printf("Enter a Number");
 scanf("%d%d",&a,&b);

 printf("What is your choice");
 scanf("%d",&n);

 if (n==1)
 {
  ans=a+b;
  printf("%f",ans);

 }
  else if(n==2)
 {

  ans=a-b;
  printf("%f",ans);

 }
  else if(n==3)
  {
   ans=a*b;
   printf("%f",ans);

  }
  else if (n==4)
  {
  ans=a/b;
  printf("%f",ans);

  }
 else
 {
  printf("Invaild Number");

 }


 getch();
}