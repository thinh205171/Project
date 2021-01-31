#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>
#include"student.h"
#define DATA "./SV2021.dat"
void listofstudents();
void addnameandscore();
void append(student add);
void searchstudents();
void searchedstudents(char *a);
int main()
{
	int choice;
	printf("1.Show the list of students\n",choice);
	printf("2.Add students\n",choice);
	printf("3.Find students by name\n",choice);
	printf("4.Exit\n"),choice;
	scanf("%d",&choice);
	if(choice==1) listofstudents();
	else if(choice==2) addnameandscore();
	else if(choice==3) searchstudents();
	else if(choice==4) return 0;
	else
	printf("Invalid number\n");
}
void listofstudents()
{
	FILE *file = fopen(DATA,"r");
	student tmp;
	while(fread(&tmp,sizeof(student),1,file))
	{
		printf("%s | %f  \n",tmp.name,tmp.score);
	}
	fclose(file);
}
void addnameandscore()
{
	char name[100];
	student newstudent;
	printf("Name:");
	fflush(stdin);
	fgets(name,100,stdin);
	strtok(name,"\n");
	strcpy(newstudent.name,name);
	printf("Score:");
	scanf("%f",&newstudent.score);
	append(name);
}
void append(student add)
{
	FILE *file = fopen(DATA,"ab+");
	int data = fwrite(&add,sizeof(student),1,file);
	assert(data!=0);
	fclose(file);
}
void searchstudents()
{
	char name[100];
	printf("Name:");
	fflush(stdin);
	fgets(name,100,stdin);
	strtok(name,"\n");
	searchedstudents(name);
}
void searchedstudents(char *a)
{
	FILE *file = fopen(DATA,"r");
	student searchedstudents;
	while(fread(&searchedstudents,sizeof(student),1,file))
	{
		if(!struct(searchedstudent.name,a)) continue;
		printf("%s | %f  \n",searchedstudents.name,searchedstudents.score);
	}
	fclose(file);
}

