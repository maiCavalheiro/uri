#include <cstdio>

using namespace std;

int mdc(int x, int y){
	if (y == 0)
		return x;
	else
		return mdc(y, x % y);
}

int main(){
	int valor;

	int a, b;

	scanf("%d%d",&a,&b);

	valor = mdc(a, b);

	printf("%d\n", valor );

	return 0;
}
