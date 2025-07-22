#include <unistd.h>

void ft_print_comb2(void){
	char pair[7];
	short a = 0, b;

	while (a <= 98){
		b = a + 1;
		while (b <= 99){
			pair[0] = a / 10 + '0';
			pair[1] = a % 10 + '0';
			pair[2] = ' ';
			pair[3] = b / 10 + '0';
			pair[4] = b % 10 + '0';
			pair[5] = ',';
			pair[6] = ' ';

			write (1, pair, (b==99 && a == 98)? 5 : 7);
			b++;
		}
		a++;
	}
}

int main(){
	ft_print_comb2();
	return 0;
}

