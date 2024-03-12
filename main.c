#include <stdio.h>
#include <stdlib.h>

int main(){
	int choice, number1, number2;
	int ongoing = 1;
        printf("Input: \n1\n<a> <b> - NWD(a,b)\n2\n<a> <b> - NWW(a,b)\n3\n<a> - silnia z a, a < 13 && a >= 0\n4\n<a> <b> dwumian Newtona, zasady liczb identyczne jak przy silni\n5\n<a> - zwraca a-ta liczbe z ciagu FIbonacciego\n0\nwyjscie\n");

    while (ongoing) {
        scanf("%d", &choice);
        switch (choice) {
        case 1:
        	scanf("%d %d", &number1, &number2);
        	printf("NWD(%d,%d) = %d\n",number1, number2, NWD(number1, number2));
     		break;
     	case 2:
     		scanf("%d %d", &number1, &number2);
        	printf("NWW(%d,%d) = %d\n",number1, number2, NWW(number1, number2));
     		break;
     	case 3:
     		scanf("%d", &number1);
     		printf("Silnia(%d) = %d\n",number1, silnia(number1));
     		break;
     	case 4:
     		scanf("%d %d", &number1, &number2);
        	printf("dwumianNewtona(%d,%d) = %d\n",number1, number2, dwumianNewtona(number1, number2));
     		break;
     	case 5:
     		scanf("%d", &number1);
     		printf("fibonacci(%d) = %d\n",number1, fibonacciNum(number1));
     		break;
     	case 0:
     		ongoing = 0;   
        	break;
    	}
    }
    return 0;
}
