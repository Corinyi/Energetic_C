//
//  main.cpp
//  15-1
//
//  Created by Corinyi on 2020/03/27.
//  Copyright © 2020 Corinyi. All rights reserved.
//

# include <stdio.h>

void odd(int *num);
void even(int *num);

int main(void){
    int arr[10]={0};
    
    printf("총 10개의 숫자 입력\n");
    for(int i=0; i<10; i++){
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    
    odd(arr);
    even(arr);
    
    return 0;
}

void odd(int *num){
    int comma=0;
    
    printf("홀수 출력:");
    
    for(int i=0;i<10;i++){
        if((num[i]%2) != 0 ){
            
            if(comma == 0){//콤마 자리 맞추기
                printf(" %d", num[i]);
                comma = 1;
            }
            else
                printf(", %d", num[i]);
        }
    }
    
    printf("\n");
}

void even(int *num){
    int comma=0;
    
    printf("홀수 출력:");
    
    for(int i=0;i<10;i++){
        if((num[i]%2) == 0 ){
            
            if(comma == 0){//콤마 자리 맞추기
                printf(" %d", num[i]);
                comma = 1;
            }
            else
                printf(", %d", num[i]);
        }
    }
    
    printf("\n");
}
