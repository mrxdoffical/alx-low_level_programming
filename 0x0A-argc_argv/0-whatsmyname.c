#include<stdio.h>
/*
main function prints argv[]
*/

int main(int argc , char* argv[])
{
    (void)argc;
    printf("%s\n",argv[0]);
    return(0);
}