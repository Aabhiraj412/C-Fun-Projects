int apple(){


    int a=21,i,j,k=0,choice,count=0;
	
	char c;
    
    printf("\033[0;35m");
    printf("*************");
	printf("\033[0;35m");
	printf("Apple Game");
	printf("\033[0;35m");
	printf("*************\n\n\n");
    printf("\033[0;32m");  
    
	
    printf("\033[0;32m");
    printf("Total Apples is %d\n", a);
    printf("You can pic apples between 1 to 4.\n");
    printf("Your chance will be terminated after 3 Penalties.\n\n\n");
    
    printf("\033[0;37m");
    
    printf("Enter any key to Continue: ");
    
    getch();
    
    re:
    	
	system("cls");
    printf("\033[0;35m");
    printf("*************");
	printf("\033[0;33m");
	printf("Apple Game");
	printf("\033[0;35m");
	printf("*************\n\n\n");
    printf("\033[0;32m");  
    printf("1 - Vs Computer\n2 - One V One\n\n");
    printf("\033[0;37m");
    
    pre:
    printf("Enter Your Choice: ");
    
    scanf("%d",&choice);

    switch(choice){
    	case 1:
    		system("cls");
    		goto game;
    	case 2:
    		system("cls");
    		goto human;
    		
    	default:
    		count++;
		    printf("\033[0;31m");
			printf("\n\nInvalid Input\n");
	
			if(count>3){
		    
			    printf("\033[0;31m");
				printf("\nToo many Attempts\nChance Terminated");	
			    printf("\033[0;37m");
			    goto exit;
			}
	        
			printf("Please Try Again\n\n\n");
		    printf("\033[0;37m");

			goto pre;

    		
	}
    game:
    a=21;
	k=0;
	int to;
	to = toss("User","Computer");
	if(to==1){
		goto won;
	}
    while (a>=1)
    {
    	printf("\033[0;32m");
        printf("Enter your No: ");
        printf("\033[0;37m");
        scanf("%d",&i);
        
        if(i>=a||i<1||i>4){
        	printf("\033[0;31m");
            printf("Voilation of Rules.\n");
            k++;
            if(k==3){
            	printf("Chance Terminated\n");
			    printf("\033[0;33m");
                printf("Winner is computer.");
            	printf("\033[0;37m");
				goto exit;
			}
			printf("Please pic between 1-4\n\n\n");
			printf("\033[0;37m");
            continue;
        }
        a=a-i;
        
        printf("\033[0;35m");
        printf("Remaining: ");
		printf("\033[0;37m");
		printf("%d\n\n\n",a);
		
		if(a==1){
        	printf("\033[0;33m");
            printf("Winner is User");
            printf("\033[0;37m");
            goto exit;
        }
        
        won:
        
        srand(time(NULL));
    	j=rand()%4+1;
    	if(a<4){
			j = rand()%a+1;
		}
	
        printf("\033[0;32m");
        printf("Computer Turn: ");
		printf("\033[0;37m");
		printf("%d\033[0;37m\n",j);

        a = a-j;
        
		printf("\033[0;35m");
		printf("Remaining: ");
		printf("\033[0;37m");
		printf("%d\n\n\n",a);
		
		if(a==1){
        	printf("\033[0;33m");
            printf("Winner is Computer");
            printf("\033[0;37m");
            goto exit;
        }
        

    }
    human:
    a=21;
	k=0;
	int ic = 0,jc=0;
	to = toss("Player 1","Player 2");
	if(to==1){
		goto pwon;
	}
    while (a>=1)
    {
    	printf("\033[0;32m");
        printf("Player 1 Enter your No: ");
        printf("\033[0;37m");
        scanf("%d",&i);
        
        if(i<1||i>4){
        	printf("\033[0;31m");
            printf("Voilation of Rules.\n");
            ic++;
            if(ic==3){
            	printf("Chance Terminated\n");
			    printf("\033[0;33m");
                printf("Winner is Player 2.");
            	printf("\033[0;37m");
				goto exit;
			}
			printf("Please pic between 1-4\n\n\n");
			printf("\033[0;37m");
            continue;
        }
        a=a-i;
        
        printf("\033[0;35m");
        printf("Remaining: ");
		printf("\033[0;37m");
		printf("%d\n\n\n",a);
		
		if(a==1){
        	printf("\033[0;33m");
            printf("Winner is Player 1");
            printf("\033[0;37m");
            goto exit;
        }
        
		pwon:
			
        printf("\033[0;32m");
        printf("Player 2 Enter your No: ");
		printf("\033[0;37m");
		scanf("%d",&j);
		
        if(j<1||j>4){
        	printf("\033[0;31m");
            printf("Voilation of Rules.\n");
            jc++;
            if(jc==3){
            	printf("Chance Terminated\n");
			    printf("\033[0;33m");
                printf("Winner is Player 1.");
            	printf("\033[0;37m");
				goto exit;
			}
			printf("Please pic between 1-4\n\n\n");
			printf("\033[0;37m");
            continue;
    	}

        a = a-j;
		printf("\033[0;35m");
		printf("Remaining: ");
		printf("\033[0;37m");
		printf("%d\n\n\n",a);
		
		if(a==1){
        	printf("\033[0;33m");
            printf("Winner is Player 2");
            printf("\033[0;37m");
            goto exit;
        }
        

    }
    exit:
    	
    printf("\n\n\nEnter 1 to Play Again & any other Key to Exit: ");
    
    fflush(stdin);
    scanf("%c",&c);
    
    if(c=='1'){
    	goto re;
	}
    
}
