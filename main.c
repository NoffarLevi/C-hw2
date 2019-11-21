#include <stdio.h>
#include "myBank.h"
#define FIRSTBANKACCOUNT 901
#define LASTBANKACCOUNT 950

int main()
{
char transaction_type=' ';
double interest_rate =0.0;
double amount=0.0;
int bankAccount=0.0;
int b=0;
int a=0;

while(transaction_type!='E')
{
  printf("Please enter the wanted transaction type : \n");
 int c= scanf(" %c", &transaction_type);
 if(c==1)
 {

switch (transaction_type)
{
  

case 'O':
    printf("Please enter the amount you wish to deposite ");
     b=scanf("%lf",&amount);
    if(b==1)
    {
        firstDeposite(amount);
      break;
    }
    printf("Invalid Input for O transaction \n");
    break;
    
  

    case 'B':
   printf("Please enter your account number ");
     b=scanf("%d",&bankAccount);
        if(b==1)
        {
        checkBalance( bankAccount);
        break;
         }
       printf("Invalid Input for B transaction \n");
       break;



    case 'D':
      printf("Please enter your account number  \n");
       b=scanf("%d",&bankAccount);
        if(b==1)
        {
       if(bankAccount<FIRSTBANKACCOUNT||bankAccount>LASTBANKACCOUNT)
       {
         printf("You entered invalid bank account \n");
       }   
        printf("Please enter the amount you wish to deposite  \n");
     a= scanf("%lf",&amount);
     if(a==1)
     {
      depposite( bankAccount, amount);
      break;
     }   
        }
       printf("Invalid Input for D transaction \n");
       break;



    case 'W':
   printf("Please enter your account number  \n");
      b= scanf("%d",&bankAccount);
      if(b==1)
      {
       if(bankAccount<FIRSTBANKACCOUNT||bankAccount>LASTBANKACCOUNT)
       {
         printf("You entered invlaid bank account \n");
       }
        printf("Please enter the amount you wish to withdraw  \n");
      scanf("%lf",&amount);
    withdrawal(bankAccount, amount);
     break;
      }
       printf("Invalid Input for W transaction \n");
       break;




    case 'C':
      printf("Please enter your account number \n");
    b= scanf("%d",&bankAccount);
    if(b==1)
    {
     closeAccount(bankAccount);
    break;
    }
         printf("Invalid Input for C transaction \n");
       break;




    case 'I':
     printf("Please enter an intrest rate  \n");
  b= scanf("%lf",&interest_rate);
  if(b==1)
  {
    intrest( interest_rate);
    break;
  }
       printf("Invalid Input for I transaction \n");
       break;

     case 'P':
   printBankAccount();
    break;

    case 'E':
    break;

 
default:
printf("Please enter  a valid input \n" );
    break;
}


}
}
printf("All accounts have been deleted \n");
return 0;
}
   