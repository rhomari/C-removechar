#include <stdio.h>


int main(void) {
    
    int chartoread; 
    fprintf(stdout, "Enter a letter  to remove  : ");
    int chartoremove = fgetc(stdin);
    int exitcondition = 0;
    fprintf(stdout, "Now write some text  : ");
    while ((chartoread =fgetc(stdin)) != EOF){
            
            if (chartoread== '\n' ){
                if (exitcondition ==1)
                    break;
                exitcondition = 1;
            }

            if (chartoread != chartoremove)
                fprintf(stdout, "%c", chartoread);
            
               
    }
    printf("\nEnd of program.");
    return 0;
    
} 