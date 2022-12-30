#include <stdio.h>
#include <math.h>
int main () {
    char a[100];
    char c;
    int i=0;
    int j=0;
    int ans=0;
    while((c=getchar())!='\n') {
        if (c=='A') { a[i] =10;}
        else if (c=='B') { a[i] =11;}
        else if (c=='C') { a[i] =12;}
        else if (c=='D') { a[i] =13;}
        else if (c=='E') { a[i] =14;}
        else if (c=='F') { a[i] =15;}
        else {a[i]=c-'0'; }
        ++i;

    }
    for (int x=i-1;x>=0;--x) {
        ans=ans+(a[x]*pow(16,j));
        ++j;

    }
    printf("%d",ans);
}

