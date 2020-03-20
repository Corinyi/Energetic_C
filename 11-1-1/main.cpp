//
//  main.cpp
//  11-1-1
//
//  Created by 이윤서 on 2020/03/19.
//  Copyright © 2020 LEEYOUNSEO. All rights reserved.
//

#include <stdio.h>

int main(void){
    
    int num[5]={0};
    int max, min, sum;
    
    for(int i=0;i<5;i++){
        printf("정수를 입력하세요: ");
        scanf(" %d", &num[i]);
    }
    
    max = num[0];
    min = num[0];
    sum = 0;
    
    for(int i=0;i<5;i++){
        max = (max >= num[i]) ? max : num[i];
        min = (min <= num[i]) ? min : num[i];
        sum += num[i];
    }
    
    printf("최댓값: %d, 최솟값: %d, 합계: %d \n", max, min, sum);
    
    return 0;
}
