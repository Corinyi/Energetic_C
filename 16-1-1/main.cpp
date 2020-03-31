//
//  main.cpp
//  16-1-1
//
//  Created by Corinyi on 2020/03/31.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int arr[3][9]={0};
    
    for(int i=0; i<3; i++){
        for (int j=0; j<9; j++) {
            arr[i][j] = (2+i)*(j+1);
        }
    }
    for(int i=0; i<3; i++){
        for (int j=0; j<9; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
