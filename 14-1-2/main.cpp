//
//  main.cpp
//  14-1-2
//
//  Created by Corinyi on 2020/03/23.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int swap3(int *num1, int *num2, int *num3);

int main(void){
    int num1, num2, num3;
    
    printf("num1에 저장할 수: ");
    scanf(" %d", &num1);
    printf("num2에 저장할 수: ");
    scanf(" %d", &num2);
    printf("num3에 저장할 수: ");
    scanf(" %d", &num3);
    
    swap3(&num1, &num2, &num3);
    printf("\nnum1: %d num2: %d num3: %d \n", num1, num2, num3);
    
    return 0;
}

int swap3(int *num1, int *num2, int *num3){
    int temp;
    
    temp = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = temp;
    
    return 0;
}
