#include<stdio.h>
/*
 *main - function prints argv[]
 * @argc : int
 * @argv : list
 * return 0
*/

int main(int argc , char const *argv[])
{
    (void)argc;
    printf("%s\n",argv[0]);
    return(0);
}