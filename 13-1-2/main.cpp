//
//  main.cpp
//  13-1-2
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
        *(ptr+i) += 2;
        printf("%d ",num[i]);
    }
    
    printf("\n");
    
    return 0;
}

