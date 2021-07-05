/**
 * @file magnitude_comparator
 * @author Dikshith C S
 * @brief source file containing function for magnitude comparator
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

int magnitude_comparator(int first_bit, int second_bit)
{
     LOOP9: {
        printf("Enter 2 bits for Magnitude Comparator : \n");
        scanf("%d %d",&first_bit, &second_bit);//input for comparator
        if(first_bit>1 || first_bit<0 || second_bit>1 || second_bit<0)//checking if inputs are valid
        {
            printf("Entered bits are not in range\nPlease enter bits once again\n");
            goto LOOP9;
        }
        output1 = AND(first_bit, !second_bit); //bit0 > bit1 calculation
        output2 = AND(!first_bit, !second_bit);
        output3 = AND(first_bit, second_bit);
        output2 = OR(output2, output3); //bit0 = bit1 calculation
        output3 = AND(!first_bit, second_bit); //bit0 < bit1 calculation
        printf("\nFirst bit > Second bit => %d\n", output3); 
        printf("First bit = Second bit => %d\n", output2);
        printf("First bit < Second bit => %d\n", output1);
        return 0;
        }

}

