/**
 * @file or_gate
 * @author Dikshith C S
 * @brief source file containing function for or gate
 * @date 2021-07-05
 */

#include<stdio.h>
#include "combinational.h"

     int OR(int A, int B)//OR gate
    {
        int AorB;
        if(A+B==0)
        {
            AorB=0;
        }
        else
            AorB=1;
        return AorB;
    }
