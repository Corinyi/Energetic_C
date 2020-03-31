//
//  main.cpp
//  16-1-2
//
//  Created by 이윤서 on 2020/03/31.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int A[2][4]={1,2,3,4,5,6,7,8};
    int B[4][2];
    
    for(int i=0; i<4; i++){
        for (int j=0; j<2; j++) {
            B[i][j]=A[j][i];
        }
    }
    printf("배열 A\n");
    for(int i=0; i<2; i++){
        for (int j=0; j<4; j++) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n배열 B\n");
    for(int i=0; i<4; i++){
        for (int j=0; j<2; j++) {
            printf("%3d", B[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
