#include<stdio.h>
#include<conio.h>

void main()
{

    int a,b,c,d;
    clrscr();
     printf("Enter Your Value ==>>> ");
     scanf("%d%d%d%d",&a,&b,&c,&d);

     if(a>b)
     {
        if(a>c)
        {
          if(a>d)
          {
            printf("A is Big");            

          }
          else
          {

            printf("D is big");

          }

        }
        else
        {

          if (c>d)
           {
             printf("C is big");
           }
          else
          {

                printf("D is Big");

          }
          

        }

     }
     else
     {

        if (b>c)
        {
            if(b>d)
            {
                    printf("B is Big");
            }
            else
            {
                    printf("D is Big");
            }
        }
        else
        {

                printf("Invaid number");

        }

     }
    
    getch();
}