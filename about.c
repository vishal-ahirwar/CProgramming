#include<stdio.h>
#include<stdlib.h>


int main()
{
    FILE*process=popen("uname","r");;
    if(process==NULL)
    {
        printf("unable to read process!\n");
        return 1;
    };
    char c;
printf("Operating system : ");
    while((c=fgetc(process))!=EOF)
    {
        printf("%c",c);
    };
    printf("\n");

    pclose(process);
    
    return 0;
};
