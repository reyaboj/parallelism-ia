double MyFunction(int n) {
    double A[n], B[n];
    A[0:n] = B[0:n] = 1.0;

    for (int i = 0; i < n; i++) {
        B[i] *= (double)i;
        A[i] += B[i];
    }
    
    return A[2];
}