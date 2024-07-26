#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() {
    char c[1000];
    FILE*fptr;
    if ((fptr=fopen("program.txt","r"))==NULL) {
        printf("Error! File cannot be opened.");
        exit(1);
    }
    fscanf(fptr,"%[^\n]",c);
    printf("Data from the file:\n%s",c);
    fclose(fptr);

    return 0;
}
