#include<stdio.h>
#include<string.h>
int newdata(){
	
	char name[20], roll[5], coures[10], o_t[5], o_d[15], v_no[15], v_type[10], i_t[10], i_d[10];
	int year;
	
	
	FILE *f=NULL;
	
	f = fopen("Student.csv","r");

	if(f==NULL){
		printf("033[0;31m");	
		printf("ERROR!! File Can't be Opened\n\n");
		printf("Redirecting");
		sleep(1);
		printf(".");
		sleep(1);
		printf(".");
		sleep(1);
		printf(".");
		printf("\033[0;37m");
		system("cls");
		return -1;
	}
	
	
	printf("\033[0;35m");
	printf("Enter Students Details:-\n\n");
	
	printf("\033[0;33m");
	printf("Name: \t\t\t");
	printf("\033[0;37m");
	gets(name);
	
	printf("\033[0;33m");
	printf("Roll No.: \t\t");
	printf("\033[0;37m");
	gets(roll);
	
	char temp[3],ch;
	ch = fgetc(f);
	int n = strlen(roll);
	fgets(temp,n+1,f);
	char temp2[3];
	while(strcmp(temp2,temp)!=0){
		
		if(strcmp(temp,roll)!=0){
			strcpy(temp2,temp);
			fgets(temp,n+1,f);
			continue;
		}
		else{
			break;
		}	
	}
	if(strcmp(temp,roll)==0){
		printf("\033[0;31m");
		printf("Roll No. Already Exist\n\n");
		printf("Data Can't be Added");
		printf("\033[0;37m");
		printf("\n\nEnter Any Key to Continue: ");
		getch();
		system("cls");
		fclose(f);
		return -1;
	}
	fclose(f);
	f = NULL;
	
	printf("\033[0;33m");
	printf("Year: \t\t\t");
	printf("\033[0;37m");
	scanf("%d",&year);
	fflush(stdin);
	
	printf("\033[0;33m");
	printf("Course: \t\t");
	printf("\033[0;37m");
	gets(coures);
	
	printf("\033[0;33m");
	printf("Out Date: \t\t");
	printf("\033[0;37m");
	gets(o_d);
	
	printf("\033[0;33m");
	printf("Out Time: \t\t");
	printf("\033[0;37m");
	gets(o_t);
	
	printf("\033[0;33m");
	printf("Vechile No.: \t\t");
	printf("\033[0;37m");
	gets(v_no);
	
	printf("\033[0;33m");
	printf("Vechile Type: \t\t");
	printf("\033[0;37m");
	gets(v_type);
	
	
	if(strcmp(v_no,"NA")==0){
		strcpy(v_no,"NOT APPLICABLE");
	}
	
	if(strcmp(v_type,"NA")==0){
		strcpy(v_type,"NOT APPLICABLE");
	}
	
		
//	}
	f = fopen("Student.csv","a");
	if(f==NULL){
		printf("033[0;31m");	
		printf("ERROR!! File Can't be Opened\n\n");
		printf("Redirecting");
		sleep(1);
		printf(".");
		sleep(1);
		printf(".");
		sleep(1);
		printf(".");
		printf("\033[0;37m");
		return -1;
	}
	
	fprintf(f,"%s,%s,%d,%s,%s,%s,%s,%s,%s,%s\n",roll,name,year,coures,o_d,o_t,v_no,v_type,"","");
	
	printf("\033[0;32m");
	printf("\n\nSaving");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	printf("\rEntey Added Successfully");
	sleep(3);
	printf("\033[0;37m");
	system("cls");
	fclose(f);
	
}

int appenddata(){
	
	printf("Enter Students Roll no.: ");
	char stud[3];
	gets(stud);
	
	int n = strlen(stud);
	
	FILE *f;
	
	f = fopen("Student.csv","r+");
//	rewind(f);
	printf("\n\n");
	printf("\033[0;33m");
	char temp[3],ch;
	ch = fgetc(f);
	while(ch!='\n'){
		if(ch == ','){
			printf("\t");
			ch = fgetc(f);
			continue;
		}
		printf("%c",ch);
		ch = fgetc(f);
	}
	printf("\n\n");
	printf("\033[0;37m");
	
	fgets(temp,n+1,f);
	char temp2[3];
	while(strcmp(temp2,temp)!=0){
		
		if(strcmp(temp,stud)!=0){
			strcpy(temp2,temp);
			fgets(temp,n+1,f);
			continue;
		}
		else{
			break;
		}	
	}
	if(strcmp(temp,stud)!=0){
		printf("\033[0;31m");
		printf("\n\nRecord Not Found\n\n");
		printf("\033[0;37m");
		printf("\n\nEnter Any Key to Continue: ");
		getch();
		system("cls");
		fclose(f);
		return -1;	
	}
	
	printf("%s",temp);
	ch = fgetc(f);
	int count = 0;
	while(count<=7){
		if(ch == ','){
			printf("\t");
			ch = fgetc(f);
			count++;
			continue;
		}
		printf("%c",ch);
		ch = fgetc(f);
	}
	char i_d[10],i_t[10];
	printf("\n\n");
	printf("Enter In Date: ");
	gets(i_d);
	printf("Enter In Time: ");
	gets(i_t);
	printf("%s\n%s\n",i_d,i_t);
	fprintf(f,"%s,%s",i_d,i_t);
	
	printf("Entery Closed Successfully");
	printf("\n\nEnter Any Key to Continue: ");
	getch();
	system("cls");
	fclose(f);	
}


int searchdata(){
	
	printf("Enter Students Roll no.: ");
	char stud[3];
	gets(stud);
	
	int n = strlen(stud);
	  
	FILE *f;
	
	f = fopen("Student.csv","r");
	printf("\n\n");
	printf("\033[0;33m");
	char temp[3],ch;
	ch = fgetc(f);
	while(ch!='\n'){
		if(ch == ','){
			printf("\t");
			ch = fgetc(f);
			continue;
		}
		printf("%c",ch);
		ch = fgetc(f);
	}
	printf("\n\n");
	printf("\033[0;37m");
	
	fgets(temp,n+1,f);
	char temp2[3];
	while(strcmp(temp2,temp)!=0){
		
		if(strcmp(temp,stud)!=0){
			strcpy(temp2,temp);
			fgets(temp,n+1,f);
			continue;
		}
		else{
			break;
		}	
	}
	if(strcmp(temp,stud)!=0){
		printf("\033[0;31m");
		printf("\n\nRecord Not Found\n\n");
		printf("\033[0;37m");
		printf("\n\nEnter Any Key to Continue: ");
		getch();
		system("cls");
		fclose(f);
		return -1;	
	}
	
	printf("%s",temp);
	ch = fgetc(f);
	while(ch!='\n'){
		if(ch == ','){
			printf("\t");
			ch = fgetc(f);
			continue;
		}
		printf("%c",ch);
		ch = fgetc(f);
	}
	printf("\n\nEnter Any Key to Continue: ");
	getch();
	system("cls");
	fclose(f);
}


int changedata(){
		
	char name[20], roll[5], coures[10], o_t[5], o_d[15], v_no[15], v_type[10], i_t[10], i_d[10];
	int year;

	printf("Enter Students Roll no.: ");
	char stud[3];
	gets(stud);
	
	int n = strlen(stud);
	  
	FILE *f;
	
	f = fopen("Student.csv","r+");
	printf("\n\n");
	printf("\033[0;33m");
	char temp[3],ch;
	ch = fgetc(f);

	printf("\n\n");
	printf("\033[0;37m");
	
	fgets(temp,n+1,f);
	char temp2[3];
	while(strcmp(temp2,temp)!=0){
		
		if(strcmp(temp,stud)!=0){
			strcpy(temp2,temp);
			fgets(temp,n+1,f);
			continue;
		}
		else{
			break;
		}	
	}
	if(strcmp(temp,stud)!=0){
		printf("\033[0;31m");
		printf("\n\nRecord Not Found\n\n");
		printf("\033[0;37m");
		printf("\n\nEnter Any Key to Continue: ");
		getch();
		system("cls");
		fclose(f);
		return -1;	
	}
	
	printf("\033[0;35m");
	printf("Enter Students Details:-\n\n");
	
	printf("\033[0;33m");
	printf("Name: \t\t\t");
	printf("\033[0;37m");
	gets(name);
	
	printf("\033[0;33m");
	printf("Year: \t\t\t");
	printf("\033[0;37m");
	scanf("%d",&year);
	fflush(stdin);
	
	printf("\033[0;33m");
	printf("Course: \t\t");
	printf("\033[0;37m");
	gets(coures);
	
	printf("\033[0;33m");
	printf("Out Date: \t\t");
	printf("\033[0;37m");
	gets(o_d);
	
	printf("\033[0;33m");
	printf("Out Time: \t\t");
	printf("\033[0;37m");
	gets(o_t);
	
	printf("\033[0;33m");
	printf("Vechile No.: \t\t");
	printf("\033[0;37m");
	gets(v_no);
	
	printf("\033[0;33m");
	printf("Vechile Type: \t\t");
	printf("\033[0;37m");
	gets(v_type);

	if(strcmp(v_no,"NA")==0){
		strcpy(v_no,"NOT APPLICABLE");
	}
	
	if(strcmp(v_type,"NA")==0){
		strcpy(v_type,"NOT APPLICABLE");
	}
	
		
	fprintf(f,"%s,%d,%s,%s,%s,%s,%s,%s,%s\n",name,year,coures,o_d,o_t,v_no,v_type,"","");
	printf("\033[0;32m");
	printf("\n\nSaving");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	printf("\rEntey Added Successfully");
	sleep(3);
	printf("\033[0;37m");
	system("cls");
	fclose(f);

}

int viewdata(){
	FILE *f = NULL;
	
	f = fopen("Student.csv", "r");
	
	char ch;
	
	ch = fgetc(f);
	printf("\033[0;33m");
	while(ch!='\n'){
		if(ch == ','){
			printf("\t");
			ch = fgetc(f);
			continue;
		}
		printf("%c",ch);
		ch = fgetc(f);
	}
	printf("\033[0;37m");
	while(ch!=EOF){
		if(ch == ','){
			printf("\t");
			ch = fgetc(f);
			continue;
		}
		printf("%c",ch);
		ch = fgetc(f);
	}
	printf("\n\nEnter Any Key to Continue: ");
	getch();
	system("cls");
	fclose(f);
}
int main(){
	int opt;
	menu:
	printf("\033[0;35m");
	printf("***************************Student Tracking System***************************\n\n\n");
	printf("\033[0;33m");
	printf("1) Open New Entry\n2) Close An Entry\n3) Search Entry\n4) Make Changes in Entry\n5) View All Entries\n6) Quit\n\n");
	re:
	printf("\033[0;37m");
	printf("Enter Your Choice: ");
	scanf("%d",&opt);
	
	switch(opt){
		case 1:
			system("cls");
			fflush(stdin);	
			newdata();
			goto menu;
		case 2:
			system("cls");
			fflush(stdin);
			appenddata();
			goto menu;
		case 3:
			system("cls");
			fflush(stdin);
			searchdata();
			goto menu;
		case 4:
			system("cls");
			fflush(stdin);
			changedata();
			goto menu;
		case 5:
			system("cls");
			fflush(stdin);
			viewdata();
			goto menu;
		case 6:
			printf("\033[0;31m");
			printf("Quitting");
			sleep(1);
			printf(".");
			sleep(1);
			printf(".");
			sleep(1);
			printf(".");
			printf("\033[0;37m");
			return 0;
		default:
			printf("\033[0;31m");
			printf("Invalid Input\n\n");
			sleep(1);
			printf("Try Again\n");
			sleep(1);
			printf("\033[0;37m");
			goto re;
	}
	
//	printf("\n\nName: \t\t\t%s\n",name);
//	printf("Year: \t\t\t%d\n",year);
//	printf("Course: \t\t%s\n",coures);
//	printf("Vechile No.: \t\t%s\n",v_no);
//	printf("Vehicle Type: \t\t%s\n",v_type);
//	printf("Out Date: \t\t%s\n",o_d);
//	printf("Out Time: \t\t%s\n",o_t);
//	printf("In Date: \t\t%s\n",i_d);
//	printf("In Time: \t\t%s\n",i_t);
}
