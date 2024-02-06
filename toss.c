
int toss(char p1[],char p2[]){
	int t,c,toss=0;
	
	system("cls");
	
    printf("\033[0;35m");
    printf("*************");
	printf("\033[0;35m");
	printf("TOSS TIME");
	printf("\033[0;35m");
	printf("*************\n\n\n");
    printf("\033[0;32m");  
    printf("1 - Heads\n2 - Tales\n\n");
    printf("\033[0;37m");
    
    
    printf("%s Enter Your Choice: ",p1);
    
    scanf("%d",&c);

	srand(time(NULL));
	t = rand()%2+1;
	if(t==c){
		printf("\033[0;33m");
    	printf("\n\n\n%s Won The Toss\n",p1);
    	printf("\n%s Will Go on First\n\n\n",p2);
    	printf("\033[0;37m");
    	toss++;
    
	}
	else{
		if(c!=1&&c!=2){
			printf("\033[0;31m");
			printf("Invalid Input\n\n");
		}
		printf("\033[0;33m");
		printf("\n\n\n%s Won The Toss\n",p2);
    	printf("\n%s Will Go on First\n\n\n",p1);
		printf("\033[0;37m");
	}
	
	printf("Enter any key to Continue: ");
    
    getch();
    system("cls");
    return toss;
}
