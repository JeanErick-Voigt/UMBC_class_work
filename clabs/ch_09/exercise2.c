#include <stdio.h>
#include <stdlib.h>
#define NAMESIZE 21
#define BANKSIZE 20

struct money{
	int dollars;
	int cents;
};

struct money init(int dollars, int cents)
{
	struct money wallet;
	wallet.dollars = dollars;
	wallet.cents = cents; 
	return(wallet);
}

struct money add(struct money *a, struct money *b)
{
	struct money total;	
	struct money walletBcents;	
	total.dollars = a->dollars + b -> dollars;
	total.cents = a -> cents + b -> cents;
	if (total.cents > 100){
		total.cents = total.cents - 100;
		total.dollars = total.dollars + 1;
	}
	//(float) total_cents = total_cents / 100;
	//float total;
	//total = total_dollars + total_cents;
	//int dollars = atoi(fgets(a->dollars, BANKSIZE, stdin));
	//int cents = atoi(fgets(b->cents, BANKSIZE, stdin));
	return(total);
}

struct money input()
{
	char line[NAMESIZE];
	struct money temp;
	printf("Enter a dollar amount. \n");
	temp.dollars = atoi(fgets(line, NAMESIZE, stdin));
	printf("enter cents \n");
	temp.cents = atoi(fgets(line, NAMESIZE, stdin));
	return(temp);
}

void print(struct money *a)
{
	if(a -> cents <= 9){
		printf("Total amount $%d.0%d\n", a->dollars, a->cents);
	}else{
		printf("Total amount $%d.%d\n", a->dollars, a->cents);
	}
}
 
struct money add2(struct money a, struct money b, struct money *c)
{
	struct money total;
	total.dollars = a.dollars + b.dollars + c->dollars;
	total.cents = a.cents + b.cents + c->cents;
	if(total.cents >= 100){
		total.cents = total.cents - 100;
		total.dollars = total.dollars + 1;
	}
	return(total);
}

int main(void)
{
	float total;		
	struct money a, b, c, next_num, new_num, last_num, d;
	a = init(5,10);	
	b = input();
	new_num = input();
	last_num = input();
	c = add(&a, &b);
	d = add2(a, new_num, &last_num);	
	print(&c);
	print(&d);
	printf("%d\n", a.dollars);
	return(0);
}
