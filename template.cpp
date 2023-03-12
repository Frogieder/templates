#include <bits/stdc++.h>

#pragma ide diagnostic ignored "OCUnusedMacroInspection"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#define MANYSETS int n_sets; cin >> n_sets; while(n_sets--)
#define FOR(i, n) for(int (i) = 0; (i) < (n); ++(i))
#define FORD(i, n) for(int (i) = (n); (i) > 0; --(i))
#define FORDZ(i, n) for(int (i) = (n) - 1; (i) >= 0; --(i))

#define IS_ODD(n) ((n) & 1)
#define N_OF_DIGITS(n) floor(log10(n)) + 1
#define X2(n) ((n) << 1)
#define D2(n) ((n) >> 2)

#define MOD 1000000007

#define SWAP(a, b) a ^= b; b ^= a; a ^= b

#define BETTER_IO ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
typedef int_fast32_t fuint;
typedef uint_fast32_t fint;
typedef unsigned int uint;

/**** Fast IO ****/
template<typename T>
inline void writeln(T x)
{
    int i = 20;
    char buf[21];
    // buf[10] = 0;
    buf[20] = '\n';

    do
    {
        buf[--i] = x % 10 + '0';
        x /= 10;
    } while (x);
    do
    {
        putchar(buf[i]);
    } while (buf[i++] != '\n');
}

template<typename T>
inline void write(T x)
{
    int i = 20;
    char buf[21];
    // buf[10] = 0;
    buf[20] = ' ';

    do
    {
        buf[--i] = x % 10 + '0';
        x /= 10;
    } while (x);
    do
    {
        putchar(buf[i]);
    } while (buf[i++] != ' ');
}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-narrowing-conversions"
template<typename T>
inline T readInt()
{
    T n = 0, s = 1;
    char p = getchar();
    if (p == '-')
        s = -1;
    while ((p < '0' || p > '9') && p != EOF && p != '-')
        p = getchar();
    if (p == '-')
        s = -1, p = getchar();
    while (p >= '0' && p <= '9')
    {
        n = (n << 3) + (n << 1) + (p - '0');
        p = getchar();
    }

    return n * s;
}

template<typename T>
inline T readUInt()
{
    T n = 0;
    char p = getchar();
    while ((p < '0' || p > '9') && p != EOF)
        p = getchar();
    while (p >= '0' && p <= '9')
    {
        n = (n << 3) + (n << 1) + (p - '0');
        p = getchar();
    }

    return n;
}
#pragma clang diagnostic pop

/************************************/

int main() {

	return 0;
}
