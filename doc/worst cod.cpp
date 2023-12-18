#include <iostream>
using namespace std;
clock_t time_req;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 40;
    cout << fib(n);
    getchar();
    cout << "runtime = " << clock()/1000.0 << endl;
    time_req = clock();
    cout << (float)time_req/CLOCKS_PER_SEC << "seconds" << endl;
    return 0;

}