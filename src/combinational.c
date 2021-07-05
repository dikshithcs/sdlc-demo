/**
 * @file combinational.c
 * @author Dikshith C S
 * @brief source file containing contaning main
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

    int case_num = 0;
    
    int first_bit, second_bit, third_bit, fourth_bit, sum;
    int output1, output2, output3, output4;

    int carry2, carry3; // calculate carry in full adder
    int difference, borrow, borrow2; //calculate diff and borrow for subtractor

    int carry;
    int gray1, gray2, gray3, gray4;
    int binary1, binary2, binary3, binary4;

  
int combinational()
{
      
    printf("\n   ***   Combinational logic circuit   ***\n\n");
    printf("Enter 1 for half adder  \n");
    printf("Enter 2 for full adder  \n");
    printf("Enter 3 for half subtractor \n");
    printf("Enter 4 for full subtractor \n");
    printf("Enter 5 for full binary to gray \n");
    printf("Enter 6 for full gray to binary \n");
    printf("Enter 7 for BCD to Excess-3 \n");
    printf("Enter 8 for Excess-3 to BCD \n");
    printf("Enter 9 for Magnitude comparator \n\n");
    scanf("%d", &case_num);

switch (case_num)
{
    case 1:
        half_adder(first_bit, second_bit);
        break;
    
    case 2:

        full_adder(first_bit, second_bit, third_bit);
        break;
    
    case 3:

        half_subtractor(first_bit, second_bit);
        break;

    case 4:

        full_subtractor(first_bit, second_bit, third_bit);
        break;

    case 5 :

        binarytogray(first_bit, second_bit, third_bit, fourth_bit);
        break;
    
    case 6 :

        graytobinary(first_bit, second_bit, third_bit, fourth_bit);
        break;
        
    case 7 :

        bcdtoexcess3(first_bit, second_bit, third_bit, fourth_bit);
        break;
        
    case 8 :

        excess3tobcd(first_bit, second_bit, third_bit, fourth_bit);
        break;
        
    case 9 :
    
        magnitude_comparator(first_bit, second_bit);
        break;
       
    default:
        printf("Out of range");
        break;
}
return 0;
}

