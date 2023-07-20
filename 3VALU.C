#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;

 clrscr();
 printf("Choose A Number ==>> ");
 scanf("%d%d%d",&a,&b,&c);

 if(a>b)
 {
  if(a>c)
  {
   printf("A is Big");

  }
  else
  {
   printf("C is Big");

  }


 }
 else
 {
   if(b>c)
   {
    printf("B is Big");

   }
   else
   {
    printf("C is big");

   }

 }

 getch();


}