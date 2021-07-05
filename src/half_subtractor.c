/**
 * @file half_subtractor
 * @author Dikshith C S
 * @brief source file containing function for half subtractor
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

int half_subtractor(int first_bit, int second_bit)
{
    LOOP3: {
            printf("Enter the 2 bits for half subtractor\n");
            scanf("%d %d",&first_bit,&second_bit);//input for half subtractor
            if(first_bit>1 || first_bit<0 || second_bit>1 || second_bit<0)//checking if inputs are valid
            {
                printf("Entered bits are not in range\nPlease enter bits once again\n");
                goto LOOP3;
            }
            difference = XOR(first_bit, second_bit); //difference calculation for half subtractor
            borrow = AND(!first_bit, second_bit); //borrow calculation for half subtractor
            printf("sum = %d \ncarry = %d\n", difference, borrow);
            return 0;
            }
}
