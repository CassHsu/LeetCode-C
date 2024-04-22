int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int seconds = 0;
    int queue[ticketsSize];
    for (int i = 0; i < ticketsSize; i++)
        queue[i] = 0;

    while (queue[k] < tickets[k]) {
        for (int i = 0; i < ticketsSize; i++) {
            if (queue[k] == tickets[k] && i > k)
                break;

            if (queue[i] < tickets[i]) {
                queue[i] += 1;
                seconds += 1;
            }
        }
    }
    return seconds;
}
