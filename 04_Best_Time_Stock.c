 #include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) return 0;

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min_price) {
            // Naya minimum buying price mila
            min_price = prices[i];
        } else if (prices[i] - min_price > max_profit) {
            // Aaj bechne par zyada profit ho raha hai
            max_profit = prices[i] - min_price;
        }
    }

    return max_profit;
}

int main() {
    int n;
    printf("Number of days enter karein: ");
    scanf("%d", &n);

    int prices[n];
    printf("Stock prices enter karein: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    int result = maxProfit(prices, n);
    printf("Maximum Profit: %d\n", result);

    return 0;
}
