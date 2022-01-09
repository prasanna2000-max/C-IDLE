
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dir.h>
#include<dos.h>
#include<iostream>
#include<windows.h>
#define MAX 256
using namespace std;
struct user
{
char password[15];
char name[15];
};
void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
     SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}
int main()
{
	
int jion;
    FILE *kio;
    char h[20];
   struct user no;
   strcpy(h,"file");
   system("cls");
   printf("\n 1.existing user \n 2.new user \n");
   int ji;
   
   jion=0;
   scanf("%d",&ji);
   char n[20];
   system("cls");
   switch(ji)
       {
	 case 1:
	     reenter:
	      {

		 printf("\n enter the user name");
		 char id[20];
		 scanf("%s",id);
		 FILE *fp;
		 fp=fopen("filename.cpp","r");
		 char check[20];
		 strcpy(n,id);
		 strcat(h,id);
		 while(!feof(fp))
		{
		     fscanf(fp,"%s",&check);
		     if(strcmp(n,check)==0)
		      {
			FILE *op;
			op=fopen(n,"r");
			char passwd[15];

			read:
			printf("\n enter the password");
			scanf("%s",passwd);
			struct user temp;
			fread(&temp,sizeof(temp),1,op);
			strcpy(n,temp.password);
			if(strcmp(n,passwd)==0)
			 {
			     printf("\n successss");
			     jion=1;
			     fclose(op);
			     goto polo;
			  }
		       else
			 {
			   printf("\n reenter the password");
			   goto read;
			 }

		       }
		       }

	      if(jion==0)
		{
		    system("cls");
		    printf("\n enter a valid user id");
		    goto reenter;
		}
	 fclose(fp);
      }

      break;
      case 2:
	  {

		char newpassword[15];
		printf("\n enter the name");
		scanf("%s",no.name);
		strcat(h,no.name);
		kio=fopen(h,"w");
		fclose(kio);
		strcpy(h,"file");
		printf("\n enter the password");
		scanf("%s",no.password);
		FILE *k;
		k=fopen("filename.cpp","a");
		fprintf(k,"\n %s",no.name);
		fclose(k);
		FILE *jio;
		jio=fopen(no.name,"w");
		fwrite(&no,sizeof(no),1,jio);
		fclose(jio);
		goto reenter;
       }

}
     polo:
     int o;
    system("cls");
     printf(" 1.OPEN A EXISTING FILE \n 2.OPEN A NEW FILE \n 3.TO SEE ALL THE FILES YOU HAVE ENTERED \n 4.EXIT \n");
     scanf("%d",&o);
     switch(o)
  {
   case 1:
       FILE *l;
       char pt[20];
       char n[20];
       printf("\n enter the file name");
       scanf("%s",&pt);
        system("cls");
        
		int choc;
		printf("\n 1.view \n 2.run \n 3.search and edit");
        scanf("%d",&choc);
        switch(choc)
       {
       	case 1:
	   l=fopen(pt,"r");
   while(fscanf(l,"%s",&n)==1)
 {
 	
    if((strcmp(n,"int")==0) || (strcmp(n,"char")==0) || (strcmp(n,"float")==0) || (strcmp(n,"double")==0))
    {
    SetColor(4);
    printf("%s",n);
    SetColor(15);
    fscanf(l,"%s",n);
    printf(" ");
    printf("%s",n);
    printf("\n");
	}
    else
    if((strcmp(n,"#include<stdio.h>")==0) || (strcmp(n,"#include<conio.h>")==0) || (strcmp(n,"#include<math.h>")==0))
    {
    SetColor(4);
    printf("%s",n);
    
    printf("\n");
    }
    else
    if(strcmp(n,"main()")==0)
    {
	SetColor(2);
    printf("%s",&n);
    printf("\n");
    SetColor(15);
    }
  else
       if(n[0]=='i')
       {
       if(n[1]=='f')
	 {
       int pop;
       printf("\n");
       SetColor(14);
       printf("%c",n[0]);
       printf("%c",n[1]);
       SetColor(15);
       pop=strlen(n);
       int b;
       for(b=2;b<pop;b++)
       printf("%c",n[b]);
       }
       }
       else
       if(strcmp(n,"else")==0)
       {
	printf("\n");
	SetColor(14);
	printf("%s",n);
	SetColor(15);
       }
else
if(n[0]=='s')
{
       if(n[1]=='w')
       if(n[2]=='i')
if(n[3]=='t')
if(n[4]=='c')
if(n[5]=='h')
{
       int pop;
       printf("\n");
       SetColor(14);
       printf("%c",n[0]);
       printf("%c",n[1]);
printf("%c",n[2]);
printf("%c",n[3]);
printf("%c",n[4]);
printf("%c",n[5]);
SetColor(15);
       pop=strlen(n);
       int b;
       for(b=6;b<pop;b++)
       printf("%c",n[b]);
       }
       }
       else
       if(strcmp(n,"break")==0)
       {
	printf("\n");
	SetColor(14);
		printf("%s",n);
	SetColor(15);       }

else
if(n[0]=='f')
{
if(n[1]=='0')
if(n[2]=='r');

{
       int pop;
       printf("\n");
       SetColor(14);
       printf("%c",n[0]);
       printf("%c",n[1]);
	printf("%c",n[2]);
       SetColor(15);
       pop=strlen(n);
       int b;
       for(b=3;b<pop;b++)
       printf("%c",n[b]);
       }
       }
else
if(n[0]=='w')
{
if(n[1]=='h')
if(n[2]=='i')
if(n[3]=='l')
if(n[4]=='e')

       {
       int pop;
       printf("\n");
       SetColor(14);
       printf("%c",n[0]);
       printf("%c",n[1]);
       printf("%c",n[2]);
	printf("%c",n[3]);
	printf("%c",n[4]);
	SetColor(15);
       pop=strlen(n);
       int b;
       for(b=5;b<pop;b++)
       printf("%c",n[b]);
       }
       }
else
 if(n[0]=='p')
{
 if(n[1]=='r')
 if(n[2]=='i')
 if(n[3]=='n')
 if(n[4]=='t')
 if(n[5]=='f')


{
       int pop;
       printf("\n");
       SetColor(1);
	    printf("%c",n[0]);
       printf("%c",n[1]);
       printf("%c",n[2]);
	printf("%c",n[3]);
	printf("%c",n[4]);
	printf("%c",n[5]);
       SetColor(15);
	          pop=strlen(n);
       int b;
       for(b=6;b<pop;b++)
       printf("%c",n[b]);
       }
       }
else
if(n[0]=='s')
 {      if(n[1]=='c')
	 if(n[2]=='a')
	 if(n[3]=='n')
	 if(n[4]=='f')

       {
       int pop;
       printf("\n");
       SetColor(1);
	printf("%c",n[0]);
  printf("%c",n[1]);
	printf("%c",n[2]);
	printf("%c",n[3]);
    printf("%c",n[4]);
       SetColor(15);
	          pop=strlen(n);
       int b;
       for(b=5;b<pop;b++)
       printf("%c",n[b]);
       }
       }
else
if(strcmp(n,"do")==0)
{
SetColor(14);
printf("%s",n);
SetColor(15);
printf("\n");
}
else
{
printf("%s",n);
printf("\n");

    }
 }fclose(l);
 break;
 
 case 2:
 char bib[20];
 strcpy(bib,pt);
 strcat(bib,".exe");	
 system(bib); 
 break;

case 3:
kili:
	int kill;

	char c;
	char ch1[20];
	strcpy(ch1,pt);
	FILE *ft;
	FILE *ft1;
	ft1=fopen("temp.txt","w");
	ft=fopen(ch1,"r");
	char replace[20];
	char neww[20];
	printf("\n enter the word to be replaced");
	scanf("%s",&replace);
	printf("\n enter the new word");
	scanf("%s",&neww);
	
	if(ft==NULL)
	{
		printf("\n cannot open");
		
	}
	char find[20];
	while(fscanf(ft,"%s",&find)==1)
		{
			
		if(strcmp(find,replace)==0)
		{
		     fprintf(ft1,"\n %s",neww);
		}
		else
		fprintf(ft1,"\n %s",find);
	}	
	fclose(ft);
	fclose(ft1);
	ft1=fopen("temp.txt","r");
	ft=fopen(ch1,"w");
	
while(fscanf(ft1,"%s",&find)==1)
	fprintf(ft,"\n %s",find);	
	
	fclose(ft);
	fclose(ft1);
	
   printf("\n do u want to continue  searching press 1");
   scanf("%d",&kill);
   if(kill==1)
   goto kili;
   break;
}
   break;
case 2:
  {
  int i,j;
  int l;
  char v[20];
  char ch[20],c[20];
  FILE *io;
  FILE *oi;
  FILE *ko;
  system("cls");
  io=fopen("ma.cpp","w");
  fclose(io);
  strcpy(ch,"re");
  printf("-----exit @----");
  printf("\n");
  while(strcmp(ch,"@")!=0)
 {
  scanf("%s",&ch);
    if(strcmp(ch,"@")==0)
       break;

    if(strcmp(ch,"@")!=0)
     {
      io=fopen("ma.cpp","a+");
      fprintf(io,"\n");
      fprintf(io,"%s",ch);
      fclose(io);
     }
     oi=fopen("ma.cpp","r");
     system("cls");
    while(!feof(oi))
    {
      fscanf(oi,"%s",c);
	if((strcmp(c,"int")==0) || (strcmp(c,"char")==0) || (strcmp(c,"float")==0) || (strcmp(c,"double")==0) )
	{  printf("\n");
	  SetColor(4);
	  printf("%s",c);
	  SetColor(15);
	  printf(" ");
	  fscanf(oi,"%s",c);
	  printf(" %s",c);
	 }
       else
       if(strcmp(c,"main()")==0)
       {printf("\n");
       SetColor(4);
	          printf("%s",c);
       SetColor(15);
       }
       else
       if((strcmp(c,"#include<stdio.h>")==0) || (strcmp(c,"#include<conio.h>")==0) || (strcmp(c,"#include<string.h>")==0) || (strcmp(c,"#include<math.h>")==0)    )
       {
	   printf("\n");
       SetColor(4);
	   printf("%s",c);
       SetColor(15);
       }
       else
	if(c[0]=='i')
       {
       if(c[1]=='f')
       if(c[2]=='(')
       {
       int pop;
       printf("\n");
       SetColor(14);
       printf("%c",c[0]);
       printf("%c",c[1]);
       SetColor(15);
	        pop=strlen(c);
       int b;
       for(b=2;b<pop;b++)
       printf("%c",c[b]);
       }
       else
       goto remo;
       else
       goto remo;
       }
       else
       if(strcmp(c,"else")==0)
       {
	printf("\n");
	SetColor(14);
	printf("%s",c);
	SetColor(15);       }
else
if(c[0]=='s')
{      if(c[1]=='c')
       goto rit;
       else
       if(c[1]=='w')
if(c[2]=='i')
if(c[3]=='t')
if(c[4]=='c')
if(c[5]=='h')
if(c[6]=='(')
{
       int pop;
       printf("\n");
       SetColor(14);
       printf("%c",c[0]);
	   printf("%c",c[1]);
printf("%c",c[2]);
printf("%c",c[3]);
printf("%c",c[4]);
printf("%c",c[5]);
SetColor(15);
       pop=strlen(c);
       int b;
       for(b=6;b<pop;b++)
       printf("%c",c[b]);
       }

       else
	goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       }

else
if(c[0]=='f')
    {
    if(c[1]=='o')
    if(c[2]=='r')
    if(c[3]=='(')
{
       int pop;
       printf("\n");
       SetColor(14);
       printf("%c",c[0]);
       printf("%c",c[1]);
	printf("%c",c[2]);
       SetColor(15);
       pop=strlen(c);
       int b;
       for(b=3;b<pop;b++)
       printf("%c",c[b]);
       }
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       }
else
if(c[0]=='w')
 {      if(c[1]=='h')
	if(c[2]=='i')
	if(c[3]=='l')
	if(c[4]=='e')
	if(c[5]=='(')
       {
       int pop;
       printf("\n");
       SetColor(14);
       printf("%c",c[0]);
       printf("%c",c[1]);
       printf("%c",c[2]);
	printf("%c",c[3]);
	printf("%c",c[4]);
	SetColor(15);
       pop=strlen(c);
       int b;
       for(b=5;b<pop;b++)
       printf("%c",c[b]);
       }
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       }
else
if(c[0]=='p')
{
  if(c[1]=='r')
 if(c[2]=='i')
 if(c[3]=='n')
 if(c[4]=='t')
 if(c[5]=='f')
 if(c[6]=='(')
{
int pop;
       printf("\n");
       SetColor(1);
       printf("%c",c[0]);
       printf("%c",c[1]);
       printf("%c",c[2]);
	printf("%c",c[3]);
	printf("%c",c[4]);
	printf("%c",c[5]);
       SetColor(15);
       pop=strlen(c);
       int b;
       for(b=6;b<pop;b++)
       printf("%c",c[b]);
       }
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;

}

else
if(c[0]=='s')
{rit:
  if(c[1]=='c')
 if(c[2]=='a')
 if(c[3]=='n')
 if(c[4]=='f')
 if(c[5]=='(')
{
int pop;
       printf("\n");
       SetColor(1);
       printf("%c",c[0]);
       printf("%c",c[1]);
       printf("%c",c[2]);
	printf("%c",c[3]);
	printf("%c",c[4]);
	    SetColor(15);
       pop=strlen(c);
       int b;
       for(b=5;b<pop;b++)
       printf("%c",c[b]);
       }
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;
       else
       goto remo;

       }


       else
       if(strcmp(c,"do")==0)
       {  printf("\n");
       SetColor(14);
       printf("%s",c);
       SetColor(15);
       printf("\n");
       }

       else
{remo:
printf("\n %s",c);
}
      }
       fclose(oi);
       printf("\n");
   }
    strcpy(ch,"\0");
    printf( "\n stopped");
    FILE *lio;
    lio=fopen(h,"a");
    int n1;
	printf("\n do u want to compile the program  press 1");
    scanf("%d",&n1);
    if(n1==1)
    system("gcc ma.cpp");
    
    
    
    
    
    printf("\n do u want to save the program then press 1");
    scanf("%d",&l);
   char ram[20];
   if(l==1)
    {
     printf("\n enter the filename in which u want to save");
     scanf("%s",&v);
     strcpy(ram,v);
     
     strcat(v,".cpp");
     fprintf(lio,"%s \n",v);
     ko=fopen(v,"w");
     oi=fopen("ma.cpp","r");
       while(!feof(oi))
     {
	fscanf(oi,"%s",c);
	fprintf(ko,"%s \n",c);
	
     }
    fclose(oi);
    printf("saved");
    fprintf(lio,"\0");
    fclose(lio);
    fclose(ko);
    strcat(ram,".exe");
    char sam[50];
    strcpy(sam,"g++ -o ");
    strcat(sam,ram);
    strcat(sam," ");
    strcat(sam,v);
    printf("\n do u want to run press 1");
    scanf("%d",&n1);
    if(n1==1)
    {
    system(sam);	
	system(ram);
}
   } }break;
   case 3:
    {

    FILE *pm;
    char g[20];
    pm=fopen(h,"r+");

    while(fscanf(pm,"%s",g)==1)
    {
    printf("%s",g);
    printf("\n");
    }
    fclose(pm);
    break;
    }
   case 4:
   break;

		}
    int km;
    printf("\n do u want to continue press 1");
    scanf("%d",&km);
    if(km==1)
    goto polo;

	  getch();


	   }

