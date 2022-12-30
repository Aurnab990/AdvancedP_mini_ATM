#include<stdio.h>
#include<stdlib.h>

int main(void)

{

int entpin,choice;
int balance;
int pin;
int option=1;
FILE *fptr;
fptr = fopen("C:\\file.txt","r");
if(fptr == NULL)
   {
      printf("File did not find");
      exit(1);
   }
   else{
   fscanf(fptr,"%d",&balance);
   fscanf(fptr,"%d",&pin);

printf("***.Welcome to Bank ATM/CDM System.***\n");
printf("\nPlease Insert your Card");
printf("\n*ENTER YOUR PIN NUMBER:");
scanf("%d",&entpin);
if(pin!=entpin)
{
  printf("Your PIN number in incorrect.\nenter the correct PIN number");

}

else

while(option==1)
{
{
printf("\nSelect Your Financial Need\n\n");
printf("1-Check Your balance\n");
printf("2-Money Deposit\n");
printf("3-Money withdraw\n");
printf("4-Money Transfer\n");
scanf("%d",&choice);
}

if(choice == 1)
{

  printf("\nYour account balance: %d",balance);
}
else if (choice==2)
{
int depositamount;
printf("Enter deposit amount:");
scanf("%d",&depositamount);
balance=balance+depositamount;
}
else if(choice==3)
{
  int withdrwamount;
  printf("Enter withdraw amount:");
  scanf("%d",&withdrwamount);
  balance=balance-withdrwamount;
  if(balance<withdrwamount)
  {
      printf("There is No Money in Your Account");
  }
}
else if(choice==4)
{
int tranferacc;
int tranferamount;
printf("enter transfer account number:");
scanf("%d",&tranferacc);
printf("\nenter transfer amount:");
scanf("%d",&tranferamount);
balance=balance-tranferamount;
if(tranferamount>balance)
{
  printf("\n\nEnough balance in your account.");
}
}
else
{
  printf("invalid choice");
}
option=0;
while(option!=1 && option!=2)
{
{
  printf("\n\nDo You want to do other transaction.\n");
  printf("1-Yes\n2-No\n");
  scanf("%d",&option);
}
}
}

}
return 0;

}
