#include <stdio.h>
#define N 8

int a[ N ]={0};
void bitconv (int t) {
    for (int x=0;x<N;++x) {
        a[x]=0;
    }
    int c=1;
    int i=N-1;
    for (;t!=0;t>>=1) {
        if (t&c) a[i]=1;
        else a[i]=0;
        --i;
    }
}

int main () {
    unsigned int x;
    unsigned int y;
    int p,n;
    unsigned int z;
    scanf("%u%u%d%d",&x,&y,&p,&n);
     printf ("%-25u",y);
    printf("%-5c",'\0');
    bitconv(y);
     for (int x=0;x<N;++x) {
        printf("%d",a[x]);
    }
    printf("\n");
    printf ("%-25u",x);
    printf("%-5c",'\0');
    bitconv(x);
     for (int x=0;x<N;++x) {
        printf("%d",a[x]);
    }
    printf("\n");
    y>>=n;
    y<<=n;
    x<<=N-1-p;
    x>>=N-n;
    z=x|y;
    printf ("%-25u",z);
    printf("%-5c",'\0');
    bitconv(z);
     for (int x=0;x<N;++x) {
        printf("%d",a[x]);
    }


}