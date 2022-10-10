int tmp, i;
    for(i=0; i<SIZE; i++){
        tmp = ar[r1][i];
        ar[r1][i] = ar[r2][i];
        ar[r2][i] = tmp;
    }