#include <stdio.h>

int main(){
    int i = 5;
    int array[5] = {1, 2, 3, 4, 5};
    
    if(0){
        while(i++){
            printf("%d", array[i]);
            if (i == 5){
                break;
            }
        }
    } else{
        for (i = 0; i < 5; i++){
            if(i%2 == 0){
                printf("%d", array[i]*2);
            }
        }
    }
    return 0;
}	
