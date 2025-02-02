#include <stdio.h>
float G(float);

float G(float m){
    return 9.8*m;
}
int  main(){
    float f=G(10);printf("The force of attraction on earth is:%.2f",f);
    return 0;
}