int fib(int n) {
    if (n <= 1) return n;

    long long F[2][2] = {{1, 1}, {1, 0}};
    long long R[2][2] = {{1, 0}, {0, 1}};

    while (n > 0) {
        if (n % 2 == 1) {
            long long a = R[0][0]*F[0][0] + R[0][1]*F[1][0];
            long long b = R[0][0]*F[0][1] + R[0][1]*F[1][1];
            long long c = R[1][0]*F[0][0] + R[1][1]*F[1][0];
            long long d = R[1][0]*F[0][1] + R[1][1]*F[1][1];
            R[0][0]=a; R[0][1]=b;
            R[1][0]=c; R[1][1]=d;
        }

        long long a = F[0][0]*F[0][0] + F[0][1]*F[1][0];
        long long b = F[0][0]*F[0][1] + F[0][1]*F[1][1];
        long long c = F[1][0]*F[0][0] + F[1][1]*F[1][0];
        long long d = F[1][0]*F[0][1] + F[1][1]*F[1][1];
        F[0][0]=a; F[0][1]=b;
        F[1][0]=c; F[1][1]=d;

        n /= 2;
    }

    return R[0][1];
}
