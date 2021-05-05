#include <stdio.h>
float volume(float, float);

int main(){
    float radius, height, vol;
    printf("Type radius and height : ");
    scanf("%f %f", &radius, &height);
    vol = volume(radius, height);
    printf("\n%f",vol);
    return 0;
}

float volume(float radius, float height){
    return 3.14*radius*radius*height;
}