#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *repetidor( char *s, int n );

int main(){
    printf("Digite o tamanho da string: ");
    
    int n; scanf("%d", &n);
    char s[n];

    printf("Digite a string: ");
    scanf("%s", s);
    
    int k;
    printf("Digite a quantidade de vezes que voce quer: ");
    scanf("%d", &k);

    char *p = repetidor(s, k);
    printf("%s\n", p);

    free(p);
    return 0;
}

char *repetidor(char *s, int k){
    char *p;
    p = malloc((strlen(s)*k) + 1);
    int b = 0;
    for(int i = 0;i < k;i++){
        for(int j = 0;j < strlen(s);j++){
            p[b] = s[j];
            b++;
        }
    }

    p[k*strlen(s)+1] = 0;
    
    return p;
}