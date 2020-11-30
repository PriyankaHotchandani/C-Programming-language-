#include<stdio.h>
#include<stdlib.h>

void creation();
void deposit();
void withdraw();
void bal();

int a=0,i = 101;

struct bankaccount
{
    int no;
    char name[20];
    char aadhar[15];
    float bal;
    float dep;
}s[20];

void main()
{
int ch;
while(1)
{
printf("\n BANKING \n");
printf("\n1-Creation");
printf("\n2-Deposit");
printf("\n3-Withdraw");
printf("\n4-Balance Enquiry");
printf("\n5-Exit");
printf("\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1: creation();
break;
case 2: deposit();
break;
case 3: withdraw();
break;
case 4: bal();
break;
case 5: exit(0);
default: printf("Enter 1-5 only");
getch();
}
}
}

void creation()
{
printf("\n ACCOUNT CREATION \n");
printf("\nYour Account Number is :%d",i);
s[a].no = i;
printf("\nEnter your Name:");
scanf("%s",s[a].name);
printf("\nEnter Aadhar Card number :");
scanf("%s",s[a].aadhar);
printf("\nYour minimum Deposit is Rs.500");
s[a].dep=500;
a++;
i++;
getch();
}

void deposit()
{
int no,b=0,m=0;
float aa;
printf("\n DEPOSIT \n");
printf("\nEnter your Account Number");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no == no)
m = b;
}
if(s[m].no == no)
{
printf("\n Account Number : %d",s[m].no);
printf("\n Name : %s",s[m].name);
printf("\n Aadhar number : %s",s[m].aadhar);
printf("\n Deposit : %f",s[m].dep);
printf("\n Amount Deposited:");
scanf("%f",&aa);
s[m].dep+=aa;
printf("\nDeposit Amount is :%f",s[m].dep);
getch();
}
else
{
printf("\nACCOUNT NUMBER IS INVALID");
getch();
}
}

void withdraw()
{
int no,b=0,m=0;
float aa;
printf("\n WITHDRAW \n");
printf("\nEnter your Account Number");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no == no)
m = b;
}
if(s[m].no == no)
{
printf("\n Account Number : %d",s[m].no);
printf("\n Name : %s",s[m].name);
printf("\n Aadhar number : %s",s[m].aadhar);
printf("\n Deposit : %f",s[m].dep);
printf("\n Amount Withdrew:");
scanf("%f",&aa);
if(s[m].dep<aa+500)
{
printf("\nCANNOT WITHDRAW. YOUR ACCOUNT HAS MINIMUM BALANCE.");
getch();
}
else
{
s[m].dep-=aa;
printf("\nThe Balance Amount is:%f",s[m].dep);
}
}
else
{
printf("INVALID");
getch();
}
getch();
}

void bal()
{ int no,b=0,m=0;
float aa;
printf("\n BALANCE ENQUIRY \n");
printf("\nEnter your Account Number");
scanf("%d",&no);
for(b=0;b<i;b++)
{
if(s[b].no == no)
m = b;
}
if(s[m].no==no)
{
printf("\n Account Number : %d",s[m].no);
printf("\n Name : %s",s[m].name);
printf("\n Aadhar number : %s",s[m].aadhar);
printf("\n Deposit : %f",s[m].dep);
getch();
}
else
{
printf("INVALID");
getch();
}
}
