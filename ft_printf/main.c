/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 11:03:57 by ccoupez           #+#    #+#             */
/*   Updated: 2018/01/29 19:43:32 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include "ft_printf.h"
#include <locale.h>

int main(void)
{
//	int i = 8;
//	long long j = 9;
	//signed char a = 400	;
	//short int b = 
//	long int k = 10;
//	intmax_t l = 11;
//	size_t m = 12;

//	unsigned int i2 = 321654;
//	unsigned long long j2 = 654321;
//	unsigned long k2 = 987654;
//	intmax_t l2 = 116547;
//	size_t m2 = 1295847;

	//str = "holla";
setlocale(LC_ALL, "");
//	wchar_t *texte = L"éiii î à éééζζ";
//	printf("%s\n", ft_handle_ls(texte));

/*----------SIGNED D-------------*/

//	ft_printf("signed d :%d\n", 50);
//	printf("signed d :%d\n", 50);
//	printf("signed d :%d\n %d\n", 50, 600);
//	ft_printf("signed d :%d\n", 2147483650);
//	printf("signed d :%d\n", 2147483650);
//	ft_printf("signed d :%d\n", -2147483650);
//	printf("signed d :%d\n", -2147483650);
	
//	ft_printf("size ll signed :%lld\n", -9223372036854775899);
//	printf("    size ll signed :%lld\n", -9223372036854775899);
//	ft_printf("size ll signed :%lld\n", 9223372036854775899);
//	printf("    size ll signed :%lld\n", 9223372036854775899);
//	ft_printf("size ll signed :%lld\n", j);
//	printf("size ll signed :%lld\n", j);

//	ft_printf("size hh signed char :%hhd\n", 400);
//	printf("size hh signed char :%hhd\n", 400);
//	ft_printf("size hh signed char :%hhd\n", 50);
//	printf("size hh signed char :%hhd\n", 50);

//ft_printf("size h short int :%+0-#dff %d\n", 33000, 2);
//printf ("len printf %d\n", printf("size h short int :%dff %d\n", 33000, 2));
//	ft_printf("size h short int :%hd\n", 33000);
//	printf("size h short int :%hd\n", 33000);
//	ft_printf("size h short int :%hd\n", 3300);
//	printf("size h short int :%hd\n", 3300);

//	ft_printf("size l signed :%ld\n", 5555555555555555555555);
//	printf("     size l signed :%ld\n", 5555555555555555555555);
//	ft_printf("size l signed :%ld\n", -150);
//	printf("     size l signed :%ld\n", -150);
//	ft_printf("size l signed :%ld\n", 50);
//	printf("     size l signed :%ld\n", 50);

	//ft_printf("D signed :%D\n", k);
	//printf("D signed :%lD\n", k);
//int i = 9223372036854775899;
//	ft_printf("size j signed :%jd\n", i);
//	printf("size j signed :%jd\n", i);
//	ft_printf("size j signed :%jd\n", 9223372036854775899);
//	printf("     size j signed :%jd\n", 9223372036854775899);
//	ft_printf("size j signed :%jd\n", -9223372036854775899);
//	printf("size j signed :%jd\n", -9223372036854775899);

	/*int m = 9223372036854775899;
	ft_printf("size z signed :%zd\n", 0);
	printf("     size z signed :%zd\n", 0);
	ft_printf("size z signed :%zd\n", 9223372036854775807);
	printf("     size z signed :%zd\n", 9223372036854775807);
	ft_printf("size z signed :%zd\n", 9223372036854775899);
	printf("     size z signed :%zd\n", 9223372036854775899);
	ft_printf("size z signed :%zd\n", -9223372036854775808);
	printf("     size z signed :%zd\n", -9223372036854775808);*/

//	printf("%d\n", ft_printf("holla %+8.9hhd", 3));


/*-------------unsigned U------------------*/

	/*unsigned int a = 4294967299;
	ft_printf("unsigned int u  :%u\n", a);
	printf("    unsigned int u :%u\n", a);
	ft_printf("unsigned int u  :%u\n", 0);
	printf("    unsigned int u :%u\n", 0);*/
	//ft_printf("unsigned int u  :%u\n", 4294967299);
	//printf("    unsigned int u :%u\n", 4294967299);
	//ft_printf("unsigned int u  :%-9u\n", 10);
	//printf("    unsigned int u :%-09u\n", 10);
	
	/*unsigned int j2 = 18446744073709551615;
	ft_printf("size ll UNsigned type u :%llu\n", j2);
	printf("1size ll UNsigned type u :%llu\n", j2);
	ft_printf("size ll UNsigned type u :%llu\n", 18446744073709551615);
	printf("2size ll UNsigned type u :%llu\n", 18446744073709551615);
	ft_printf("size ll UNsigned type u :%llu\n", 18446744073709551);
	printf("3size ll UNsigned type u :%llu\n", 18446744073709551);
	ft_printf("size ll UNsigned type u :%llu\n", -1);
	printf("4size ll UNsigned type u :%llu\n", -1);
	ft_printf("size ll UNsigned type u :%llu\n", 0);
	printf("4size ll UNsigned type u :%llu\n", 0);*/

	/*unsigned int j2 = 3030;
	ft_printf("size hh UNsigned type u :%hhu\n", j2);
	printf("1size hh UNsigned type u :%hhu\n", j2);
	ft_printf("size hh UNsigned type u :%hhu\n", 255);
	printf("2size hh UNsigned type u :%hhu\n", 255);
	ft_printf("size hh UNsigned type u :%hhu\n", 3030);
	printf("3size hh UNsigned type u :%hhu\n", 3030);
	ft_printf("size hh UNsigned type u :%hhu\n", -1);
	printf("4size hh UNsigned type u :%hhu\n", -1);
	ft_printf("size hh UNsigned type u :%hhu\n", 0);
	printf("4size hh UNsigned type u :%hhu\n", 0);*/


	/*unsigned int j2 = 65535;
	ft_printf("size h UNsigned type u :%hu\n", j2);
	printf("1size h UNsigned type u :%hu\n", j2);
	ft_printf("size h UNsigned type u :%hu\n", -65535);
	printf("2size h UNsigned type u :%hu\n", -65535);
	ft_printf("size h UNsigned type u :%hu\n", 0);
	printf("3size h UNsigned type u :%hu\n", 0);
	ft_printf("size h UNsigned type u :%hu\n", -1);
	printf("4size h UNsigned type u :%hu\n", -1);
	ft_printf("size h UNsigned type u :%hu\n", 66000);
	printf("4size h UNsigned type u :%hu\n", 66000);*/

	/*unsigned int j2 = 4294967295;
	ft_printf("size l UNsigned type u :%lu\n", j2);
	printf("1size l UNsigned type u :%lu\n", j2);
	ft_printf("size l UNsigned type u :%lu\n", 4294967295);
	printf("2size l UNsigned type u :%lu\n", 4294967295);
	ft_printf("size l UNsigned type u :%lu\n", 0);
	printf("3size l UNsigned type u :%lu\n", 0);
	ft_printf("size l UNsigned type u :%lu\n", -1);
	printf("4size l UNsigned type u :%lu\n", -1);
	ft_printf("size l UNsigned type u :%lu\n", -9223372036854775807);
	printf("4size l UNsigned type u :%lu\n", -9223372036854775807);*/

	/*intmax_t j2 = 9223372036854775807;
	ft_printf("size j UNsigned type u :%ju\n", j2);
	printf("1size j UNsigned type u :%ju\n", j2);
	ft_printf("size j UNsigned type u :%ju\n", -65535);
	printf("2size j UNsigned type u :%ju\n", -65535);
	ft_printf("size j UNsigned type u :%ju\n", 0);
	printf("3size j UNsigned type u :%ju\n", 0);
	ft_printf("size j UNsigned type u :%ju\n", -1);
	printf("4size j UNsigned type u :%ju\n", -1);
	ft_printf("size j UNsigned type u :%ju\n", 9223372036854775807);
	printf("4size j UNsigned type u :%ju\n", 9223372036854775807);*/
	
	/*size_t j2 = 9223372036854775807;
	ft_printf("size z UNsigned type u :%zu\n", j2);
	printf("1size z UNsigned type u :%zu\n", j2);
	ft_printf("size z UNsigned type u :%zu\n", -65535);
	printf("2size z UNsigned type u :%zu\n", -65535);
	ft_printf("size z UNsigned type u :%zu\n", 0);
	printf("3size z UNsigned type u :%zu\n", 0);
	ft_printf("size z UNsigned type u :%zu\n", -1);
	printf("4size z UNsigned type u :%zu\n", -1);
	ft_printf("size z UNsigned type u :%zu\n", -9323372036854775819);
	printf("4size z UNsigned type u :%zu\n", -9323372036854775819);*/

//	ft_printf("size l unsigned type o :%lo\n", k2);
//	printf("size l unsigned type o :%lo\n", k2);


//	ft_printf("size j unsigned type o :%jo\n", l2);
//	printf("size j unsigned type o :%jo\n", l2);

//	ft_printf("size z unsigned :%zo\n", m2);
//	printf("size z unsigned :%zo\n", m2);

/*-------------unsigned x------------------*/

	//unsigned long long a = 18446744073;
	//ft_printf("unsigned int x  :%llx\n", a);
	//printf("    unsigned int x :%llx\n", a);
	////ft_printf("unsigned int x  :%x\n", 0);
	////printf("    unsigned int x :%x\n", 0);
	//ft_printf("unsigned int x  :%lx\n", 18446744073709);
	//printf("    unsigned int x :%lx\n", 18446744073709);
	//ft_printf("unsigned int x:%-9x\n", 200);
	//printf(" unsigned int x :%-09x\n", 200);
	
	/*unsigned int j2 = 18446744073709551615;
	ft_printf("size ll UNsigned type u :%llu\n", j2);
	  printf("1size ll UNsigned type u :%llu\n", j2);
	ft_printf("size ll UNsigned type u :%llu\n", 18446744073709551615);
	  printf("2size ll UNsigned type u :%llu\n", 18446744073709551615);
	ft_printf("size ll UNsigned type u :%llu\n", 18446744073709551);
	  printf("3size ll UNsigned type u :%llu\n", 18446744073709551);
	ft_printf("size ll UNsigned type u :%llu\n", -1);
	  printf("4size ll UNsigned type u :%llu\n", -1);
	ft_printf("size ll UNsigned type u :%llu\n", 0);
	  printf("4size ll UNsigned type u :%llu\n", 0);*/

	/*unsigned int j2 = 3030;
	ft_printf("size hh UNsigned type u :%hhu\n", j2);
	  printf("1size hh UNsigned type u :%hhu\n", j2);
	ft_printf("size hh UNsigned type u :%hhu\n", 255);
	  printf("2size hh UNsigned type u :%hhu\n", 255);
	ft_printf("size hh UNsigned type u :%hhu\n", 3030);
	  printf("3size hh UNsigned type u :%hhu\n", 3030);
	ft_printf("size hh UNsigned type u :%hhu\n", -1);
	  printf("4size hh UNsigned type u :%hhu\n", -1);
	ft_printf("size hh UNsigned type u :%hhu\n", 0);
	  printf("4size hh UNsigned type u :%hhu\n", 0);*/


	/*unsigned int j2 = 65535;
	ft_printf("size h UNsigned type u :%hu\n", j2);
	  printf("1size h UNsigned type u :%hu\n", j2);
	ft_printf("size h UNsigned type u :%hu\n", -65535);
	  printf("2size h UNsigned type u :%hu\n", -65535);
	ft_printf("size h UNsigned type u :%hu\n", 0);
	  printf("3size h UNsigned type u :%hu\n", 0);
	ft_printf("size h UNsigned type u :%hu\n", -1);
	  printf("4size h UNsigned type u :%hu\n", -1);
	ft_printf("size h UNsigned type u :%hu\n", 66000);
	  printf("4size h UNsigned type u :%hu\n", 66000);*/

	/*unsigned int j2 = 4294967295;
	ft_printf("size l UNsigned type u :%lu\n", j2);
	  printf("1size l UNsigned type u :%lu\n", j2);
	ft_printf("size l UNsigned type u :%lu\n", 4294967295);
	  printf("2size l UNsigned type u :%lu\n", 4294967295);
	ft_printf("size l UNsigned type u :%lu\n", 0);
	  printf("3size l UNsigned type u :%lu\n", 0);
	ft_printf("size l UNsigned type u :%lu\n", -1);
	  printf("4size l UNsigned type u :%lu\n", -1);
	ft_printf("size l UNsigned type u :%lu\n", -9223372036854775807);
	  printf("4size l UNsigned type u :%lu\n", -9223372036854775807);*/

	/*intmax_t j2 = 9223372036854775807;
	ft_printf("size j UNsigned type u :%ju\n", j2);
	  printf("1size j UNsigned type u :%ju\n", j2);
	ft_printf("size j UNsigned type u :%ju\n", -65535);
	  printf("2size j UNsigned type u :%ju\n", -65535);
	ft_printf("size j UNsigned type u :%ju\n", 0);
	  printf("3size j UNsigned type u :%ju\n", 0);
	ft_printf("size j UNsigned type u :%ju\n", -1);
	  printf("4size j UNsigned type u :%ju\n", -1);
	ft_printf("size j UNsigned type u :%ju\n", 9223372036854775807);
	  printf("4size j UNsigned type u :%ju\n", 9223372036854775807);*/
	
	/*size_t j2 = 9223372036854775807;
	ft_printf("size z UNsigned type u :%zu\n", j2);
	  printf("1size z UNsigned type u :%zu\n", j2);
	ft_printf("size z UNsigned type u :%zu\n", -65535);
	  printf("2size z UNsigned type u :%zu\n", -65535);
	ft_printf("size z UNsigned type u :%zu\n", 0);
	  printf("3size z UNsigned type u :%zu\n", 0);
	ft_printf("size z UNsigned type u :%zu\n", -1);
	  printf("4size z UNsigned type u :%zu\n", -1);
	ft_printf("size z UNsigned type u :%zu\n", -9323372036854775819);
	  printf("4size z UNsigned type u :%zu\n", -9323372036854775819);*/

//	ft_printf("size l unsigned type o :%lo\n", k2);
//	   printf("size l unsigned type o :%lo\n", k2);


//	ft_printf("size j unsigned type o :%jo\n", l2);
//	   printf("size j unsigned type o :%jo\n", l2);

//	ft_printf("size z unsigned :%zo\n", m2);
//	   printf("size z unsigned :%zo\n", m2);




/*----------c CHAR---------------*/

	//setlocale(LC_ALL, "");
//wint_t = "ζ";
/*char c = 'a';*/

//ft_printf("char c :%c\n", c);
//printf("%d\n", printf("int d :%+25+--d\n", 5));

/*----------c CHAR---------------*/

//wint_t t = L'©';

/*ft_printf("char C :%C\n", L'©');
	printf("%d\n", printf("char C :%C\n", L'©'));*/


/*----------s CHAR * ---------------*/

/*char *b;

b = "abcde";

ft_printf("char c :%s\n", b);
printf("charyy c :%s\n", b);
printf("ee %d\n", printf("char c :%s\n", b));*/

//ft_printf("char s :%s", "éééζζ");
//printf("%d\n", printf("char s :%s", "éééζζ"));


/*----------wchar_t S ou ls ---------------*/

/*wchar_t *str = L"éiii î à éééζζ";

//wchar_t *str = L"qwertζζéyŴŵŶŷŸŹźŻไๅๆ็่้๊๋์ํ๎๏0E50";

ft_printf("char * s :%S\n", str);
printf ("p-len :%d ", printf("char * s :%S\n", str));*/

//ft_printf("char * wS :%S\n", texte);
//printf("char * wS :%S\n", texte);

/*unsigned long i = -1;

ft_printf("D :%D\n", i);
printf("U:%lu\n", i);*/

/*------------test reaction printf----------*/

//ft_printf("unsigned int u  :%-9u\n", 10);
/*printf("    unsigned int u :% u\n", 10);
printf("    unsigned int u :%3u\n", 10);
printf("    unsigned int u :% 3u\n", 10);*/

//printf("unsigned int d :%0d\n", 111);
//printf("unsigned int d :%04d\n", 111);
//printf("unsigned int d :%6-0d\n", 111);


printf("char s :%.2s\n", "holla");
printf("char s :%.3s\n", "holla");
printf("char s :%.10d\n", 44444);

/*int texte = 666;
printf ("1 : %d -- ", printf("a : %lmnd\n", texte));
printf ("2 : %d -- ", printf("b : %+-jld\n", texte));
printf ("3 : %d -- ", printf("c : %ll+d\n", texte));
printf ("4 : %d -- ", printf("d : %ll1d\n", texte));*/

   /* printf( "%-d\n", 452 );
    printf( "%-0d\n", 452);
    printf( "%- .9d\n", 452 );

char *b;

b = "abcde";

printf("%-s\n", b);
printf("%- s\n", b);*/


	return (0);
}