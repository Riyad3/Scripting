#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char c;
char b;
char isGood [100];
char isErr [100];

int main(int argc , char* argv[]){

	while(read (0,&c,1)==1){
char* sensorNames[]={
"table",
"chaise",
"tabouret"
};

char* errorCodes[]={
"Erreur 404",
"Erreur 503",
"Erreur 666"
};
int sensorId = rand()%(1000);
char* sensorName = sensorNames[rand()%(3)];
int minValue = rand()%(100 +1);
int value = minValue + rand() %(100 +1);
int meanValue = value + rand() %(100 + 1);
int maxValue = meanValue + rand() %(100 + 1);
char* errorCode = errorCodes[rand()%(3)];
char errorDetail[] = "Une erreur est survenue !\n"; 
 
		if (c==79 && b==10){
			sprintf(isGood , "\n %d, %s, %d, %d, %d,%d \n", sensorId, sensorName,value, minValue, meanValue, maxValue );
			write(1,isGood,strlen(isGood));	
		}
		else if(c==69 && b==10){
			sprintf(isErr, "\n %d, %s, %s \n",sensorId, errorCode, errorDetail);
			write(2,isErr,strlen(isErr));
		}
	b = c;
	}
	fflush(stdout);
	return 0;
}
