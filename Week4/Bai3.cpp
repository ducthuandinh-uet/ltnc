void printArrow(int n, bool left) {
    for (int i = n; i >= 1; --i) {
        int A;
        if (left == false) A = (n - i) * 2;
        else A = i - 1;
		for (int j = A; j > 0; --j) {
			cout << " ";
		}
		for (int j = i; j >=1 ; --j) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 2; i <= n; ++i) {
	    int A;
        if (left == false) A = (n - i) * 2;
        else A = i - 1;
		for (int j = A; j > 0; --j) {
			cout << " ";
		}
		for (int j = i; j >= 1; j--) {
			cout << "*";
		}
		cout << endl;
	}
}