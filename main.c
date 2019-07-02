#include <stdio.h>
#include <stdlib.h>
void myfunction(int x,int y,int k){
    for(int k=1;k<=x;k++){
    if(k%y==0){
        k++;
    }
        printf("%i ",k);
}
 return 0;
}
int main()
{int x,y,k;
scanf("%i",&x);
scanf("%i",&y);
myfunction(x,y,k);
    return 0;
}
