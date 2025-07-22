#include <unistd.h>

void ft_print_comb(void){
	char a = 48;
	char b , c;

	while (a <= 55){
		b = a+1;
		while (b <= 56){
			c = b+1;
			while (c <= 57){
				write(1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);

				if (!(a==55 && b == 56 && c == 57))
					write (1, ", ",2);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*int main(){
	ft_print_comb();
	return 0;
}*/
