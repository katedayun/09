#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N_STUDENT 5
int main(int argc, char *argv[1])
{
    int i;
    int grade [N_STUDENT];
    printf ("input 5 scores:");
    for (i=0;i<N_STUDENT; i++)
        scanf ("%d", &grade[i]);

    for (i=0;i<N_STUDENT;i++)
        printf ("grade[%i] = %d\n", i, grade[i]);
    return 0;
 }
 //result 
 //input 5 scores:10 13 14 15 16
//grade[0] = 10
//grade[1] = 13
//grade[2] = 14
//grade[3] = 15
//grade[4] = 16
