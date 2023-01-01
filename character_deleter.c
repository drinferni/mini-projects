#include <stdio.h>
int main () {
    char s[1000];
    char r[100];
    char c;
    int i=0;
    int j=0;
    int d=0;
    int n=0;
    while ((c=getchar())!='0') {
            r[i++]=c;
    }
    scanf("\n");
    while ((c=getchar())!='0') {
        d=0;
        for (int z=0;z<i;++z) {
            if (c==r[z]) d=1;
        }
        if (d==0) s[j++]=c;
        if (d==1) ++n;
            
    }
    for (int x=0;x<j;++x) {
        printf("%c",s[x]);
    }
    printf("\n%d out of %d letters removed",n,j+n);
}