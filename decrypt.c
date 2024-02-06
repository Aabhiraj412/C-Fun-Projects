#include<stdio.h>

int main(int argc, char *argv[]){
	FILE *f = NULL, *t = NULL;
	char ch;
	
	if(argc<2){
		printf("\033[0;31m");
		printf("Insuffucient Arguments!!\n\n");
		printf("\033[0;37m");
		return 0;
	}
	f = fopen(argv[1],"r");
	if(f != NULL){
		printf("\033[0;32m");
		printf("File Accessed Successfull\n\n");
		printf("\033[0;37m");
		Sleep(600);
	}
	else{
		printf("\033[0;31m");
		printf("ERROR! File Can't be Accessed\n");
		printf("\033[0;37m");
		return 0;
	}
	
	t = fopen("decrypted.txt","w");
	if(t != NULL){
		printf("\033[0;32m");
		printf("Decrypted File Created Successfull\n\n");
		printf("\033[0;37m");
		Sleep(600);
	}
	else{
		printf("\033[0;31m");
		printf("ERROR!! Decrypted File Can't be Created\n");
		printf("\033[0;37m");
		return 0;
	}
	
	ch = fgetc(f);
	while(ch != EOF){
		fputc(ch-1,t);
		ch = fgetc(f);
	}
	printf("\033[0;32m");
	printf("Changes Made");
	Sleep(600);
	printf("\n\nFile Saved\n\n");
	printf("\033[0;37m");	
	return 0;
}
