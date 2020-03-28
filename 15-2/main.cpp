//
//  main.cpp
//  15-2
//
//  Created by Corinyi on 2020/03/27.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int decimaltobinary(int *num);
int main(void){
    int dec;
    
    printf("10진수 정수 입력: ");
    scanf("%d", &dec);
    printf("2진수로 변환 하면: %d \n ", decimaltobinary(&dec));
    
    return 0;
}

int decimaltobinary(int *num){
    int result=0;
    int rest=0;
    int digit=1;
    
    while(*num != 1){
        rest = *num % 2;
        *num = (*num - rest)/2;
        result += rest * digit;
        digit = 10 * digit;

    }
    result += 1*digit;
    
    return result;

}
