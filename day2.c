#include <stdio.h>
#include <string.h>
#include<stdlib.h>
struct tra
{
    char name[15];
    int age;
    int number;
};
 struct tra numtra[60],numtra02[60],numtra03[60],numtra04[60],numtra05[60];
  int tnum, z, seat;
int main();
void search(char x[10], char *y);
void displaytrains();
void regi();
void getinfo();
void getinfo02();
void getinfo03();
void getinfo04();
void getinfo05();
int main()
{
    char at[10];
    char reach[10];
    printf("Enter your current platform location : ");
    scanf("%s", &at);
    printf("\nEnter your destination platform location : ");
    scanf("%s", &reach);
    search(at, reach);

    return 0;
}
void search(char x[10], char y[10])
{
    char a[10] = "bhopal";
    char i[10] = "indore";
    char g[10] = "Bhopal";
    char h[10] = "Indore";
    if (strcmp(x, a) == 0 && strcmp(y, i) == 0 || strcmp(x, g) == 0 && strcmp(y, h) == 0)
    {
        displaytrains();
    }
}

void displaytrains()
{
    printf("[19302] 1:15 AM -> 6:20 AM(Dr.ambedkar nagar weeekly Express)\t\t S M T W 'T' F S\n");
    printf("[20918] 1:40 AM -> 5:40 AM(indore humsafar Express)\t\t runs daily\n");
    printf("[18234] 4:05 AM -> 10:55 AM(Narmda Express)\t\truns daily\n");
    printf("[22192] 5:15 AM -> 9:35 AM(Indore sf express)\t\truns daily\n");
    printf("[12920] 7:45 AM -> 9:35 PM(Malwa SF Express)\t\truns daily\n");
    regi();
}
void regi()
{
   
    printf("|| fill these details for registration ||\n");
    printf("        enter the train no.: ");
    scanf("%d", &tnum);
      switch (tnum)
      {
      case 19302:
      	    getinfo();
        break;
      case 20918:
      	  getinfo02();
      	  break;
      	  
      case 18234:
      	  getinfo03();
      	  break;
      	  
      case 22192:
        getinfo04();
	break;
	case 12920:
	  getinfo05();	  
     
        break;
      }
  
	    }  
    
   void getinfo()
   {
   	  
    printf("Enter 1 for AC Tier-1 Coach no.-01||");
    printf("Enter 2 for AC Tier-2 Coach no.-02||");
    printf("Enter 3 for AC Tier-3 Coach no.-03\n");
    printf("         enter the coach no.:");
    scanf("%d",&z);
    printf("\nenter the number of seats that you want to reserve: ");
    scanf("%d", &seat);
        
	    for( int i=1 ;i<seat;i++)
	    {   printf("\nEnter the details of %dst person\n",i);
	    	printf("Enter the traveller Name: ");
	    	scanf("%s",&numtra[i].name);
	    	printf("\nEnter the travellers age: ");
	    	scanf("%d",&numtra[i].age);
	    	printf("\nEnter the travellers number: ");
	    	scanf("%d",&numtra[i].number);
	    	
   }
}
  
   	  void getinfo02()
   	  {
	     
    printf("Enter 1 for AC Tier-1 Coach no.-01||");
    printf("Enter 2 for AC Tier-2 Coach no.-02||");
    printf("Enter 3 for AC Tier-3 Coach no.-03\n");
    printf("         enter the coach no.:");
    scanf("%d", &z);
    printf("\nenter the number of seats that you want to reserve: ");
    scanf("%d", &seat);
        
	    for( int i=1 ;i<seat;i++)
	    {   printf("\nEnter the details of %dst person\n",i);
	    	printf("Enter the traveller Name: ");
	    	scanf("%s",&numtra02[i].name);
	    	printf("\nEnter the travellers age: ");
	    	scanf("%d",&numtra02[i].age);
	    	printf("\nEnter the travellers number: ");
	    	scanf("%d",&numtra02[i].number);
   }
}
       void getinfo03()
   {
   	  
    printf("Enter 1 for AC Tier-1 Coach no.-01||");
    printf("Enter 2 for AC Tier-2 Coach no.-02||");
    printf("Enter 3 for AC Tier-3 Coach no.-03\n");
    printf("         enter the coach no.:");
    scanf("%d", &z);
    printf("\nenter the number of seats that you want to reserve: ");
    scanf("%d", &seat);
        
	    for( int i=1 ;i<seat;i++)
	    {   printf("\nEnter the details of %dst person\n",i);
	    	printf("Enter the traveller Name: ");
	    	scanf("%s",&numtra03[i].name);
	    	printf("\nEnter the travellers age: ");
	    	scanf("%d",&numtra03[i].age);
	    	printf("\nEnter the travellers number: ");
	    	scanf("%d",&numtra03[i].number);
   }}
         void getinfo04()
   {
   	  
    printf("Enter 1 for AC Tier-1 Coach no.-01||");
    printf("Enter 2 for AC Tier-2 Coach no.-02||");
    printf("Enter 3 for AC Tier-3 Coach no.-03\n");
    printf("         enter the coach no.:");
    scanf("%d", &z);
    printf("\nenter the number of seats that you want to reserve: ");
    scanf("%d", &seat);
        
	    for( int i=1 ;i<seat;i++)
	    {   printf("\nEnter the details of %dst person\n",i);
	    	printf("Enter the traveller Name: ");
	    	scanf("%s",&numtra04[i].name);
	    	printf("\nEnter the travellers age: ");
	    	scanf("%d",&numtra04[i].age);
	    	printf("\nEnter the travellers number: ");
	    	scanf("%d",&numtra04[i].number);
   }}
        void getinfo05()
   {
   	  
    printf("Enter 1 for AC Tier-1 Coach no.-01||");
    printf("Enter 2 for AC Tier-2 Coach no.-02||");
    printf("Enter 3 for AC Tier-3 Coach no.-03\n");
    printf("         enter the coach no.:");
    scanf("%d", &z);
    printf("\nenter the number of seats that you want to reserve: ");
    scanf("%d", &seat);
        
	    for( int i=1 ;i<seat;i++)
	    {   printf("\nEnter the details of %dst person\n",i);
	    	printf("Enter the traveller Name: ");
	    	scanf("%s",&numtra05[i].name);
	    	printf("\nEnter the travellers age: ");
	    	scanf("%d",&numtra05[i].age);
	    	printf("\nEnter the travellers number: ");
	    	scanf("%d",&numtra05[i].number);
   }
}
    
    

