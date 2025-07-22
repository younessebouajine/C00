#include <unistd.h>

void ft_print_reverse_alphabet(void){
	char a;
	char z;
	a = 97;
	z = 122;
	while (z >= a){
		write(1, &z, 1);
		z--;
	}
}

/*int main(){
	ft_print_reverse_alphabet();
	return 0;
}*/
