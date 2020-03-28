//
//  main.cpp
//  15-5
//
//  Created by Corinyi on 2020/03/28.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

void Dessort(int *arr, int len );
int main(void){
    int arr[7]={0};
    printf("내림차순 Bubble Sort\n");
    for(int i=0; i<7; i++){
        printf("입력");
        scanf(" %d", &arr[i]);
    }
    Dessort(arr, sizeof(arr)/sizeof(int));
    
    for(int i=0; i<7; i++){
        printf("%d", arr[i]);
    }

    return 0;
}

void Dessort(int *arr, int len){
    int temp;
    for(int i=0; i<len; i++){
        for(int j=0; j<len-1;j++){
            if(arr[j]<=arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}
