#include <vector>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

clock_t tStart;
void testing(const vector<int>&, int n);

int main() {
	int n;
	printf("Initializing...\n");
	vector<int> minor_tests(3e4);
	for (int i = 0; i < minor_tests.size(); ++i) {
		minor_tests[i] = rand() % 100 + 1;
	}
	vector<int> major_tests(3e5);
	for (int i = 0; i < major_tests.size(); ++i) {
		major_tests[i] = rand() % 100 + 1;
	}
	printf("Initializing complete! ");
	printf("Time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);


	printf("Input iterations of test (default value = 3): ");
	scanf("%d", &n);

	printf("Minor tests results:\n");
	testing(minor_tests, n);

	printf("Major tests results:\n");
	testing(major_tests, n);

	while(1){
		continue;
	}
}

double int_testing(const vector<int>& values, int n = 3) {
	printf("initializing int tests\n");
	tStart = clock();
	vector<int> a(values.size());
	for (int i = 0; i < values.size(); ++i) {
		a[i] = values[i];
	}
	double avg = 0.0;
	printf("int init time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	for (int it = 0; it < n; ++it) {
		tStart = clock();
		int l = 100;
		for (int i = 0; i < a.size(); ++i)
			for (int j = 0; j < a.size(); ++j) {
				l *= a[j];
				l /= 100;
			}
		//printf("int calc time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
		avg += (double)(clock() - tStart) / CLOCKS_PER_SEC;
		printf("test#%d complete\n", it + 1);
	}
	avg /= (double)(n);
	return avg;
}
double ll_testing(const vector<int>& values, int n = 3) {
	printf("initializing long long tests\n");
	tStart = clock();
	vector<long long> a(values.size());
	for (int i = 0; i < values.size(); ++i) {
		a[i] = values[i];
	}
	double avg = 0.0;
	printf("long long init time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	for (int it = 0; it < n; ++it) {
		tStart = clock();
		long long l = 100ll;
		for (int i = 0; i < a.size(); ++i)
			for (int j = 0; j < a.size(); ++j) {
				l *= a[j];
				l /= 100ll;
			}
		//printf("long long calc time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
		avg += (double)(clock() - tStart) / CLOCKS_PER_SEC;
		printf("test#%d complete\n", it + 1);
	}
	avg /= (double)(n);
	return avg;
}
double float_testing(const vector<int>& values, int n = 3) {
	printf("initializing float tests\n");
	tStart = clock();
	vector<float> a(values.size());
	for (int i = 0; i < values.size(); ++i) {
		a[i] = values[i];
	}
	double avg = 0.0;
	printf("float init time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	for (int it = 0; it < n; ++it) {
		tStart = clock();
		float l = 100.0f;
		for (int i = 0; i < a.size(); ++i)
			for (int j = 0; j < a.size(); ++j) {
				l *= a[j];
				l /= 100.0f;
			}
		//printf("float calc time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
		avg += (double)(clock() - tStart) / CLOCKS_PER_SEC;
		printf("test#%d complete\n", it + 1);
	}
	avg /= (double)(n);
	return avg;
}
double double_testing(const vector<int>& values, int n = 3) {
	printf("initializing double tests\n");
	tStart = clock();
	vector<double> a(values.size());
	for (int i = 0; i < values.size(); ++i) {
		a[i] = values[i];
	}
	double avg = 0.0;
	printf("double init time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	for (int it = 0; it < n; ++it) {
		tStart = clock();
		double l = 100.0;
		for (int i = 0; i < a.size(); ++i)
			for (int j = 0; j < a.size(); ++j) {
				l *= a[j];
				l /= 100.0;
			}
		//printf("double calc time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
		avg += (double)(clock() - tStart) / CLOCKS_PER_SEC;
		printf("test#%d complete\n", it + 1);
	}
	avg /= (double)(n);
	return avg;
}
double int128_testing(const vector<int>& values, int n = 3) {
	printf("initializing int128 tests\n");
	tStart = clock();
	vector<__int128> a(values.size());
	for (int i = 0; i < values.size(); ++i) {
		a[i] = values[i];
	}
	double avg = 0.0;
	printf("int128 init time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	for (int it = 0; it < n; ++it) {
		tStart = clock();
		__int128 l = 100;
		for (int i = 0; i < a.size(); ++i)
			for (int j = 0; j < a.size(); ++j) {
				l *= a[j];
				l /= (__int128)100;
			}
		//printf("int128 calc time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
		avg += (double)(clock() - tStart) / CLOCKS_PER_SEC;
		printf("test#%d complete\n", it + 1);
	}
	avg /= (double)(n);
	return avg;
}

void testing(const vector<int>& values, int n) {
	double intTime, llTime, floatTime, doubleTime, int128Time;

	intTime = int_testing(values, n);
	printf("int avg time: %.2fs\n", intTime);

	llTime = ll_testing(values, n);
	printf("long long avg time: %.2fs\n", llTime);

	floatTime = float_testing(values, n);
	printf("float avg time: %.2fs\n", floatTime);

	doubleTime = double_testing(values, n);
	printf("double avg time: %.2fs\n", doubleTime);

	int128Time = int128_testing(values, n);
	printf("int128 avg time: %.2fs\n", int128Time);

	printf("-----------------------------------\n");
	printf("Results:\n");
	printf("Int: %.2fs\n", intTime);
	printf("Long long: %.2fs\n", llTime);
	printf("Float: %.2fs\n", floatTime);
	printf("Double: %.2fs\n", doubleTime);
	printf("Int128: %.2fs\n", int128Time);
	printf("-----------------------------------\n");
}
