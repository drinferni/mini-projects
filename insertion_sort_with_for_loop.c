#include <stdio.h>
int main() {
    int temp;
    int a[]={12,23,3,432,1,34,27,778,56,456};
    for (int x=0;x<10;++x){
        temp=a[x];
        for (int y=0;y<x;++y) {
            if (a[y]>a[x]) {
                for (int z=x;z>y;--z) {
                    a[z]=a[z-1];
                    }
                a[y]=temp;
                break;
            }
        }
    }
        
    
    for (int x=0;x<10;++x) {
        printf("%d\t",a[x]);
    }

}