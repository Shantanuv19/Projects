#include<stdio.h>
#include <windows.h>
#include <dos.h>
#include <conio.h>
#include <windows.h>
char filename[40]="final.txt";
char gmail[100], pass[100], adminu[100]={"shantanu@gmail.com"},adminp[100]={"shantanu"};
struct date{
    int month,day,year;

    };
struct nam{
	char name1[31], name2[31], name3[32];
};
struct{
	
	int age,ac_t;
	char aedhar[12], address[100],ac1[10];
	long long ac,m,rup,ac2;
	struct date dob;
    struct date deposit;
    struct date withdraw;
    struct nam name;
}cdata, ddata;
void sp(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void admin(void);
void create(int z);
void del(int z)
{
	FILE *fileptr1, *fileptr2;
    char ch;
    int delete_line, temp = 1;
    fileptr1 = fopen(filename, "r");
    ch = getc(fileptr1);
   while (ch != EOF)
    {
    	printf("%c", ch);
        ch = getc(fileptr1);
    }
    rewind(fileptr1);
    if(z==1)
    {printf(" \n Enter line number of the line to be deleted:- ");scanf("%d", &delete_line);}
    else
    {printf(" \n Enter line number of the line to be edit:- ");scanf("%d", &delete_line);}
   fileptr2 = fopen("replica.c", "w");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
        ch = getc(fileptr1);
        if (ch == '\n')
            temp++;
            if (temp != delete_line)
            {
                putc(ch, fileptr2);
            }
    }
    fclose(fileptr1);
    fclose(fileptr2);
    remove(filename);
    rename("replica.c", filename);
    printf("\n The contents of file after being modified are as follows:\n");
    fileptr1 = fopen(filename, "r");
    ch = getc(fileptr1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fileptr1);
    }
    fclose(fileptr1);
}
void modify()
{
	del(0);
	printf("Enter Your Data For Modification:- ");
	create(0);
}
void search()
{
	FILE* file = fopen(filename, "r"); 
    char line[256]; 
    int i = 1, b,c=0;
	printf("Enter the Bank account no to delete:- ");
	scanf("%d",&b); 
    while (fgets(line, sizeof(line), file)) { 
        i++; 
        if(i == b ) 
        { 
        	c=1;
            printf("%s", line);    
        } 
    } 
 	fclose(file);
 	if(c==0)
 	{
 		printf("Envalid Bank Account....");
	 }
	 getch();
	 system("cls");
}
void list()
{
	FILE* ptr;
    char ch;
 	system("cls");
    ptr = fopen(filename, "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(ptr); 
    getch();
    system("cls");
}
void fun()
{
	printf("  %c %c Thank You %c %c ",2,2);
}

void admin(void){
	system("cls");
	system("color B");
	sp(22,2);
	char n[30]=" WELCOME ADMIN ";
	int a;
	for(a=0; a<16; a++)
	{
		printf("\xDB");
	}
	printf(" %c %c ",2,2);
	for( a=0; a<strlen(n); a++)
	{
		printf("%c",n[a]);
	}
	printf(" %c %c ",2,2);
	for( a=0; a<16; a++)
	{
		printf("\xDB");
	}
		int choice;
	do{
		printf("\n\n");
		for(a=0; a<3; a++)
		{
			printf("\xDB");
		}
		printf(" 1 Create New Account :\n\n");
		for(a=0; a<3; a++)
		{
			printf("\xDB");
		}
		printf(" 2 Delete Account :\n\n");
		for(a=0; a<3; a++)
		{
			printf("\xDB");
		}
		printf(" 3 Modify Account :\n\n");
		for(a=0; a<3; a++)
		{
			printf("\xDB");
		}
		printf(" 4 Scarch Account :\n\n");
		for(a=0; a<3; a++)
		{
			printf("\xDB");
		}
		printf(" 5 List All Account :\n\n");
		for(a=0; a<3; a++)
		{
			printf("\xDB");
		}
		printf(" 6 Exit :\n\n");
		printf("\n\n\t\tEnter your choice:- ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: create(1); break;
			case 2: del(1); break;
			case 3: modify(); break;
			case 4: search(); break;
			case 5: list(); break;
			case 6: main(); break;
			default: printf("Envalid...");
		}
	}while(choice!=6);
}

int main()
{
	int val=0,z,j;
	do{
	system("cls");
	system("color B");
	sp(22,2);
	char n[50]="! ! BANK MANAGEMENT SYSTEM ! !";
	for(j=0;j<=16;j++){
		Sleep(60);
		printf("\xDB");
	}
	for(j=0;j<=strlen(n);j++){
		Sleep(60);
		printf("%c",n[j]);
	}
	for(j=0;j<=16;j++){
		Sleep(50);
		printf("\xDB");
	}
	printf("\n\n%c %c LOGIN YOUR ID  %c %c \n\n",1,1,1,1);
	Sleep(2000);
	
		
		printf("\tEnter Your email:- ");
		scanf("%s",&gmail);
		printf("\tEnter Your Password:- ");
		scanf("%s",&pass);
		if(strcmp(adminu,gmail)==0 && strcmp(adminp,pass)==0)
		{
			printf("Login Sucessfully....");
			Sleep(3000);
			admin();
			val=1;
		}else if(strcmp(adminu,gmail)==0){
			if(strcmp(adminp,pass)!=0)
			{
				printf("Envalid Password... ");
				Sleep(2000);
			}
			system("cls");
			val=1;
		}else{
			system("cls");
			system("color C");
			printf("\nEnvalid password");
			Sleep(300);
			system("cls");
			val=1;
		}
	}while(val!=0);
}
void create(int z)
{
	int j;
	system("cls");
	FILE *ptr;
	ptr=fopen(filename,"a");
	system("cls");
	sp(22,2);
	if(z==1){
    char n[50]="  CREATE NEW ACCOUNT  ";
	for(j=0;j<=16;j++){
		Sleep(60);
		printf("\xB2");
	}
	for(j=0;j<=strlen(n);j++){
		Sleep(60);
		printf("%c",n[j]);
	}
	for(j=0;j<=16;j++){
		Sleep(50); 
		printf("\xB2");
	}}else{
    char n[50]="  EDIT CREATED ACCOUNT  ";
	for(j=0;j<=16;j++){
		Sleep(60);
		printf("\xB2");
	}
	for(j=0;j<=strlen(n);j++){
		Sleep(60);
		printf("%c",n[j]);
	}
	for(j=0;j<=16;j++){
		Sleep(50); 
		printf("\xB2");
	}
	}
	printf("\nEnter Aedhar Number:- ");
	scanf("%s",cdata.aedhar);
	printf("Enter Current Date (dd mm yy):- ");
	scanf("%d%d%d",&cdata.deposit.day,&cdata.deposit.month,&cdata.deposit.year);
	//printf("%d/%d/%d",cdata.deposit.day,cdata.deposit.month,cdata.deposit.year);
	printf("Enter Account Number:- ");
	scanf("%lli",&cdata.ac);
	//printf("%lli",cdata.ac);/*
	printf("Enter Name  (First middle last):- ");
	scanf("%s%s%s",&cdata.name.name1,&cdata.name.name2,&cdata.name.name3);
	//printf("%s%s%s",cdata.name.name1,cdata.name.name2,cdata.name.name3);
	printf("Enter Date of Birth (dd mm yy):- ");
	scanf("%d%d%d",&cdata.dob.day,&cdata.dob.month,&cdata.dob.year);
	printf("Enter Age:- ");
	scanf("%d",&cdata.age);
	printf("Enter Mobile Number:- ");
	scanf("%lli",&cdata.m);
	printf("Enter Address:- ");
	scanf("%s",&cdata.address);
	l:
	printf("\nEnter amount (It Should be more then 1500/-):-  ");
	scanf("%lli",&cdata.rup);
	if(cdata.rup<1500)
	{
		printf("Amount should be 1500/- ");
		goto l;
	}
	l1:
	printf("Select Accournt type:- \n\t\t\t Current ac\n\t\t\t Saving ac\n\t\t\t fix\n Enter Your Choice:- ");
	scanf("%s",&cdata.ac1);
	
	fprintf(ptr,"%s  %d-%d-%d %lli (%s %s %s) %d-%d-%d %d %lli %s lli\n",cdata.aedhar,cdata.deposit.day,cdata.deposit.month,cdata.deposit.year,ddata.ac,cdata.name.name1,cdata.name.name2,cdata.name.name3,cdata.dob.day,cdata.dob.month,cdata.dob.year,cdata.age,cdata.m,cdata.address,cdata.rup);

    fclose(ptr);
    printf("Creating account");
    for(j=0; j<5; j++)
    {
    	printf(". ");
    	Sleep(1000);
	}
    printf("\n! %c%c !Account Created Successfully...... ! %c%c !",3,3,3,3);
    Sleep(3000);
    system("cls");
}
