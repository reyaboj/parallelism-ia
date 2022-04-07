double MyFunction(int n) {
    double A[n], B[n];
    A[0:n] = B[0:n] = 1.0;

    for (int i = 0; i < n/2; i++) {
        if (i%3 == 0) A[i] += B[i];
    }

    return A[2];
}