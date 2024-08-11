#include<stdio.h>
#include<conio.h>

int main()
{
    int choice,numofplate;
    float price,amnt,grandtotal=0;
    char chr;

    do
    {
      printf("/nWelcome To XYZ Hotel\n");
      printf("Menu:\n");
      printf("1 Samosa 20/-\n");
      printf("2 Dosa 30/-\n");
      printf("3 tea 10/-\n");

      printf("\nEnter your Choice:");
      scanf("%d" , &choice);

      printf("\nEnter number of plates:");
      scanf("%d" , &numofplate);


      switch (choice)
      {
      case 1:
        price=20.00;
        break;
      case 2:
        price=30.00;
        break;
      case 3:
        price=10.00;
        break;

      default:
        printf("Sorry there is wrong input");
        break;
      }

      amnt=price*numofplate;
      printf("Sub-Total=%.2f",amnt);

      grandtotal=grandtotal+amnt;


      printf("\nWanna add more food(Y/N)-");
      chr=getche();

    } while (chr=='Y' || chr=='y');

    printf("\n\nYour Grand Total is-%.2f",grandtotal);

    printf("\nT H A N K  Y O U !");

    
      return 0;
}