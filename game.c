#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Apple.c"
#include"KBC.c"
#include"GuessGame.c"
#include"login.c"
#include"toss.c"

int main(){
	login();
	re:
	system("cls");
    printf("\033[0;35m");
    printf("*************");
	printf("\033[0;35m");
	printf("Welcome To The Gaming Zone");
	printf("\033[0;35m");
	printf("*************\n\n\n");
    printf("\033[0;32m");  
//	printf("\033[0;35m");
//	printf("Welcome To The Gaming Zone\n\n\n");
//	printf("\033[0;32m");
	printf("Enter 1 for Apple Game\n\n");
	printf("Enter 2 for KBC\n\n");
	printf("Enter 3 for Guess Game\n\n");
	printf("Enter 4 to Quit\n\n\n");
	printf("\033[0;37m");
	int n;
	printf("Enter Your Choice: ");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			printf("\033[0;32m");
			printf("Loading Apple Game");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
			
			printf("\033[0;37m");
		    
		    system("cls");
		    
		    apple();
		    goto re;
		    break;
		    
		case 2:
			printf("\033[0;32m");
			printf("Loading KBC");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
			
			printf("\033[0;37m");
		    
		    system("cls");
		    
		    kbc();
		    
		    goto re;
		    break;
		    
		case 3:
			printf("\033[0;32m");
			printf("Loading Guess Game");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
			
			printf("\033[0;37m");
		    
		    system("cls");
		    
		    guess();
		    
		    goto re;
		    break;
		    
		    
		case 4:
			printf("\033[0;31m");
			printf("Quiting");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
			
			printf("\033[0;37m");
		    
			exit(0);
			break;
		    
		default:
			printf("Invalid Input\n\n");
			printf("Try Again");
			goto re;
			break;
	}
}
