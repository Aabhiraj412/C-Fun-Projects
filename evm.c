#include<stdio.h>

int main(){
	int in,i,count=0,team[4] = {0},nota=0,voter=0,inval=0;
	char teams[4][10] = {"BJP","CONGRESS","SAPA","AAP"};
	next:
	printf("\033[0;35m");
	printf("******************* EVM *******************"); 
	printf("\033[0;33m");
	
	printf("\n\n\nWelcome to Voting Booth\n\n\nEveryone Should Vote For The Better Future.\n\n\n");

	printf("\033[0;37m");
	printf("Enter any key to continue: ");
	getch();
	system("cls");
	
	printf("\033[0;35m");
	printf("******************* EVM *******************"); 
	printf("\033[0;33m");
	printf("\n\n1 -> %s\n\n2 -> %s\n\n3 -> %s\n\n4 -> %s\n\n5 -> NOTA\n\n\n",teams[0],teams[1],teams[2],teams[3]);
	re:
	printf("\033[0;37m");
	printf("Enter Your Vote: ");
	scanf("%d",&in);
	
	switch(in){
		case 1:
			voter++;
			team[0]++;
			printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
			printf("\033[0;33m");
			printf("\n\nThanks For Your Vote");
			break;
			
		case 2:
			voter++;
			team[1]++;
			printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
			printf("\033[0;33m");
			printf("\n\nThanks For Your Vote");
			break;
			
		case 3:
			voter++;
			team[2]++;
			printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
			printf("\033[0;33m");
			printf("\n\nThanks For Your Vote");
			break;
			
		case 4:
			voter++;
			team[3]++;
			printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
			printf("\033[0;33m");
			printf("\n\nThanks For Your Vote");
			break;
		
		case 5:
			voter++;
			nota++;
			printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
			printf("\033[0;33m");
			printf("\n\nThanks For Your Vote");
			break;
		
		
		case 99:
			system("cls");
			printf("\033[0;35m");
			printf("******************* Result *******************");  	
			printf("\033[0;33m");
			printf("\n\n\n%s\t\t-> %d\n\n%s\t-> %d\n\n%s\t\t-> %d\n\n%s\t\t-> %d\n\nNOTA\t\t-> %d\n\n",teams[0],team[0],teams[1],team[1],teams[2],team[2],teams[3],team[3],nota);
			
			in=nota;
			
			for(i=0;i<4;i++){
				if(in>team[i]){
					printf("\033[0;31m");
					printf("\n\nElection Cancled Because of NOTA\n\n");
					printf("\033[0;37m");
					getch();
					return 0;
				}
			}
			
			in =team[0];
			for(i=1;i<4;i++){
					if(team[i]>=in){
						in = team[i];
					}
			}
			
			if(in==0){
				printf("\033[0;31m");
				printf("\n\nNo Votes Yet");
				printf("\n\nTry Again");
					Sleep(600);
					printf(".");
					Sleep(600);
					printf(".");
					Sleep(600);
					printf(".");
					Sleep(600);

				printf("\033[0;31m");
				system("cls");
				goto next; 
			}
			
			i=0;
			if(in == team[0]){
				i++;
				printf("%s",teams[0]);
			}
			if(in == team[1]){
				i++;
				i>1?printf(", "):printf("");
				printf("%s ",teams[1]);
			}
			if(in == team[2]){
				i++;
				i>1?printf(", "):printf("");
				printf("%s",teams[2]);
			}
			if(in == team[3]){
				i++;
				i>1?printf(", "):printf("");
				printf("%s",teams[3]);
			}
			i>1?printf(" had a Draw"):printf(" is the Winner");
			
			printf("\n\n\nPress 1 to View Election Summery -> ");
			
			printf("\033[0;37m");
			scanf("%d",&in);
			if(in!=1)
				return 0;
			printf("\r");
			printf("\033[0;33m");
			printf("\nTotal No. Of Voters -> ");
			printf("\033[0;32m");
			printf("%d\n",voter);	
			printf("\033[0;33m");
			printf("\nTotal no. Of Invalid Votes -> ");
			printf("\033[0;31m");
			printf("%d\n",inval);
			printf("\033[0;37m");
			printf("Enter Any Key to Exit: ");
			getch();
			return 0;
			
			
		default:
			count++;
			printf("\033[0;31m");
			printf("Invalid Input\n\n");
			if(count>=3){
				inval++;
				goto skip;
			}
			printf("Try Again\n\n");
			
			goto re;
			break;
	}
	fflush(stdin);
	
	printf("\n\n\nSaving Your Vote");
	Sleep(600);
	printf(".");
	Sleep(600);
	printf(".");
	Sleep(600);
	printf(".");
	Sleep(600);
	
	system("cls");
	printf("\033[0;32m");
	
	skip:
		count = 0;
	for(i=5;i>=0;i--){
		if(i>9){
			printf("Cool Down Time 0:%d",i);
		}
		else{
			printf("Cool Down Time 0:0%d",i);			
		}
        					
		sleep(1);
		printf("\r");
	}
	printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
	printf("\033[0;37m");
	system("cls");
	goto next;
}
