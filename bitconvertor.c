#include <stdio.h>
#define N 8
//make a a global variable
int a[N]={0};
void bitconv (int t) {
    int c=1;
    int i=N-1;
    for (;t!=0;t>>=1) {
        if (t&c) a[i]=1;
        else a[i]=0;
        --i;
    }
}

int main () {
    int t;
    scanf("%d",&t);
    bitconv(t);
    for (int x=0;x<N;++x) {
        printf("%d",a[x]);
    }
}