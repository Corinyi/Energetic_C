//
//  main.cpp
//  11-2-3
//
//  Created by Corinyi on 2020/03/20.
//  Copyright © 2020 Corinyi. All rights reserved.
//

# include <stdio.h>

int main(void){
    char voca[40];
    int len=0;
    int max=0;
    
    printf("영단어를 입려하세요: ");
    scanf("%s", voca);
    
    while(voca[len] != '\0'){
        len++;
    }
    
    for(int i=0;i<len;i++){
        max = (max > voca[i]) ? max : voca[i];
    }
    
    
    
    
    printf("아스키 코드가 가장 큰 문자는: %c \n아스키 코드 값은: %d \n", max,max);
    
    return 0;
}
