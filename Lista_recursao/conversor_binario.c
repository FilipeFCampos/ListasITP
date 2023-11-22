#include <stdio.h>
#include <math.h>

long long int binary(int num, double trys){
    if(num == 1){
        return pow(10, trys);
    }
    else{
        trys += 1;
        return (num % 2 * pow(10, trys - 1)) + binary(num / 2, trys);
    }
}

int main(){
    long double trys = 0;
    long long int num = 0;
    scanf("%i", &num);
    if(num == 0){
        printf("%i", 0);
    }
    else{
    printf("%lli", binary(num, trys));
    }
    return 0;
}
