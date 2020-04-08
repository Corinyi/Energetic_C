//
//  main.cpp
//  17-1
//
//  Created by 이윤서 on 2020/04/08.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

void maxandmin(int *arr, int size, int **p1, int **p2){
    int *max;
    int *min;
    
    max=arr;
    min=arr;
    
    for(int i=0; i<size;i++){
        max = (*max < arr[i])? &arr[i] : max ;
        min = (*min > arr[i])? &arr[i] : min ;
    }
    *p1 = max;
    *p2 = min;
}

int main(void){
    int * maxptr;
    int * minptr;
    int arr[5]={3,1,5,2,4};
    int size = sizeof(arr)/sizeof(int);
    maxptr=arr;
    minptr=arr;
    for(int i=0; i< size; i++){
        printf("%d 's address is %d\n", arr[i], &arr[i]);
    }
    
    maxandmin(arr,size,&maxptr,&minptr);
    
    printf("Max: %d, %d\n",*maxptr,maxptr);
    printf("Min: %d, %d\n",*minptr,minptr);
    return 0;
}
