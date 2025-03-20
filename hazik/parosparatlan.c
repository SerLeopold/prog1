int paros(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

// b.)

int paratlan(int n) {
    return !paros(n);
}
