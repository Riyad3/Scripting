#include <stdio.h>
#include <unistd.h>

char c;

int main (int argc , char* argv[]) {
	printf("Bienvenue\n");

	while(read (0,&c,1)==1){
		write(1,&c,1);
		printf("-%d-\n",c);
	if (c==10){
	print(" ");
	elseif(c==	
}
		fflush(stdout);
	}
}
