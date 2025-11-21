#include <stdio.h>
float taxiFare(float km){
    if(km<=0){
        return 0;
    }
    else if(km<=5) {
        return 10*0.1 + taxiFare(km-0.1);
    }
    else
        return 8*0.1 + taxiFare(km-0.1);
    
}
int main() {
    float km;
    printf("Enter total kilometers:");
    scanf("%f",&km);
    printf("Total fare for %.02f km is %.02f",km,taxiFare(km));
    return 0;
}
