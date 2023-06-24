#include <stdio.h>
#include <stdlib.h>

int main()
{
   //example
  int n_1,n_2,add,sub,mult;
  float div;
  char ch;

  printf("Menu:\n");
  printf("+.Addition\n");
  printf("-.Subtraction\n");
  printf("*.multiplication\n");
  printf("/.Divition\n");

  printf("Enter your choice:\n");
  scanf("%c",&ch);
  printf("Enter first value:\n");
  scanf("%d",&n_1);
  printf("Enter second value:\n");
  scanf("%d",&n_2);

  add=n_1+n_2;
  sub=n_1-n_2;
  mult=n_1*n_2;
  div=n_1/n_2;


  switch(ch)
  {
      case '+':printf("addition = %d\n",add);break;
      case '-':printf("subtraction = %d\n",sub);break;
      case '*':printf("Multiplication = %d\n",mult);break;
      default:printf("divition = %f\n",div);
  }



  // Q2

  int ch,n_1,n_2,add,sub,mult;
  float div;

  printf("Menu:\n");
  printf("1.Addition\n");
  printf("2.Subtraction\n");
  printf("3.multiplication\n");
  printf("4.Divition\n");

  printf("Enter your choice:\n");
  scanf("%d",&ch);
  printf("Enter first value:\n");
  scanf("%d",&n_1);
  printf("Enter second value:\n");
  scanf("%d",&n_2);

  add=n_1+n_2;
  sub=n_1-n_2;
  mult=n_1*n_2;
  div=n_1/n_2;


  switch(ch)
  {
      case 1:printf("addition = %d\n",add);break;
      case 2:printf("subtraction = %d\n",sub);break;
      case 3:printf("Multiplication = %d\n",mult);break;
      default:printf("divition = %f\n",div);
  }



   // Q1 using switch

   int y,z;
   printf("Enter a number:");
   scanf("%d",&y);
   z=y%2;

   switch(z)
      {
          case 0:printf("y is even \n");break;
          default:printf("y is odd \n");
      }



   // Q1 using if -else

   int x;
   printf("Enter a number:\n");
   scanf("%d",&x);

   if(x%2==0)
    {
    printf("x is even number");
    }
   else
   {
    printf("x is odd number");
   }

    return 0;
}
