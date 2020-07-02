//
//  main.c
//  20-1
//
//  Created by Corinyi on 2020/07/02.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

void printarr(int (*arr)[4],int size){
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            printf(" %2d", arr[i][j]);
        }
        printf("\n");
    }
    return;
}

int rotate(int (*arr)[4]){
    int temp[4][4]={0};
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            temp[j][3-i]=arr[i][j];
        }
    }
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            arr[i][j]=temp[i][j];
        }
    }
    return (*arr)[4];
}

int main(void){
    int table[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    
    for(int i=0;i<4;i++){
        printarr(table, sizeof(table[0])/sizeof(int));
        printf("\n");
        rotate(table);
    }
    return 0;
}
