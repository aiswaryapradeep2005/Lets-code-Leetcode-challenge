int commonFactors(int a, int b) {
    int i, count = 0;

    for(i = 1; i <= (a < b ? a : b); i++) {
        if(a % i == 0 && b % i == 0) {
            count++;
        }
    }

    return count;
}
