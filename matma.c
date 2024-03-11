int NWD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int NWW(int a, int b) {
    return (a * b) / NWD(a, b);
}

int silnia(int a){
    int result = 1;
    for(int i=1;i<=a;i++){
        result *= i;
    }

    return result;
}

int power(int x, int n){
    int result = 1;
    for(int i=0;i<n;i++){
        result*= x;
    }
    return result;
}

double mcLaurenEuler(int x){
    double result = 0.0f;
    for(int n = 0; n <= 5; n++){
        double sumaElement = (double)power(x,n);
        sumaElement /= silnia(n);
        result += sumaElement;
    }
    return result;
}