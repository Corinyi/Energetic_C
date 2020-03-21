//
//  main.cpp
//  13-1-3
//
//  Created by Corinyi on 2020/03/21.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int num[5]={1,2,3,4,5};
    int * ptr = &num[4];
    int sum=0;
    
    printf("배열의 합은 : ");
    for(int i = 0;i<5;i++){
        ptr--;
        sum+= *ptr;
    }
    
    printf("%d \n",sum);
    
    return 0;
}
