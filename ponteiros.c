//ponteiros

#include <stdio.h>

int main(){
	/*
	int x, *p;
	x = 10;
	p = &x; //errado
	printf("%d",*p);
	*/

	float x = 5.7, *p, **q;
	p = &x;
	//q = p; erro
	q = &p;
	
	printf ("Endereco de q: %d\n",**q);
	printf ("Valor de q: %d\n",q);
	printf ("Endereco de p: %d\n",*p);
	printf ("Valor de p: %d\n",p);
	printf ("Valor de x: %d\n", x);

	return 0;
}