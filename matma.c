int NWD(int a, int b) {
    if(a==b) return a;
    else if(a==0 || b==0) return 0;
    else return (a<b) ? NWD(a,b-a) : NWD(a-b,b);
}

int NWW(int a, int b) {
    if(a==0 || b==0) return 0;
    return (a * b) / NWD(a, b);
}

unsigned int silnia(int number){
    if(number > 12 || number < 0){
        printf("Nieprawidlowa liczba\n");
        return 0;
    }
    unsigned int result = 1;
    for(int i=1;i<=number;i++){
        result *= i;
    }
    return result;
}

unsigned int dwumianNewtona(int up, int down){
    if(up > 12 || down > 12 || up < down || up < 0 || down < 0){
        printf("Nieprawidlowa liczba\n");
        return 0;
    }
    return(silnia(up)/(silnia(down) * silnia(up-down)));


}

unsigned int fibonacciNum(int number){
	if(number == 0 || number==1) return 1;
	else return fibonacciNum(number-1) + fibonacciNum(number-2);	
}
