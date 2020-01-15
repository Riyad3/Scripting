#include <stdio.h>
#include <unistd.h>
#include <string.h>

char c;
char b;
char isGood [100];
char isErr [100];

int main (int argc , char* argv[]) {
	printf("Bienvenue\n");
	b = '_';
	while(read (0,&c,1)==1){
		if (c==79 && b==10){
			sprintf(isGood , "c'est good je suis une %d \n", c);
			write(1,isGood,strlen(isGood));	
		}
		else if(c==69 && b==10){
			sprintf(isErr, "c'est une erreur je suis une %d \n",c);
			write(2,isErr,strlen(isErr));
		}
	b = c;
	}
	fflush(stdout);
	return 0;
}
