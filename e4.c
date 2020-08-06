#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int cnt=0;
    int i;
    int ran;
    char str[10];

    printf("Who are you?\n");
    scanf("%s",str);
    printf("Hello, %s!\n",str);

    srand((int)time(NULL));
    printf("Tosiing a coin...\n");
    for(i=0;i<3;i++){
        printf("Round %d: ",i+1);
        ran = rand()%2;
        if(ran==0){
            printf("Heads\n");
            cnt++;
        }
        else if(ran==1) printf("Tails\n");
    }
    printf("Heads: %d, Tails: %d\n",cnt,3-cnt);
    if(cnt>=2) printf("%s won.\n",str);
    else printf("%s lose.\n",str);
    return 0;
}