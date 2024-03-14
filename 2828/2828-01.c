bool isAcronym(char ** words, int wordsSize, char * s){
    char str[wordsSize + 1];
    for (int i = 0; i < wordsSize; i++) {
        str[i] = words[i][0];
    }
    str[wordsSize] = '\0';
    return !strcmp(str, s);
}
