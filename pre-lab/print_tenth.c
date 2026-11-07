/**
 * @file print_tenth.c 
 *
 * @brief Main source code for the Print Tenth program.
 * 
 * This file contains the main entry point and the implementation of the Print_Tenth
 * that iterates from 10 to 51 and prints a message every 10th iteration (10, 20, 30, 40, 50)
 * and a different message following the 10th iteration (11, 21, 31, 41, 51)
 * @author Feranmi F.
 */

#include <stdio.h>

void Print_Tenth(void)
{
    int index;
    for (index = 10; index <= 51; index++)
    {
        if ((index % 10) == 0)
        {
            printf("Index %d: Every 10th iteration.\n", index);
        }
        else if ((index % 10) == 1)
        {
            printf("Index %d: Following the 10th iteration.\n", index);
        }
    }
}

