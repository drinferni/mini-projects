#include <stdio.h>
int main () {
    char c;
    int a[8]={0};
    int b[8]={0};
    int line=0;
    while((c=getchar())!='0') {
        if (c=='\n') ++line;
        if (c=='(') { ++a[0]; b[0]=line;}
        if (c==')') { ++a[1]; b[1]=line;}
        if (c=='{') { ++a[2]; b[2]=line;}
        if (c=='}') { ++a[3]; b[3]=line;}
        if (c=='[') { ++a[4]; b[4]=line;}
        if (c==']') { ++a[5]; b[5]=line;}
        if (c=='\'') { ++a[6]; b[6]=line;}
        if (c=='\"') { ++a[7]; b[7]=line;}
    }
    if (a[0]!=a[1]) {if (a[0]>a[1]) printf("ERROR in line %d!!\n",b[0]);
                    else printf("ERROR in line %d!!\n",b[1]);}

    if (a[2]!=a[3]) {if (a[2]>a[3]) printf("ERROR in line %d!!\n",b[2]);
                    else printf("ERROR in line %d!!\n",b[3]);}

    if (a[4]!=a[5]) {if (a[4]>a[5]) printf("ERROR in line %d!!\n",b[4]);
                    else printf("ERROR in line %d!!\n",b[5]);}

    if (a[6]%2!=0 && a[6]!=0) printf("ERROR in line %d!!\n",b[6]);
    
    if (a[7]%2!=0 && a[7]!=0) printf("ERROR in line %d!!\n",b[7]);
    


}