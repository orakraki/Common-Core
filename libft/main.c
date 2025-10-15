
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>


#define C_GREEN "\033[32m"
#define C_RED "\033[31m"
#define C_RESET "\033[0m"

static void print_result(const char *test_name, int success)
{
printf("%-25s: ", test_name);
if (success)
printf(C_GREEN "[OK]" C_RESET "\n");
else
printf(C_RED "[KO]" C_RESET "\n");
}

void test_isalpha(void)
{
printf("\n--- Testing ft_isalpha ---\n");
print_result("Test with 'a'", (isalpha('a') != 0) == (ft_isalpha('a') != 0));
print_result("Test with 'Z'", (isalpha('Z') != 0) == (ft_isalpha('Z') != 0));
print_result("Test with '5'", (isalpha('5') != 0) == (ft_isalpha('5') != 0));
print_result("Test with '\\0'", (isalpha('\0') != 0) == (ft_isalpha('\0') != 0));
}

void test_isdigit(void)
{
printf("\n--- Testing ft_isdigit ---\n");
print_result("Test with '5'", (isdigit('5') != 0) == (ft_isdigit('5') != 0));
print_result("Test with '0'", (isdigit('0') != 0) == (ft_isdigit('0') != 0));
print_result("Test with 'a'", (isdigit('a') != 0) == (ft_isdigit('a') != 0));
print_result("Test with '!'", (isdigit('!') != 0) == (ft_isdigit('!') != 0));
}

void test_isalnum(void)
{
printf("\n--- Testing ft_isalnum ---\n");
print_result("Test with 'a'", (isalnum('a') != 0) == (ft_isalnum('a') != 0));
print_result("Test with '5'", (isalnum('5') != 0) == (ft_isalnum('5') != 0));
print_result("Test with '!'", (isalnum('!') != 0) == (ft_isalnum('!') != 0));
print_result("Test with ' '", (isalnum(' ') != 0) == (ft_isalnum(' ') != 0));
}

void test_strlen(void)
{
printf("\n--- Testing ft_strlen ---\n");
print_result("Test with \"Hello\"", strlen("Hello") == ft_strlen("Hello"));
print_result("Test with \"\"", strlen("") == ft_strlen(""));
print_result("Test with \"a\"", strlen("a") == ft_strlen("a"));
print_result("Test with long string", strlen("a very long string to test") == ft_strlen("a very long string to test"));
}

void test_memset(void)
{
printf("\n--- Testing ft_memset ---\n");
char str1[50] = "This is a string.";
char str2[50] = "This is a string.";
ft_memset(str1 + 5, '*', 5);
memset(str2 + 5, '*', 5);
print_result("memset comparison", strcmp(str1, str2) == 0);
}

void test_memcpy(void)
{
printf("\n--- Testing ft_memcpy ---\n");
char src[] = "copy this";
char dest1[50] = {0};
char dest2[50] = {0};
ft_memcpy(dest1, src, strlen(src) + 1);
memcpy(dest2, src, strlen(src) + 1);
print_result("memcpy comparison", strcmp(dest1, dest2) == 0);
}

void test_strlcpy(void)
{
	printf("\n--- Testing ft_strlcpy ---\n");
	char src[] = "abcdef";
	char dest[10] = {0};
	size_t ret = ft_strlcpy(dest, src, 4);
	print_result("strlcpy check", strcmp(dest, "abc") == 0 && ret == 6);
}

void test_atoi(void)
{
	printf("\n--- Testing ft_atoi ---\n");
	const char *tests[] = {
		"42", "-42", "  +123", "\t-0", "0", "2147483647",
		"  --5", "+-5", "abc", "42abc", "  \n\v\f\r\t 42", NULL
	};
	int i = 0;
	while (tests[i])
	{
		int original_res = atoi(tests[i]);
		int ft_res = ft_atoi(tests[i]);
		printf("Test \"%s\": orig=%d, ft=%d. ", tests[i], original_res, ft_res);
		print_result("", original_res == ft_res);
		i++;
	}
}

void test_calloc(void)
{
	printf("\n--- Testing ft_calloc ---\n");
	size_t count = 5;
	int *arr = ft_calloc(count, sizeof(int));
	int all_zeros = 1;
	if (arr) {
		for (size_t i = 0; i < count; i++) {
			if (arr[i] != 0) all_zeros = 0;
		}
		free(arr);
	}
	print_result("calloc zero-init check", all_zeros == 1 && arr != NULL);
}

void test_strdup(void)
{
	printf("\n--- Testing ft_strdup ---\n");
	char *s = "duplicate me";
	char *dup = ft_strdup(s);
	print_result("strdup check", dup && strcmp(s, dup) == 0 && s != dup);
	free(dup);
}

void test_substr(void)
{
	printf("\n--- Testing ft_substr ---\n");
	char *s = "hello world";
	char *sub = ft_substr(s, 6, 5);
	print_result("substr(\"hello world\")", sub && strcmp(sub, "world") == 0);
	free(sub);
}

void test_strjoin(void)
{
	printf("\n--- Testing ft_strjoin ---\n");
	char *s1 = "hello ";
	char *s2 = "world";
	char *joined = ft_strjoin(s1, s2);
	print_result("strjoin(\"hello \", ...)", joined && strcmp(joined, "hello world") == 0);
	free(joined);
}

void test_split(void)
{
	printf("\n--- Testing ft_split ---\n");
	char **result = ft_split("  hello world 42 ", ' ');
	int success = (result && result[0] && result[1] && result[2] && result[3] == NULL &&
			strcmp(result[0], "hello") == 0 &&
			strcmp(result[1], "world") == 0 &&
			strcmp(result[2], "42") == 0);
	print_result("split test", success);
	if (result) {
		for (int i = 0; result[i]; i++) free(result[i]);
		free(result);
	}
}

void test_itoa(void)
{
	printf("\n--- Testing ft_itoa ---\n");
	char *res1 = ft_itoa(123);
	char *res2 = ft_itoa(-456);
	char *res3 = ft_itoa(0);
	char *res4 = ft_itoa(INT_MAX);
	int success = (strcmp(res1, "123") == 0 && strcmp(res2, "-456") == 0 &&
			strcmp(res3, "0") == 0 && strcmp(res4, "2147483647") == 0);
	print_result("itoa basic tests", success);
	free(res1);
	free(res2);
	free(res3);
	free(res4);
}

int main(void)
{
	printf("=============== Running Libft Tester ===============\n");
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_strlen();
	test_memset();
	test_memcpy();
	test_strlcpy();
	test_atoi();
	test_calloc();
	test_strdup();
	test_substr();
	test_strjoin();
	test_split();
	test_itoa();

	printf("\n================ Tester Finished ================\n");
	return (0);
}
