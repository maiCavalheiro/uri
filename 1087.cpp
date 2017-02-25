#include <cstdio>
#include <cmath>

using namespace std;

int numCasas (int x1, int y1, int x2, int y2){
		int linha,coluna,result;

		if(x1 == x2 && y1 == y2 ) return 0;

		linha = x1 - x2;
		coluna = y1 - y2;

		result = coluna/linha;

		if(signbit(result)) 
			return -result;

	return result;

}

int main(){

	int  x1,x2,y1,y2,result;

	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	while ((x1 != 0) && (x2 != 0) && (y1 != 0) && (y2 !=0) ){
		
	result = numCasas(x1,y1,x2,y2);

	printf("%d\n",result); 

	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

	}

	return 0; 

}