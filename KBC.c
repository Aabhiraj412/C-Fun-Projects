
struct question{
	char q[500];
	char a[100];
	char b[100];
	char c[100];
	char d[100];
	char ans;
}ques[13];


int fifty(char a,int i){
	system("cls");
	if(a == 'a'){
		
		srand(time(NULL));
		int r = rand()%3+1;
		if(r==1){
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%s%s%sc)\n\nd)\n\n\n",ques[i].q,ques[i].a,ques[i].b);
    	
		}
		else if(r==2){
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%s%sb)\n\n%sd)\n\n\n",ques[i].q,ques[i].a,ques[i].c);
		}
		else{
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%s%sb)\n\nc)\n\n%s\n",ques[i].q,ques[i].a,ques[i].d);
		}
	}
	if(a == 'b'){
		
		srand(time(NULL));
		int r = rand()%3+1;
				if(r==1){
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%s%s%sc)\n\nd)\n\n",ques[i].q,ques[i].a,ques[i].b);
    	
		}
		else if(r==2){
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%sa)\n\n%s%sd)\n\n",ques[i].q,ques[i].b,ques[i].c);
		}
		else{
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%sa)\n\n%sc)\n\n%s\n",ques[i].q,ques[i].b,ques[i].d);
		}

	}
	if(a == 'c'){
		srand(time(NULL));
		int r = rand()%3+1;
			if(r==1){
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%s%sb)\n\n%sd)\n\n",ques[i].q,ques[i].a,ques[i].c);
    	
		}
		else if(r==2){
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%sa)\n\n%s%sd)\n\n",ques[i].q,ques[i].b,ques[i].c);
		}
		else{
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%sa)\n\nb)\n\n%s%s\n",ques[i].q,ques[i].c,ques[i].d);
		}
}
	if(a == 'd'){
		srand(time(NULL));
		int r = rand()%3+1;
				if(r==1){
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%s%sb)\n\nc)\n\n%s\n",ques[i].q,ques[i].a,ques[i].d);
    	
		}
		else if(r==2){
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%sa)\n\n%sc)\n\n%s\n",ques[i].q,ques[i].b,ques[i].d);
		}
		else{
			printf("\033[0;32m");
			printf("Question No.:- %d\n\n",i+1);
			printf("\033[0;35m");
			printf("%sa)\n\nb)\n\n%s%s\n",ques[i].q,ques[i].c,ques[i].d);
		}

	}
}

int kbc(){
	
	strcpy(ques[0].q , "What does the 'C' in C language stand for?\n\n");
	strcpy(ques[0].a,"a) Central\n\n");
	strcpy(ques[0].b,"b) Common\n\n");
	strcpy(ques[0].c,"c) Computer\n\n");
	strcpy(ques[0].d,"d) Compiled\n");
	ques[0].ans = 'b';
	
	strcpy(ques[1].q , "Which of the following is a valid C variable name?\n\n");
	strcpy(ques[1].a,"a) 2count\n\n");
	strcpy(ques[1].b,"b) _total_count\n\n");
	strcpy(ques[1].c,"c) sum of numbers\n\n");
	strcpy(ques[1].d,"d) average#score\n");
	ques[1].ans = 'b';
	
	strcpy(ques[2].q , "What is the purpose of the printf function in C?\n\n");
	strcpy(ques[2].a,"a) Reading input from the user\n\n");
	strcpy(ques[2].b,"b) Displaying output to the console\n\n");
	strcpy(ques[2].c,"c) Performing mathematical calculations\n\n");
	strcpy(ques[2].d,"d) Allocating memory dynamically\n");
	ques[2].ans = 'b';
	
	strcpy(ques[3].q , "What is the significance of the sizeof operator in C?\n\n");
	strcpy(ques[3].a,"a) It returns the size of a variable in bytes.\n\n");
	strcpy(ques[3].b,"b) It calculates the square root of a number.\n\n");
	strcpy(ques[3].c,"c) It checks if a variable is defined.\n\n");
	strcpy(ques[3].d,"d) It converts data types.\n");
	ques[3].ans = 'a';
	
	strcpy(ques[4].q , "What is the purpose of the typedef keyword in C?\n\n");
	strcpy(ques[4].a,"a) Defining new data types\n\n");
	strcpy(ques[4].b,"b) Declaring variables\n\n");
	strcpy(ques[4].c,"c) Including header files\n\n");
	strcpy(ques[4].d,"d) Allocating memory\n");
	ques[4].ans = 'a';
	
	strcpy(ques[5].q , "What is the difference between ++i and i++ in C?\n\n");
	strcpy(ques[5].a,"a) They are the same.\n\n");
	strcpy(ques[5].b,"b) ++i increments the value of i before using it, while i++ increments the value of i after using it.\n\n");
	strcpy(ques[5].c,"c) ++i increments the value of i after using it, while i++ increments the value of i before using it.\n\n");
	strcpy(ques[5].d,"d) ++i and i++ are not valid expressions.\n");
	ques[5].ans = 'b';
	
	strcpy(ques[6].q , "What is the purpose of the static keyword in C?\n\n");
	strcpy(ques[6].a,"a) It specifies the data type of a variable.\n\n");
	strcpy(ques[6].b,"b) It indicates that a variable or function has internal linkage.\n\n");
	strcpy(ques[6].c,"c) It is used for dynamic memory allocation\n\n");
	strcpy(ques[6].d,"d) It controls the flow of the program.\n");
	ques[6].ans = 'b';
	
	strcpy(ques[7].q , "How are arrays and pointers related in C?\n\n");
	strcpy(ques[7].a,"a) Arrays and pointers are the same thing.\n\n");
	strcpy(ques[7].b,"b) Arrays can store only primitive data types, while pointers can store any data type.\n\n");
	strcpy(ques[7].c,"c) Arrays can decay into pointers, and the name of an array is a constant pointer.\n\n");
	strcpy(ques[7].d,"d) Pointers cannot be used with arrays.\n");
	ques[7].ans = 'c';
	
	strcpy(ques[8].q , "What is the purpose of the malloc function in C?\n\n");
	strcpy(ques[8].a,"a) It defines a macro.\n\n");
	strcpy(ques[8].b,"b) It allocates memory for variables with automatic storage duration.\n\n");
	strcpy(ques[8].c,"c) It allocates memory for variables with static storage duration.\n\n");
	strcpy(ques[8].d,"d) It allocates dynamic memory during program execution.\n");
	ques[8].ans = 'd';
	
	strcpy(ques[9].q , "Explain the concept of function pointers in C.\n\n");
	strcpy(ques[9].a,"a) Pointers that can only be used with functions.\n\n");
	strcpy(ques[9].b,"b) Pointers that store the address of a function.\n\n");
	strcpy(ques[9].c,"c) Pointers that can only be used within a function.\n\n");
	strcpy(ques[9].d,"d) Pointers that store the value of a function.\n");
	ques[9].ans = 'b';
	
	strcpy(ques[10].q , "What is the purpose of the volatile keyword in C?\n\n");
	strcpy(ques[10].a,"a) It indicates that a variable's value may change at any time without any action being taken by the code.\n\n");
	strcpy(ques[10].b,"b) It specifies that a variable cannot be modified.\n\n");
	strcpy(ques[10].c,"c) It is used for creating thread-safe code.\n\n");
	strcpy(ques[10].d,"d) It is used for loop control.\n");
	ques[10].ans = 'a';
	
	strcpy(ques[11].q , "What is a \"pointer to a function\" in C?\n\n");
	strcpy(ques[11].a,"a) A function that returns a pointer.\n\n");
	strcpy(ques[11].b,"b) A function that takes a pointer as an argument.\n\n");
	strcpy(ques[11].c,"c) A pointer that points to a function.\n\n");
	strcpy(ques[11].d,"d) A function that is called through a pointer.\n");
	ques[11].ans = 'c';

	strcpy(ques[12].q , "Explain the purpose of the enum keyword in C.\n\n");
	strcpy(ques[12].a,"a) It declares a new structure.\n\n");
	strcpy(ques[12].b,"b) It defines a variable with enumerated values.\n\n");
	strcpy(ques[12].c,"c) It specifies the entry point of a program.\n\n");
	strcpy(ques[12].d,"d) It is used to create multi-dimensional arrays.\n");
	ques[12].ans = 'b';
    
    printf("\033[0;35m");
    printf("*************KBC Game*************\n\n\n");
    printf("\033[0;37m");
    
	
    printf("\033[0;32m");
    printf("KBC is typically a quiz competition where contestants answer multiple-choice questions of increasing difficulty to win cash prizes.\n\n");
    printf("\n\nLifelines:\n\n");
    printf("Contestants are provided with lifelines to assist them in answering questions\n");
    printf("\nCommon lifelines include:\n");
    printf("\n1) Phone A Friend\n");
    printf("\n2) 50-50\n\n\n");
    printf("\n\nEnter 'Q' to Quit.");
    printf("\n\nEnter '1' for Phone A Friend.");
    printf("\n\nEnter '2' for 50-50.\n\n");
    
    printf("\033[0;37m");
    
    printf("Enter any key to Continue: ");
    
    getch();
    
    system("cls");	
    
//    system("vlc --intf dummy --play-and-exit open.mp3");
	
	int i,l1=0,l2=0,pen=0;
	int rev[] = {1000,2000,3000,5000,8000,10000,15000,25000,50000,100000,250000,500000,800000};
	char an;
    for(i = 0; i < 14; i++){ 
    	
    	re:
    		
    	system("cls");
    	if(i>13){
	    	printf("\033[0;33m");
    		printf("Congratulation!!\n\nYou won the game");
    		printf("\033[0;37m");
		}
    	printf("\033[0;32m");
		printf("Question No.:- %d\n\n",i+1);
		printf("\033[0;35m");
    	printf("%s%s%s%s%s\n",ques[i].q,ques[i].a,ques[i].b,ques[i].c,ques[i].d);
    	rere:
    	fflush(stdin);
		printf("\033[0;37m");
        printf("Enter your Ans:- ");
		printf("\033[0;36m");
    
        an = getchar();
        
        if(an == ques[i].ans || (an+32) == ques[i].ans){
		    printf("\033[0;32m");
        	printf("\n\nCorrect Answer\n\n");
        	printf("You Won:- ");
		    printf("\033[0;33m");
		    printf("INR %d\n",rev[i]);
		    printf("\033[0;37m");
		}
		else if(an == 'q' || an == 'Q'){
			
		    printf("\033[0;33m");
			printf("\n\nYou Quit\n\n");
			
			printf("\033[0;37m");
    		printf("Correct Ans is:-");
    		printf("\033[0;33m");
			printf(" %c\n",ques[i].ans);
			
		    printf("\033[0;32m");
		    printf("Total Cash Won:- ");
		    printf("\033[0;33m");
			printf("INR %d\n",rev[i]);
			printf("\033[0;37m");
			
		    printf("\nEnter any key to Continue: ");
		    
		    getch();
			break;
		}
		else if(an == '1'){
			if(l1>0){
				pen++;
			    printf("\033[0;31m");
				printf("\n\nLifeline Already Used");
				if(pen>=3){
					printf("\n\nChance Terminated\n");
					goto lose;
				}
				printf("\n\nPlease Retry");
		    	printf("\033[0;37m");
				printf("\n\nEnter any key to Continue: ");
    
    			getch();
    
		    	goto re;
			}
			l1++;
			printf("Calling a Friend.....\n\n");
			int timer;
			for(timer=30;timer>=0;timer--){
				if(timer>9){
					printf("\033[0;32m");
					printf("0:%d Time Left",timer);
					printf("\033[0;37m");
				}
				else{
					printf("\033[0;31m");
					printf("0:0%d Time Left",timer);
					printf("\033[0;37m");
				}
					
				sleep(1);
				printf("\r");
			}
			printf("\033[0;31m");
			printf("Time's Up!!        ");
			printf("\n\n");
			goto rere;
		}
		else if(an == '2'){
			if(l2>0){
				pen++;
			    printf("\033[0;31m");
				printf("\n\nLifeline Already Used");
				if(pen>=3){
					printf("\n\nChance Terminated\n");
					goto lose;
				}
				printf("\n\nPlease Retry");
		    	printf("\033[0;37m");
				printf("\n\nEnter any key to Continue: ");
    
    			getch();
    
		    	goto re;
			}
			l2++;
			fifty(ques[i].ans,i);
			goto rere;
		}
		else{
			
		    printf("\033[0;31m");
			printf("\n\nIncorrect Answer\n\n");
			lose:
			printf("You Loose\n\n");
			
			printf("\033[0;37m");
    		printf("Correct Ans is:-");
    		printf("\033[0;33m");
			printf(" %c\n",ques[i].ans);
			
			if(pen>=3){
				printf("\033[0;32m");
			    printf("Total Cash Won:- ");
			    printf("\033[0;33m");
			    printf("INR 0\n");
			}
			
			else if(i>=10){
			    printf("\033[0;32m");
			    printf("Total Cash Won:- ");
			    printf("\033[0;33m");
			    printf("INR 100000\n");
			}
			else if(i>=5){
			    printf("\033[0;32m");
			    printf("Total Cash Won:- ");
			    printf("\033[0;33m");
			    printf("INR 8000\n");
			}
			else{
			    printf("\033[0;32m");
			    printf("Total Cash Won:- ");
			    printf("\033[0;33m");
			    printf("INR 0\n");
			}
			
    		printf("\033[0;37m");
		    printf("\nEnter any key to Continue: ");
		    
		    getch();
        	break;
		}
		
	    printf("\nEnter any key to Continue: ");
	    
	    getch();
        
    }
   
}
