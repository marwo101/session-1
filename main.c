#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,y,k,u;
scanf("%i",&x);
scanf("%i",&y);
for(int k=1;k<=x;k++){
    if(k%y==0){
        k++;
    }
    printf("%i ",k);

}

    return 0;
}
