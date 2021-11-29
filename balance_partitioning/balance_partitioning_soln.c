#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char* argv[]) {

    if(argc < 2) {
        printf("\nLess Arguments!!");
        exit(1);

    }
    int n = atoi(argv[1]);

    /*double base = log2l(n);
    printf("\n%lf",base);
    int diff = n-floor(base);
    printf("%d\n",diff);*/

    int index = ceil(n*2/3) -1;

    int a1=4,d=2,n1=index-1;
    int s1 = (n1/2)*(2*a1+(n1-1)*d);

    int a2 = (2*index)+4 , n2 = n-index;
    int s2 = (n2/2)*(2*a2+(n2-1)*d);

    int diff = abs(s1-s2);
    int cal_min_sum = 0;
    while(cal_min_sum < diff) {
        //printf("%d ",diff);
        diff = cal_min_sum==0 ? diff : cal_min_sum;
        index += 1;
        n1=index-1;
        s1 = (n1/2)*(2*a1+(n1-1)*d);

        a2 = (2*index)+4 ;
        n2 = n-index;
        s2 = (n2/2)*(2*a2+(n2-1)*d);
        
        cal_min_sum = abs(s1-s2);
        //printf(" %d\n",cal_min_sum);

    }
    printf("%d\n",index);

}