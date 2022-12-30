#include <stdio.h>
int main() {
    int c;
    int array[100];
    int counter=-1;
    int d=0;
    int len=0;
    int adjustor1;
    int adjustor2;
    while ((c=getchar())!='\n') {
        if (c==' '||c=='\t'||c=='\n') {d=0;}
        else if (d==0) {++counter; d=1;}
        if (d==1) {++len; adjustor1=0; adjustor2=0;}
        if (d==1) {printf("%c",c);}
        if (d==0) {adjustor1=20-len; adjustor2=50-len;}
        if (d==0) { array[counter]=len; len=0; }
        if (d==0) { printf("%*s",adjustor1," ");}
        if (d==0) {for (int y=0;y<array[counter];++y)  printf("*"); }
        if (d==0) {printf("%*d",adjustor2,array[counter]);}
        if (d==0) {printf("\n");}
        }
    printf("\n");
    }
    

        
    
