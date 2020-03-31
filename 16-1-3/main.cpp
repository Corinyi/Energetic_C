//
//  main.cpp
//  16-1-3
//
//  Created by Corinyi on 2020/03/31.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int score[5][5]={0};
    char name[5][100]={"철희", "철수", "영희", "영수", "총점"};
    char sub[5][100]={"국어", "영어", "수학", "국사","총점"};
    
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++) {
            printf("%s의 %s 점수를 입력하세요: ", &name[i][0],&sub[j][0]);
            scanf(" %d", &score[i][j]);
            }
    }
    
    for(int i=0; i<4; i++){
        for (int j=0; j<4; j++) {
            score[4][i] += score[j][0];
            score[i][4] += score[i][j];
            score[4][4] += score[i][j];
            }
    }
    printf("\n  %8s%7s%8s%7s%7s\n", &sub[0][0], &sub[1][0], &sub[2][0], &sub[3][0], &sub[4][0]);
    for(int i=0; i<5; i++){
        printf("%s", &name[i][0]);
        for (int j=0; j<5; j++) {
            printf("%4d", score[i][j]);
            }
        printf("\n\n");
    }
    
    
    
    return 0;
}
