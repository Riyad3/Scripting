#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// GEN TICK V2


int main( int argc, char* argv[] )
{
    char buff[256];
    printf("genTick start\n");
    // Check number of arguments
    if(argc != 2){
        strcpy( buff, "\ngenTick : your command is not correct.\nPlease type : genTick <delay>\nwith a delay value in milliseconds between 50 and 5000\n\n");
        write(2,buff, strlen(buff));
    }
    else {
        // get delay
        int delay = atoi( argv[1] );

        // infinite loop
        while(1){
            // flush standard output
            fflush(stdout);

            // Wait for a while according to delay
            usleep( delay*1000 );

            // Get a random value
            int val = rand()%5;

            // prepare a message according to the random value
            if(val == 0){
		strcpy(buff,"ERROR\n");
            }
            else{
		strcpy(buff,"OK\n");
            }

            // check if we have to corrupt a character
	    if( rand()% 5 == 0 ){
                // get index of character to update
	        int index = rand()%strlen(buff);
                // get random letter or number
                buff[index] = rand()%('z'-'0') + '0';
	    }

            // wend message to stdout
            write(1, buff, strlen(buff));
        }
    }
    
    // End of program
    printf("genTick end\n");
    return 0;
}
