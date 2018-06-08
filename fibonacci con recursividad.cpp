#include <stdlib.h>
#include <stdio.h>


int fibonacci(int n);

int main(){
    int num;
    printf("ingrese el numero de elentos: ");
    scanf("%d",&num);

for(int i=1;i<=num;i++){
    printf("%d ,",fibonacci(i));


}

    return 0;
}


int fibonacci(int n){
if(n==0||n==1){
    return n;
}else{
    return (fibonacci(n-1)+fibonacci(n-2));
}
}
