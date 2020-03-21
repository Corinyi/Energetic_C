//
//  main.cpp
//  13-1-1
//
//  Created by Corinyi on 2020/03/21.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int num[5]={1,2,3,4,5};
    int * ptr = num;
    
    printf("증가된 배열은 : ");
    for(int i = 0;i<5;i++){
        (*ptr) += 2;
        printf("%d ", *ptr);
        ptr++;
    }
    
    printf("\n");
    
    return 0;
}
