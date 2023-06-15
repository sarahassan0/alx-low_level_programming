#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main() {
	    char **envp = environ;
	        while (*envp) {
			        printf("%s\n", *envp);
				        envp++;
					    }

		    return 0;
}
