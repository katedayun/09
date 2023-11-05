#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N_STUDENT 5
int main(int argc, char *argv[1])
{
    int i;
    int grade[N_STUDENT];
    int score[N_STUDENT];

    for(i=0;i<N_STUDENT;i++)
        score[i] = grade[i];

    for(i=0;i<N_STUDENT;i++)
        printf("score[%d] = %d (grade:%i)\n", i, score[i], grade[i]);

    return 0;
 }
 //score[0] = 0 (grade:0)
//score[1] = 0 (grade:0)
//score[2] = 48 (grade:48)
//score[3] = 0 (grade:0)
//score[4] = 0 (grade:0)
