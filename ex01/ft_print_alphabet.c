#include <unistd.h>

void ft_print_alphabet(void){
	char a = 97;
	char z = 122;
	while (a <= z){
		write(1, &a, 1);
		a++;
	}
}

/*int main(){
	ft_print_alphabet();
	return 0;
}*/
