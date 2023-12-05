int minimizedStringLength(char * s){
    int arr[26] = {0};
    int n = strlen(s);
    int count = 0;

    for (int i = 0; i < n; i++) {
        arr[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) count++;
    }

    return count;
}
