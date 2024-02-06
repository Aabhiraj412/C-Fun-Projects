
int login(){
    char username[]="Abhiraj";
    char user2[]="Abha";
    char user3[]="Ansh";
    char user4[]="Shruti";
    char user5[]="Ananya";
    char user6[]="Anamika";
    char user7[]="Shivani";
    char user8[]="Prathvi";
    char password[]="Great";
    char pass2[]="Dabha";
    char pass3[]="Gadha";
    char pass4[]="Lift";
    char pass5[]="Ananya";
    char pass6[]="Anamika";
    char pass7[]="Shivani";
    char pass8[]="Gandu";
    char lusername[10],lpassword[10];
    int i,count=0;

	
    printf("\033[0;35m");
    printf("*************");
	printf("\033[0;35m");
	printf("Gameing Zone");
	printf("\033[0;35m");
	printf("*************\n\n\n");
    printf("\033[0;32m");  
    
	retry:

    printf("\033[0;32m");
	printf("Username: ");
    printf("\033[0;37m");

    for(i=0;lusername[i-1]!='\n';i++){
        scanf("%c",&lusername[i]);
    }

    lusername[--i] = '\0';

    if(strcmp(username,lusername)!=0&&strcmp(user2,lusername)!=0&&strcmp(user3,lusername)!=0&&strcmp(user4,lusername)!=0&&strcmp(user5,lusername)!=0&&strcmp(user6,lusername)!=0&&strcmp(user7,lusername)!=0&&strcmp(user8,lusername)!=0){
    	
    	count++;
	    printf("\033[0;31m");
		printf("\n\nUsername not found\n");
		if(count>3){
	    
		    printf("\033[0;31m");
			printf("Too many Attempts\nChance Terminated");	
		    printf("\033[0;37m");
		    exit (0);
		}

		printf("Please Try Again\n\n\n");
	    printf("\033[0;37m");
	    
		goto retry;
    }

    goto pas;

    pass:
    
    
    printf("\033[0;32m");
    printf("Username: ");
    printf("\033[0;37m");
    printf("%s\n",lusername);
    
    pas:
    	
        
    printf("\033[0;32m");
    printf("Password: ");
    printf("\033[0;37m");
    
    for(i=0;lpassword[i-1]!='\r';i++){
        lpassword[i] = getch();
        if(lpassword[i]=='\b'&&i>0){
        	i-=2;
        	printf("\b \b");
        	continue;
		}
		if(lpassword[i]=='\b'&&i==0){
        	i--;
        	continue;
		}
		if(lpassword[i]=='\r'){
        	continue;
		}
		printf("*");
    }

    printf("\n");
    lpassword[--i] = '\0';
    

	if(strcmp(username,lusername)==0){
		if(strcmp(password,lpassword)==0){
			goto Success;
		}
		else{
			count++;
		    printf("\033[0;31m");
			printf("\n\nIncorrect Password\n");
	
			if(count>3){
		    
			    printf("\033[0;31m");
				printf("\nToo many Attempts\nChance Terminated");	
			    printf("\033[0;37m");
			    exit (0);
			}
	        
			printf("Please Try Again\n\n\n");
		    printf("\033[0;37m");
		    
			goto pass;

		}
	}
	
	if(strcmp(user2,lusername)==0){
		if(strcmp(pass2,lpassword)==0){
			goto Success;
		}
		else{
			count++;
		    printf("\033[0;31m");
			printf("\n\nIncorrect Password\n");
	
			if(count>3){
		    
			    printf("\033[0;31m");
				printf("\nToo many Attempts\nChance Terminated");	
			    printf("\033[0;37m");
			    exit (0);
			}
	        
			printf("Please Try Again\n\n\n");
		    printf("\033[0;37m");
		    
			goto pass;

		}
	}
	
	if(strcmp(user3,lusername)==0){
		if(strcmp(pass3,lpassword)==0){
			goto Success;
		}
		else{
			count++;
		    printf("\033[0;31m");
			printf("\n\nIncorrect Password\n");
	
			if(count>3){
		    
			    printf("\033[0;31m");
				printf("\nToo many Attempts\nChance Terminated");	
			    printf("\033[0;37m");
			    exit (0);
			}
	        
			printf("Please Try Again\n\n\n");
		    printf("\033[0;37m");
		    
			goto pass;

		}
	}
    
    if(strcmp(user4,lusername)==0){
		if(strcmp(pass4,lpassword)==0){
			goto Success;
		}
		else{
			count++;
		    printf("\033[0;31m");
			printf("\n\nIncorrect Password\n");
	
			if(count>3){
		    
			    printf("\033[0;31m");
				printf("\nToo many Attempts\nChance Terminated");	
			    printf("\033[0;37m");
			    exit (0);
			}
	        
			printf("Please Try Again\n\n\n");
		    printf("\033[0;37m");
		    
			goto pass;

		}
	}
	
    if(strcmp(user5,lusername)==0){
		if(strcmp(pass5,lpassword)==0){
			goto Success;
		}
		else{
			count++;
		    printf("\033[0;31m");
			printf("\n\nIncorrect Password\n");
	
			if(count>3){
		    
			    printf("\033[0;31m");
				printf("\nToo many Attempts\nChance Terminated");	
			    printf("\033[0;37m");
			    exit (0);
			}
	        
			printf("Please Try Again\n\n\n");
		    printf("\033[0;37m");
		    
			goto pass;

		}
	}
	
    if(strcmp(user6,lusername)==0){
		if(strcmp(pass6,lpassword)==0){
			goto Success;
		}
		else{
			count++;
		    printf("\033[0;31m");
			printf("\n\nIncorrect Password\n");
	
			if(count>3){
		    
			    printf("\033[0;31m");
				printf("\nToo many Attempts\nChance Terminated");	
			    printf("\033[0;37m");
			    exit (0);
			}
	        
			printf("Please Try Again\n\n\n");
		    printf("\033[0;37m");
		    
			goto pass;

		}
	}
	
    if(strcmp(user7,lusername)==0){
		if(strcmp(pass7,lpassword)==0){
			goto Success;
		}
		else{
			count++;
		    printf("\033[0;31m");
			printf("\n\nIncorrect Password\n");
	
			if(count>3){
		    
			    printf("\033[0;31m");
				printf("\nToo many Attempts\nChance Terminated");	
			    printf("\033[0;37m");
			    exit (0);
			}
	        
			printf("Please Try Again\n\n\n");
		    printf("\033[0;37m");
		    
			goto pass;

		}
	}
    
    if(strcmp(user8,lusername)==0){
		if(strcmp(pass8,lpassword)==0){
			goto Success;
		}
		else{
			count++;
		    printf("\033[0;31m");
			printf("\n\nIncorrect Password\n");
	
			if(count>3){
		    
			    printf("\033[0;31m");
				printf("\nToo many Attempts\nChance Terminated");	
			    printf("\033[0;37m");
			    exit (0);
			}
	        
			printf("Please Try Again\n\n\n");
		    printf("\033[0;37m");
		    
			goto pass;

		}
	}
    
    Success:
    printf("\033[0;32m");
    printf("\n\n\nSuccessfull Logging In");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
			printf(".");
			Sleep(600);
    printf("\033[0;37m");

    system("cls");

}
