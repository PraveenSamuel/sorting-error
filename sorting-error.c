//
//  sorting-error.c
//  hello
//
//  Created by Praveen Samuel . J on 13/07/18.
//  Copyright © 2018 Praveen Samuel . J. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *num = (int *) malloc(sizeof(int));
    int *emp = (int *) malloc(sizeof(int));
    int i=0;
    scanf("%d",num);
    int *arr = (int *) malloc(sizeof(int) * *num);
    while(i<*num){
        scanf("%d",&arr[i]);
        ++i;
    }
    while (i<*num) {
        int j=i+1;
        while (j<*num) {
            if(arr[i]>arr[j]){
                *emp = arr[i];
                arr[i] = arr[j];
                arr[j] = *emp;
            }
            ++j;
        }
        ++i;
    }
    while(i<*num){
        printf("%d",arr[i]);
        ++i;
    }
    free(num);
    free(arr);
    free(emp);
    return 0;
}
