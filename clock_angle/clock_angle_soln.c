#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]) {

    if(argc < 4) {
        printf("\nLess Arguments!!");
        exit(1);

    }
    int h = atoi(argv[1]);
    int m = atoi(argv[2]);
    int s = atoi(argv[3]);

    

    int second_angle = 6 * s;
    float min_angle = 6 * m + (s * 6 /60);  // Every 60 second, minute hand moves 6 degrees


    float angle = abs(second_angle - min_angle);
    //printf("%d",angle);
    float small_angle = 360-angle<angle ? 360-angle : angle;
    printf("%2.f\n",small_angle);
}



