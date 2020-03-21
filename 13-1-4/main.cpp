//
//  main.cpp
//  13-1-4
//
//  Created by Corinyi on 2020/03/21.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int num[6]={1,2,3,4,5,6};
    int * fptr = num;
    int * rptr = &num[5];
    int temp;

    printf("원래 배열: ");
    for(int i=0;i<6;i++){
        printf("%d", num[i]);
    }
    
    for(int i=0;i<3;i++){
        temp = *rptr;
        *rptr = *fptr;
        *fptr = temp;
        
        fptr++;
        rptr--;
    }
    printf("\n바뀐 배열: ");
    for(int i=0;i<6;i++){
        printf("%d", num[i]);
    }
    
    printf("\n");
    return 0;
}
