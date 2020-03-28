//
//  main.cpp
//  15-4
//
//  Created by Corinyi on 2020/03/27.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>
int strlen(char *str);
int main(void){
    char str[50];
    int i=0;
    int len;
    int def=0;

    printf("문자열 입력: ");
    scanf(" %s", str);
    len = strlen(str);
    
    while(i<(len-(len%2))/2){
        if(str[i] == str[len-i-1]){ // 주의! len-i 만 하면 배열 밖이다...
            i++;
        }
        else{
            printf("회문이 아닙니다.\n");
            def = 1;
            break;
        }
    }
    if(def==0)
    printf("회문입니다.\n");
}
int strlen(char *str){
    int strlen=0;
    while(str[strlen]!='\0'){
        strlen ++;
    }
    return strlen;
}
