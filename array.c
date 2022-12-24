#include "stdio.h"

int main () {
    // Array Sum, Average and Max-Number
    //int scores[] = {}, length, i, j, sum = 0, average, highest;
    // scores[] = {89, 95, 70, 66, 109, 80};
    /* scores[0] = 89;
    scores[1] = 95;
    scores[2] = 70;
    scores[3] = 66;
    scores[4] = 109;
    scores[5] = 80; */
    /* printf("Input : ");
    for (j = 0; j < 4; j++)
    {
        scanf("%d", &scores[j]);
    }
    printf("Output : ");
    for (j = 0; j < 4; j++)
    {
        printf("%d\t", scores[j]);
    }
    printf("\n"); */
    
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



    //int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, arr2[10], i, j, temp;
    /* for (i = 0, j = 9; i < 10; i++, j--)
    {
        arr2[i] = arr[j];
    }
    for (i = 0; i < 10; i++)
    {
        arr[i] = arr2[i];
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n"); */

    /* for ( i = 0, j = 9; i < 10; i++, j--)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    } printf("\n"); */
    
    


    /* int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62},
    st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58, 69, 67, 53, 56, 71, 62, 49},
    final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69, 85, 81, 80, 67, 88, 71}, 
    i, marks, count;
    double total_marks[40];
    for (i = 0; i < 40; i++)
    {
        total_marks[i] = ft_marks[i]/4.0 + st_marks[i]/4.0 + final_marks[i]/2.0;
    }
    for (i = 0; i < 40; i++)
    {
        printf("Roll No: %d\t Total Marks: %0.2lf\n", i+1, total_marks[i]);
    }

    for (marks = 50; marks <= 100; marks++)
    {
        count =0;
        for (i = 0; i < 40; i++)
        {
            if ((int)total_marks[i] == marks)
            {
                count++;
            }
            
        }
        if (count != 0)
        {
            printf("Marks: %d Count: %d\n", marks, count);
        }
    } */
    
    int i;   
     int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73, 62, 66, 76, 70, 67, 65, 77, 63};   
     int marks_count[101];   
     for(i = 0; i < 101; i++) {   
         marks_count[i] = 0;   
     }   
     for(i = 0; i < 40; i++) {   
         marks_count[total_marks[i]]++;   
     }   
     for(i = 50; i <= 100; i++) {   
         printf("Marks: %d Count: %d\n", i, marks_count[i]);   
     }  
    
    

    return 0;
}