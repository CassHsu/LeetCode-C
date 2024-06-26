int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int ans = 0;
    int count = tickets[k];
    
    for (int r = 0; r < count; r++) {
        for (int c = 0; c < ticketsSize; c++) {
            if (r == count - 1 && c > k) break;
            if (tickets[c] > 0) {
                tickets[c]--;
                ans++;
            }
        }
    }
    
    return ans;
}
