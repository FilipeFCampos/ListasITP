#include <stdio.h>

void hanoi(int discos, char torre1, char torre2, char torre3, int *mov){
  if(discos == 1){
    *mov += 1;
    printf("Move o disco em %c para %c\n", torre1, torre3);
    return;
  }
  else{
    hanoi(discos - 1, torre1, torre3, torre2, mov);
    printf("Move o disco em %c para %c\n", torre1, torre3);
    *mov += 1;
    hanoi(discos - 1, torre2, torre1, torre3, mov);
  }
}

int main() {
    int discos = 0, mov = 0;
    scanf("%i", &discos);
    hanoi(discos, '1', '2', '3', &mov);
    printf("Total de movimentos: %i", mov);
    return 0;
}
