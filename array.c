#include "stdio.h"

int main () {
    // Array Sum, Average and Max-Number
    int scores[] = {}, length, i, j, sum = 0, average, highest;
    // scores[] = {89, 95, 70, 66, 109, 80}
    /* scores[0] = 89;
    scores[1] = 95;
    scores[2] = 70;
    scores[3] = 66;
    scores[4] = 109;
    scores[5] = 80; */
    printf("Input : ");
    for (j = 0; j < 4; j++)
    {
        scanf("%d", &scores[j]);
    }
    printf("Output : ");
    for (j = 0; j < 4; j++)
    {
        printf("%d\t", scores[j]);
    }
    printf("\n");
    
    // length = sizeof(scores) / sizeof(scores[0]);

    // printf("[");
    // for (i = 0; i < length; i++)
    // {
    //     printf("'%d' ", scores[i]);
    //     sum += scores[i];
    //     average = sum / length; 
    //     if (scores[i] > scores[i-1])
    //     {
    //         highest = scores[i];
    //     } else 
    //     {
    //         highest = scores[i-1];
    //     }
        
    // }
    // printf("]\n");

    // printf("Find Sum of Scores = %d\n", sum);
    // printf("Find Average of Scores = %d\n", average);
    // printf("Find Highest of Scores = %d\n", highest);



    // // Array Store Elements in Memory
    // printf("%p\n", &scores);
    // printf("%u\n", (unsigned int)&scores);
    // printf("%u\n", (unsigned int)&scores[0]);
    // printf("%u\n", (unsigned int)&scores[1]);
    // printf("%u\n", (unsigned int)&scores[2]);
    // printf("%u\n", (unsigned int)&scores[3]);
    // printf("%u\n", (unsigned int)&scores[4]);

    return 0;
}