/**
 * @file bcd_to_excess3
 * @author Dikshith C S
 * @brief source file containing function for bcd to excess3 conversion
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

int bcdtoexcess3(int first_bit, int second_bit, int third_bit, int fourth_bit)
{
LOOP7: {
        printf("Enter the 4 bits for BCD to Excess 3 conversion\n");
        printf("NOTE : Enter bit from LSB\n");
        scanf("%d %d %d %d",&first_bit,&second_bit, &third_bit, &fourth_bit); //input from the user
        if(first_bit>1 || first_bit<0 || second_bit>1 || second_bit<0 || third_bit<0 || third_bit>1 || fourth_bit<0 || fourth_bit>1)//checking if inputs are valid
        {
            printf("Entered bits are not in range\nPlease enter bits once again\n");
            goto LOOP7;
        }
        if(first_bit == 1 && second_bit == 1)//displaying output for invalid input
        {
            printf("bit1 = X\nbit2 = X\nbit3 = X\nbit4 = X");
            return 0;
        }
        if(first_bit == 1 && second_bit == 0 && third_bit == 1)//displaying output for invalid input
        {
            printf("bit1 = X\nbit2 = X\nbit3 = X\nbit4 = X");
            return 0;
        }

        output1 = AND(second_bit, fourth_bit);
        output2 = AND(second_bit, third_bit);
        output1 = OR(output1, output2);
        output1 = OR(first_bit, output1); //bit0 calculation

        output2 = AND(!third_bit, !fourth_bit);
        output3 = AND(second_bit, output2);
        output4 = AND(!second_bit, fourth_bit);
        output2 = AND(!second_bit, third_bit);
        output2 = OR(output2, output4);
        output2 = OR(output2, output3); //bit1 calculation

        output3 = AND(!third_bit, !fourth_bit);
        output4 = AND(third_bit, fourth_bit);
        output3 = OR(output3, output4); //bit2 calculation

        output4 = !fourth_bit; //bit3 calculation
        printf("%d %d %d %d",output1, output2, output3, output4);
        return 0;
        }
}
