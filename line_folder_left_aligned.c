#include <stdio.h>
#define LEN 100
int main() {
    char a[10000];
    int b[1000];
    int d[1000];
    char c;
    int i=0;
    int j=0;
    int k=0;
    int len=LEN;
    while ((c=getchar())!='0'){
        if (c=='\n') c='\0';
        a[i]=c;
        if (c==' ') {b[j]=i;++j;}
        ++i;
    }
    for (int x=0;x<j-1;++x){
        if (b[x]<=len) {
            if (b[x+1]>=len) {
                d[k]=b[x+1];
                ++k;
                len=len+LEN;
            }
        }
    }
    printf("\n\n");
    for (int x=0;x<i;++x) {
        for (int y=0;y<k;++y) {
            if (x==d[y]) {
                a[x]='\n';
            }
        }
        printf("%c",a[x]);
    }

    printf("\n");
    for (int x=0;x<j;++x) {
        printf("%d\t",b[x]);
    }
    printf("\nkllkjkljl\n");
    for (int x=0;x<k;++x) {
        printf("%d\t",d[x]);
    }

}