#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]) {

    if(argc < 2) {
        printf("\nLess Arguments!!");
        exit(1);

    }
    int num = atoi(argv[1]);
    //printf("%d",num);
    int total_fibb_seq = (num*3)+1;
    long long int n1 = 0, n2 = 1;
    long long int tn = n1+n2;
    if(num == 0) { 
        printf("\n%lld",n1);
        return 0;
    }
    for(int i=3;i<total_fibb_seq;i++) {
        //printf("\n %d ",tn);
        n1 = n2;
        n2 = tn;
        tn = n1+n2;
    }
    printf("\n%lld:",tn);

}