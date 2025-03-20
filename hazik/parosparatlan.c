int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

// b.)

int is_odd(int n) {
    return !is_even(n);
}
