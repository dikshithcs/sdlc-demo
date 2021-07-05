/**
 * @file gray_to_binary
 * @author Dikshith C S
 * @brief source file containing function for gray to binary conversion
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

int graytobinary(int first_bit, int second_bit, int third_bit, int fourth_bit)
{
    LOOP6: {
        printf("Enter the 4 bits for gray to binary conversion\n");
        printf("NOTE : Enter bit from LSB\n");
        scanf("%d %d %d %d",&first_bit,&second_bit, &third_bit, &fourth_bit); //input from the user
        if(first_bit>1 || first_bit<0 || second_bit>1 || second_bit<0 || third_bit<0 || third_bit>1 || fourth_bit<0 || fourth_bit>1)//checking if inputs are valid
        {
            printf("Entered bits are not in range\nPlease enter bits once again\n");
            goto LOOP6;
        }
        
        binary2 = XOR(second_bit, third_bit);
        binary1 = XOR(first_bit, fourth_bit);
        binary1 = XOR(binary1, binary2); //bit0 calculation

        binary2 = XOR(binary2, fourth_bit); //bit1 calculation
        binary3 = XOR(third_bit, fourth_bit); //bit2 calculation
        binary4 = fourth_bit; //bit3 calculation
        printf("%d %d %d %d",binary1, binary2, binary3, binary4);
        return 0;
        }

}