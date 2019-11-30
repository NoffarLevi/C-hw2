#include <stdio.h>
#include "myBank.h"
#define COLLOMS 2
#define ROWS 50
#define FIRSTBANKACCOUNT 901
#define LASTBANKACCOUNT 950


 int bank_account=0;

double bank[ROWS][COLLOMS]={0} ;
 



void firstDeposite(double money)
{
    if( bank_account<ROWS)
    {
        for(int i=0;i<ROWS;i++)
        {
        if(bank[i][0]!=1) 
        {
         bank[i][1]=money;
         bank[i][0]=1;
         bank_account++;
         printf("Your Bank Account Number is : %d \n",i+FIRSTBANKACCOUNT);
            return; 
        }  
            
        }
    }
    printf("Can not be created, too many accounts \n");
}


void checkBalance(int bankAccount)
{
if(bankAccount>=FIRSTBANKACCOUNT && bankAccount<=LASTBANKACCOUNT)
{
    if(bank[bankAccount-FIRSTBANKACCOUNT][0]==1)
    {
    printf("Your Balance is : %0.2lf \n",bank[bankAccount-FIRSTBANKACCOUNT][1]);
    }
   else 
   {
     printf(" Bank account number %d does not exist \n",bankAccount);
   } 
}
}

void depposite(int bankAccount,double amount)
{
    if(bankAccount>=FIRSTBANKACCOUNT && bankAccount<=LASTBANKACCOUNT)
{
    if(bank[bankAccount-FIRSTBANKACCOUNT][0]==1)
    {
    printf("Your new Balance  is : %0.2lf \n",bank[bankAccount-FIRSTBANKACCOUNT][1]+=amount);
    }
    else 
    {
        printf(" Bank account number %d does not exist \n",bankAccount);
    }
}
}

void withdrawal(int bankAccount,double amount)
{
    if(bankAccount>=FIRSTBANKACCOUNT && bankAccount<=LASTBANKACCOUNT)
{
    if(bank[bankAccount-FIRSTBANKACCOUNT][0]==1)
    {
        if(bank[bankAccount-FIRSTBANKACCOUNT][1]>=amount)
        {
             printf("Your new Balance  is : %0.2lf \n",bank[bankAccount-FIRSTBANKACCOUNT][1]-=amount); 
        } 
        else
        {
            printf("You don't have enough money \n");
        }      
    }
}
}

void closeAccount(int bankAccount)
{
    if(bankAccount>=FIRSTBANKACCOUNT && bankAccount<=LASTBANKACCOUNT)
{
    if(bank[bankAccount-FIRSTBANKACCOUNT][0]==1)
    {
        bank[bankAccount-FIRSTBANKACCOUNT][0]=0;
        bank[bankAccount-FIRSTBANKACCOUNT][1]=0;
        bank_account--;
        printf("Account number %d is now closed \n",bankAccount);
        return;
    }
     
}
printf("Account number %d doesn't exist \n",bankAccount);
}



void intrest(double interest_rate)
{
    interest_rate=interest_rate/100;
for(int i=0;i<ROWS;i++)
{
    if(bank[i][0]==1)
    {
        bank[i][1]=(bank[i][1])+(bank[i][1]*interest_rate);
        bank[i][1] = (int)(100* bank[i][1]);
       bank[i][1]= bank[i][1]/100;

    }   
}
}

void printBankAccount()
{
    for(int i=0;i<50;i++)
    {
        if(bank[i][0]==1)
        {
          printf("Your Bank Account Number is %d \nYour Balance is : %0.2lf \n",i+FIRSTBANKACCOUNT,bank[i][1]);
        }
    }
   
}









