#include <stdio.h>

int main(){
    char str[1000], strInversa[1000];
    int n, cont, i, k;

    scanf("%d", &n);
    getchar();

  
    for(k=0 ; k<n ; k++){
        for (i = 0; i < 1000; i++) {
            str[i] = getchar();
            if (str[i] == '\n' || str[i] == EOF) {
                str[i] = '\0'; 
                break;
            }
        }
        cont=0;
        for(i=0; str[i]!='\0' ; i++){
        cont++;
        }
        for(i=0 ; i<cont ; i++){
            if(str[i]>='a' && str[i]<'z'){
                str[i]= str[i]+3;       
            }
            if(str[i]>='A' && str[i]<'Z'){
                str[i]= str[i]+3;
            }
        }
        for(i=0 ; i<cont ; i++){
            strInversa[i] = str[cont-i-1];
        }

        for(i=cont/2 ; i<=cont ; i++){
            strInversa[i] = strInversa[i]-1;
        }

        for(i=0 ; i<cont ; i++){
            printf("%c", strInversa[i]);
        }
        printf("\n");
    }
    return 0;
}
