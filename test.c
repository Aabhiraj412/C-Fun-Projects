#include<stdio.h>

int main(){
	
	FILE *f;
	
	f= fopen("Test.txt","w+");
	
	fprintf(f,"Hello Sir\nHow are You??");
	rewind(f);
	
	char ch = fgetc(f);
	while(ch!='\n'){
		printf("%c",ch);
		ch = fgetc(f);
	}
	printf("\n");
	fprintf(f,"I am Fine Thank You");
	rewind(f);
	ch = fgetc(f);
	while(ch!=EOF){
		printf("%c",ch);
		ch = fgetc(f);
	}
}
