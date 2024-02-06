
int guess(){

    int rnum,choice,pen=0;
    char c;
	
	X:
		
    srand(time(NULL));
    rnum=rand()%100+1;
	
    printf("\033[0;35m");
    printf("*************");
	printf("\033[0;35m");
	printf("Guess The Number");
	printf("\033[0;35m");
	printf("*************\n\n\n");
    printf("\033[0;32m");  
    printf("\nEnter the level of difficulty:\n\n1.Easy\n\n2.Moderate\n\n3.Hard\n\n");
    
    printf("\033[0;37m");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);

	switch(choice){
		case 1:
		    system("cls");
			game(10,rnum);
			break;
		case 2:
		    system("cls");
			game(7,rnum);
			break;
		case 3:
		    system("cls");
			game(5,rnum);
			break;
		default:	
		    printf("\033[0;31m");
		    pen++;
			printf("Invalid Input\n\n");
			if(pen>=3){
				printf("Chance Terminated\n\nYou Loose");
				printf("\033[0:37m");
				break;
			}
			printf("Try Again\n\n");
			
		    printf("\033[0;37m");
		    printf("Enter Any key to Continue: ");
		    getch();
		    system("cls");
		    goto X;
				
	}
	printf("Enter 1 to Replay & any other key to Exit: ");
	c=getch();
	
	if(c=='1'){
		system("cls");
		goto X;
	}
}

int game(int ch,int rnum){
	int i=1,gnum;
		
		printf("\033[0;33m");
        printf("\nYou got %d chances to guess the number!",ch);
        printf("\033[0;37m");
        while(i<=ch){
        	y:
        		fflush(stdin);
			printf("\033[0;32m");
           	printf("\n\nEnter the number from 1 to 100, you are assuming it to be:");
           	printf("\033[0;37m");
           	scanf("%d",&gnum);

           	if(gnum<1 || gnum>100){
				printf("\033[0;31m");
	            printf("\nWrong input! Please enter number in the range of 1 to 100.");
				printf("\033[0;37m");
				goto y;
        	}
           	if(gnum==rnum){
           		printf("\033[0;33m");
            	printf("\n\nCongo, you got it right!\n\n\n");
				printf("\033[0;37m");
				break;
           	} 
			if(gnum>rnum){
           		printf("\033[0;34m");
            	printf("\n\nOops! It's smaller number than you guessed.");
            	printf("\033[0;37m");
            }
           	if(gnum<rnum){
           		printf("\033[0;34m");
            	printf("\n\nOops! It's greater number than you guessed.");
            	printf("\033[0;37m");
            }
           	printf("\033[0;32m");
           	printf("\n%d chances are left...",ch-i);
           	printf("\033[0;37m");
           
           	i++;
           	if(i>ch){
	           	printf("\033[0;31m");
	            printf("\n\nSad to see, You Lost...Better luck next time.");
	            printf("\033[0;33m");
	            printf("\n\n\nThe number was %d\n\n",rnum);
	            printf("\033[0;37m");
            }
        }
    return 0;
}
