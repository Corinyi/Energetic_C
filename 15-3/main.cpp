//
//  main.cpp
//  15-3
//
//  Created by Corinyi on 2020/03/27.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int arr[10]={0};
    int temp[10]={0};

    int *fptr=arr;
    int *rptr=&arr[9]; // arr[10] 이라고 하면 메모리 에러....
    
    printf("총 10개의 숫자 입력\n");
    
    for (int i=0; i<10; i++) {
        printf("입력: ");
        scanf(" %d", &temp[i]);
        
        if(temp[i] % 2 ==1 ){
            *fptr = temp[i];
            fptr ++;
        }
        else{
            *rptr = temp[i];
            rptr --;
        }
        
    }
    
    printf("배열 요소의 출력:");
    for(int j=0; j<10;j++){
        printf(" %d", arr[j]);
    }
    printf("\n");
    
    return 0;
}
