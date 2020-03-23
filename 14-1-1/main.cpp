//
//  main.cpp
//  14-1-1
//
//  Created by Corinyi on 2020/03/23.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>
void SquareByValue(int i);
int SquareByReference(int *i);

int main(void){
    int num;
    printf("제곱할 수는? ");
    scanf("%d",&num);
    SquareByValue(num);
    SquareByReference(&num);
    printf("제곱된 수는(by Reference): %d \n", num);
    
    return 0;
}

void SquareByValue(int i){
    i = i*i;
    printf("제곱된 수는(by Value): %d \n", i);
}

int SquareByReference(int *i){
    *i = *i * *i;
    return *i;
}
