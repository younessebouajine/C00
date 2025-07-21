#include <unistd.h>

void ft_print_alphabet(void){
	int i = 97;
	int j = 122;
	while (i <= j){
		char c = i;
		write(1, &i, 1);
		i++;
	}
}

/*int main(){
	ft_print_alphabet();
	return 0;
}*/
