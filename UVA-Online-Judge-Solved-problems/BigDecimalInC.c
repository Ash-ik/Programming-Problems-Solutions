#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define gc getchar
#define pc putchar
#define maxNumOfDigits 2500

typedef struct {
	int d[maxNumOfDigits], s, e;
} decimal_num;

void shift(decimal_num *x, int s)
{
	int i, j;

	x->e -= s;

	for (i = maxNumOfDigits - 1 - s, j = maxNumOfDigits - 1; i >= 0;)
		x->d[j--] = x->d[i--];

	while (j >= 0)
		x->d[j--] = 0;
}

void denorm(decimal_num *x, decimal_num *y)
{
	if (x->e > y->e)
		shift(x, x->e - y->e);
	else if (y->e > x->e)
		shift(y, y->e - x->e);
}

void norm(decimal_num *x)
{
	int i, j;

	for (i = maxNumOfDigits; i > 0 && x->d[i - 1] == 0; i--);

	if (!i) {
		x->s = 1;
		x->e = 0;
		return;
	}

	for (i = 0; i < maxNumOfDigits && x->d[i] == 0; i++);

	if (!i)
		return;

	x->e += i;

	for (j = 0; i < maxNumOfDigits;)
		x->d[j++] = x->d[i++];

	while (j < maxNumOfDigits)
		x->d[j++] = 0;
}

void i_add(decimal_num *z, decimal_num *x, decimal_num *y)
{
	int i, c;

	for (c = 0, i = 0; i < maxNumOfDigits; i++) {
		c += x->d[i] + y->d[i];
		z->d[i] = c % 10;
		c /= 10;
	}

	z->e = x->e;
}

int i_cmp(decimal_num *x, decimal_num *y)
{
	int i;

	for (i = maxNumOfDigits - 1; i >= 0; i--)
		if (x->d[i] != y->d[i]) return (x->d[i] - y->d[i]);

	return 0;
}

void i_sub(decimal_num *z, decimal_num *x, decimal_num *y)
{
	int i, c;

	if (i_cmp(x, y) < 0) {
		i_sub(z, y, x);
		z->s = -1;
		return;
	}

	z->s = 1;
	z->e = x->e;

	for (c = 0, i = 0; i < maxNumOfDigits; i++) {
		c = x->d[i] - y->d[i] - c;

		if (c >= 0) {
			z->d[i] = c;
			c = 0;
		} else {
			z->d[i] = c + 10;
			c = 1;
		}
	}
}

void addDecimal(decimal_num *z, decimal_num *x, decimal_num *y)
{
	denorm(x, y);

	if (x->s == 1 && y->s == 1) {
		i_add(z, x, y);
		z->s = 1;
	} else if (x->s < 0 && y->s < 0) {
		i_add(z, x, y);
		z->s = -1;
	} else if (x->s > 0 && y->s < 0) {
		i_sub(z, x, y);
	} else {
		i_sub(z, y, x);
	}

	norm(x);
	norm(y);
	norm(z);
}

int scanDecimal(decimal_num *x)
{
	static int d[maxNumOfDigits], k;
	int i, c, f;

	x->s = 1;
	x->e = 0;
	for (i = 0; i < maxNumOfDigits; i++)
		x->d[i] = 0;

	while ((c = gc()) != EOF)
		if (isdigit(c) || c == '.' || c == '-') break;

	if (c == EOF)
		return 0;

	if (c == '-') {
		x->s = -1;
		c = gc();
	}

	for (f = k = 0; c != EOF && (isdigit(c) || c == '.'); c = gc()) {
		if (isdigit(c)) {
			d[k++] = c - '0';
			if (f) x->e--;
		} else if (c == '.') {
			f = 1;
		}
	}

	if (c != EOF)
		ungetc(c, stdin);

	for (i = 0; k > 0;)
		x->d[i++] = d[--k];

	norm(x);

	return 1;
}

void print(decimal_num *x)
{
	int i, k;

	norm(x);

	if (x->s < 0)
		pc('-');

	for (k = maxNumOfDigits; k > 0 && x->d[k - 1] == 0; k--);

	if (x->e >= 0) {
		for (i = maxNumOfDigits - 1; i > 0 && x->d[i] == 0; i--);

		while (i >= 0)
			pc(x->d[i--] + '0');

		for (i = 0; i < x->e; i++)
			pc('0');

		printf(".0\n");
		return;
	}

	if (k <= (-x->e)) {
		printf("0.");
		for (i = -x->e - k; i > 0; i--)
			pc('0');
	} else {
		for (i = k + x->e; i-- > 0;)
			pc(x->d[--k] + '0');
		pc('.');
	}

	while (k > 0)
		pc(x->d[--k] + '0');
	pc('\n');
}

int main()
{
	decimal_num x, y, z;
	int t;
    scanf("%d", &t);
	while(t--)
    {
		scanDecimal(&x);
		scanDecimal(&y);
		addDecimal(&z, &x, &y);
		print(&z);
	}
	return 0;
}

