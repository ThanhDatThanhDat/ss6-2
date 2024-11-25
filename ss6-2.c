#include <stdio.h>

int main() {
    int num, chan = 0, le = 0;
    int i;
	 
    for ( i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &num);
        
       
        if (num % 2 == 0) {
            chan++;
        } else {
            le++;
        }
    }

  
    printf("So luong so chan: %d\n", chan);
    printf("So luong so le: %d\n", le);

    return 0;
}

