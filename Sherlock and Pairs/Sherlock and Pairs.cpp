// Sherlock and Pairs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long getPairs(vector<int> &a) {
	long long sum = 0;
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++) {
		int c = 1;
		while (i < a.size() && a[i] == a[i - 1]) {
			c++;
			i++;
		}
		sum += ((long long)c *(c - 1));
	}
	return sum;
}

int main()
{
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		cout << getPairs(a) << endl;
	}
    return 0;
}

