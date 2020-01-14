#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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
            int val = rand()%20;
            // Send a message according to the random value (1 error / 19 ok)
            if(val == 0){
                printf("ERROR\n");
            }
            else{
                printf("OK\n");
            }
        }
    }
    
    // End of program
    printf("genTick end\n");
    return 0;
}
