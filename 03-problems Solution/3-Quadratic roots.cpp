vector<int> quadraticRoots(int a, int b, int c) {
    // code here
    int D = (b * b) - (4 * a * c);

    if (D == 0) {
        vector<int> quad_roots(2);
        quad_roots[0] = -b / (2 * a);
        quad_roots[1] = -b / (2 * a);
        return quad_roots;
    }
    else if (D < 0) {
        vector<int> quad_roots(1, -1);
        return quad_roots;
    }
    else {
        int r1 = floor((-b + sqrt(D)) / (2 * a));
        int r2 = floor((-b - sqrt(D)) / (2 * a));

        vector<int> quad_roots(2);
        quad_roots[0] = max(r1, r2);
        quad_roots[1] = min(r1, r2);
        return quad_roots;

    }
}