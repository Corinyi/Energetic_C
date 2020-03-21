//
//  main.cpp
//  12-1-2
//
//  Created by Corinyi on 2020/03/21.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int num1 = 10;
    int num2 = 20;
    int * ptr1 = &num1;
    int * ptr2 = &num2;
    int * idx;
    
    (*ptr1)+=10;
    (*ptr2)-=10;
    
    idx = ptr1;
    ptr1 = ptr2;
    ptr2 = idx;
    
    printf("ptr1에 저장된 수 : %d\n", (*ptr1));
    printf("ptr2에 저장된 수 : %d\n", (*ptr2));

    
}
