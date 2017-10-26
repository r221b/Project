// Bank Management System
#include<stdio.h>
#include<conio.h>
void creation();   
void deposit();	   
void withdraw();   
void bal();	       
int a=0,i=100;     
struct bank
{
	int no;
	char name[20];
	float bal;
	float dep;
}
s[20];
void main()			
{
	 int ch;
     	while(1)
	{
	 clrscr();
	 printf("\n \t\t\t\t*********************");
	 printf("\n \t\t\t\t      BANKING ");
	 printf("\n \t\t\t\t*********************");
	 printf("\n \t\t\t\t1-Creation");
	 printf("\n \t\t\t\t2-Deposit");
	 printf("\n \t\t\t\t3-Withdraw");
	 printf("\n \t\t\t\t4-Balance Enquiry");
	 printf("\n \t\t\t\t5-Exit");
	 printf("\n \t\t\t\tEnter your choice: ");
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
	    defalut: printf("Invalid input: Enter choice from 1 - 5: ");
	    getch();
	}
    }
}
void creation()
 {
		  printf("\n*************************************");
		  printf("\n        ACCOUNT CREATION ");
		  printf("\n*************************************");
		  printf("\nYour Account Number is :%d",i);
		  s[a].no = i;
		  printf("\n Enter your Name: ");
		  scanf("%s",s[a].name);
		  printf("\n  Your account has been succesfully created. ");
		  s[a].dep = 500;
		  a++;
		  i++;
		  printf("\nStarting amount is Rs. 500. \n Press enter to proceed. ");
		  getch();
 }
	      void deposit()
 {
		   int no,b=0,m=0;
		   float aa;
		   printf("\n\t\t\t\t*************************************");
		   printf("\n\t\t\t\t              DEPOSIT ");
		   printf("\n\t\t\t\t*************************************");
		   printf("\nEnter your Account Number: ");
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
					printf("\n Total amount: %f",s[m].dep);
					printf("\n How much you want to deposit :");
					scanf("%f",&aa);
					s[m].dep+=aa;
					printf("\n Total Amount :%f",s[m].dep);
					printf("\n Press enter to proceed.");
					getch();
			     }
			    else
					{
				       printf("\nACCOUNT NUMBER IS INVALID: Please enter a your valid account number!");
				       getch();
					}
 }
	     void withdraw()
 {
		    int no,b=0,m=0;
		    float aa;
		    printf("\n*************************************");
		    printf("\n             WITHDRAW ");
		    printf("\n*************************************");
		    printf("\nEnter your Account Number: ");
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
				printf("\n Total amount : %f",s[m].dep);
				printf("\n How Much Withdraw to now? ");
				scanf("%f",&aa);
				if(s[m].dep<aa+500)
				   {
				  printf("\n YOUR ACCOUNT DOESN'T HAS ADEQUATE BALANCE");
				  getch();
				   }
					  else
					   {
						  s[m].dep-=aa;
						  printf("\nThe Balance Amount is:%f",s[m].dep);
						  printf("\n Press enter to proceed.");
					    }
				 }
			       else
				{
				      printf("INVALID TRANSACTION");
				      getch();
				}
				      getch();
 }
		void bal()
 {
		  int no,b=0,m=0;
		  float aa;
		  printf("\n\t\t\t\t*************************************");
		  printf("\n\t\t\t\t         BALANCE ENQUIRY ");
		  printf("\n\t\t\t\t*************************************");
		  printf("\n Enter your Account Number: ");
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
				    printf("\n Total Amount : %f",s[m].dep);
				    getch();
			      }
			     else
			     {
				    printf("INVALID ACCOUNT NUMBER");
				    getch();
				 }
 }
