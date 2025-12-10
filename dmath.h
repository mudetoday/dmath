#ifndef DMATH_H
#define DMATH_H

int i_sqrt(int a)
{
        int x;
        x = a / 2;
        for (int i = 0; i < 10; i++) {
                x = (x + a / x) / 2;
        }
        return x;
}

int i_midl(int c, int a[])
{
	int m = 0;
	for (int i = 0; i < c; i++) {
		m = m + a[i];
	}
	m = m / c;
	return m;
}

#endif
