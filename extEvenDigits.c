int res = 0, cnt = 0, i;
    while(num > 0){
        if(num%2 == 0){
            int temp = 1;
            for(i=0; i<cnt; i++){
                temp *= 10;
            }
            temp *= num%10;
            res += temp;
        }
        num /= 10;
    }
    return res;