#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

int getline(char string[], int limit);
double atof(char string[]);
double sciExp(double value, double sciPower, int sciSign);

int main() {
	char line[MAXLINE];
	double n;
	
	while(getline(line, MAXLINE) > 0) {
		n = atof(line);	
		printf("%f\n", n);
	}
	return 1;
}

int getline(char s[], int lim) {
	int c, i;

	i = 0;
	while (--lim > 0 && (c=getchar()) != EOF && c != '\n') {
		s[i++] = c;
	}
	if (c == '\n') {
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}

double atof(char s[]) {
	double val, power, sciPower=0;
	int i, sign, sciSign=0;

	for (i = 0; isspace(s[i]); i++) {
		;
	}
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-') {
		i++;
	}
	for (val = 0.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
	}
	if (s[i] == '.') {
		i++;
	}
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if (s[i] == 'e' || s[i] == 'E') {
		i++;	
		sciSign = (s[i] == '-') ? -1 : 1;
		if (s[i] == '+' || s[i] == '-') {
			i++;
		}
		for (sciPower = 0.0; isdigit(s[i]); i++) {
			sciPower = 10.0 * sciPower + (s[i] - '0');
		}
	}
	val = sign * val / power;
	return (sciPower == 0) ? val : sciExp(val, sciPower, sciSign);
}

double sciExp(double v, double p, int s) {
	int i, n;
	for (n=1.0, i=0; i < p; i++) {
		n *= 10.0;
	}
	if (s == -1) {
		return v / n;
	}
	else {
		return v * n;
	}
}
