#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argv[]) {

    if(argc < 2) {
        printf("\nLess Arguments!!");
        exit(1);

    }
    double n = atoi(argv[1]);

    double base = log2l(n);
    //printf("\n%lf",base);
    int diff = n-floor(base);
    printf("%d\n",diff);

}