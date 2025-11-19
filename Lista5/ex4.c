#include <stdio.h>
#include <stdlib.h>

void calcula_hora(int totalMinutos, int *ph, int *pm) {
  (*pm) = totalMinutos % 60;
  (*ph) = totalMinutos / 60;
}

int main () {
  int totalMinutos, ph, pm;

  printf("Quantos minutos se passaram desde a meia-noite? \n");
  scanf("%d", &totalMinutos);

  calcula_hora(totalMinutos, &ph, &pm);
  
  if(ph < 10 && pm < 10) printf("Agora é 0%d:0%d \n", ph, pm);
  else if(pm < 10) printf("Agora é %d:0%d \n", ph, pm);
  else if(ph < 10) printf("Agora é 0%d:%d \n", ph, pm);
  else if(ph < 10 && pm < 10) printf("Agora é 0%d:0%d \n", ph, pm);
  else printf("Agora é %d:%d \n", ph, pm);
}
