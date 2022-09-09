//zombie

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{

	int pid= fork();

	// Parent process
	if (pid > 0){
	    printf("Parent process");
		sleep(50);
		}
	// Child process
	else{		
	    printf("child process");
		exit(0);
		}
	return 0;
}

