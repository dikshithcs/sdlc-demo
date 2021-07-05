/**
 * @file full_subtractor
 * @author Dikshith C S
 * @brief source file containing function for full asubtractor
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

int full_subtractor(int first_bit, int second_bit, int third_bit)
{
    LOOP4: {
        printf("Enter the 3 bits for full subtractor\n");
        scanf("%d %d %d",&first_bit,&second_bit, &third_bit); //input from the user 
        if(first_bit>1 || first_bit<0 || second_bit>1 || second_bit<0 || third_bit<0 || third_bit>1)//checking if inputs are valid
        {
            printf("Entered bits are not in range\nPlease enter bits once again\n");
            goto LOOP4;
        }
        difference = XOR(first_bit, second_bit);
        difference = XOR(difference, third_bit); //difference calculation for full subtractor
        borrow = XOR(first_bit, second_bit);
        borrow = AND(!borrow, third_bit);
        borrow2 = AND(!first_bit, second_bit);
        borrow = OR(borrow, borrow2); //borrow calculation for full subtractor
        printf("sum = %d \ncarry = %d\n", difference, borrow);
        return 0;
        }

}

