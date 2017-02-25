#include <cstdio>
#include <cmath>

using namespace std;

int mdc(int x, int y){
	if (y == 0){
		if(signbit(x)) 
			return -x;
		return x;
	}
	else
		return mdc(y, x % y);
}

int main(){

	int n, x, y, z, w;
	int numerador, denominador,dividendo,divisor;
	char c, l;

	scanf("%d",&n);

	for(int i = 0; i<n ;i++){

		scanf("%d / %d %c %d / %d",&x, &y, &c, &w, &z);

		if( c == '+'){
			numerador = (x*z + w*y);
			denominador = (y*z);  
		}

		if( c == '-'){
			numerador = (x*z - w*y);
			denominador = (y*z); 
		}

		if( c == '*'){
			numerador = (x*w);
			denominador = (y*z);
		}

		if( c == '/'){
			numerador = (x*z);
			denominador = (w*y);  
		}

		dividendo = numerador/mdc(denominador, numerador);
		divisor = denominador/mdc(denominador, numerador);

		printf("%d/%d = %d/%d\n",numerador, denominador, dividendo, divisor);

	}

	return 0;

}