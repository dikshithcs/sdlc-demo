/**
 * @file and_gate
 * @author Dikshith C S
 * @brief source file containing function for and gate
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

int AND(int A, int B)//AND gate
    {
        int AandB;
        if(A*B==0)
        {
            AandB=0;
        }
        else
            AandB=1;
        return AandB;
    }
