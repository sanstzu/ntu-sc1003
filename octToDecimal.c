strcpy(longStr,str[0]);
    strcpy(shortStr,str[0]);
    int i;
    for(i=1; i<size; i++){
        if(strlen(str[i]) > strlen(longStr)) strcpy(longStr,str[i]);
        if(strlen(str[i]) < strlen(shortStr)) strcpy(shortStr,str[i]);
    }