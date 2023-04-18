#include<stdio.h>
#include<ctype.h>
struct Status
{
    int numeric;
    int symbols;
    int alpha;
    int spaces;

    void print()const
    {
        printf("your passowrd has \nnumeric value : %d\nsymbols : %d\nalpha : %d\nspaces : %d\n",this->numeric,this->symbols,this->alpha,this->spaces);
    };
    Status(){
        this->numeric=0;
        this->symbols=0;
        this->alpha=0;
        this->spaces=0;
    };

};

int main()
{
    printf("%-10sYour Name%-10sFather Name%-10sDOB\n"," "," "," ");
     printf("%-10s%-10s%-10s\n","Vishal Ahirwar "," Vishal Ahirwar","Vishal Ahirwar ");
      printf("%-10s%-10s%-10s\n","Vishal Ahirwar ","Vishal Ahirwar ","Vishal Ahirwar ");
    printf("enter a secure passowrd??");
    char password[256];
    scanf("%s",password);
    printf("entered value : %s\n",password);

    int index=0;
    struct Status status;
    while(password[index]!='\0')
    {
        if(isalpha(password[index]))
        {
            ++status.alpha;
        }else if(isdigit(password[index]))
        {
            ++status.numeric;
        }else
        {
            ++status.symbols;
        };
        ++index;
    };
    status.print();
    return 0;
}