#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "../../../../ex07/ft_putnbr.c"
#include "../../../utils/constants.h"

typedef struct s_test
{
        char *desc;
        int n;
        char *expected;
} t_test;

int run_tests(t_test *tests, int count);

int main(void)
{
        t_test tests[] = {
            {.desc = "ft_putnbr(0)",
             .n = 0,
             .expected = "0"},
            {.desc = "ft_putnbr(-2147483648)",
             .n = -2147483648,
             .expected = "-2147483648"},
            {.desc = "ft_putnbr(2147483647)",
             .n = 2147483647,
             .expected = "2147483647"},
            {.desc = "ft_putnbr(42)",
             .n = 42,
             .expected = "42"},
            {.desc = "ft_putnbr(-42)",
             .n = -42,
             .expected = "-42"},
            // Add more test cases here
        };
        int count = sizeof(tests) / sizeof(tests[0]);
        return (run_tests(tests, count));
}

int run_tests(t_test *tests, int count)
{
        int i;
        int error = 0;
        for (i = 0; i < count; i++)
        {
                // Flush the standard output buffer
                fflush(stdout);

                char buffer[1024];
                // Clear the buffer used to capture the output of the function being tested
                memset(buffer, 0, sizeof(buffer));

                // Redirect the output to a file
                int saved_stdout = dup(STDOUT_FILENO);
                int output_fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
                dup2(output_fd, STDOUT_FILENO);
                close(output_fd);

                // Call the function to be tested
                ft_putnbr(tests[i].n);

                // Restore the original output
                fflush(stdout);
                dup2(saved_stdout, STDOUT_FILENO);
                close(saved_stdout);

                // Open the output file and check its contents
                FILE *fp = fopen("output.txt", "r");
                fgets(buffer, sizeof(buffer), fp);
                fclose(fp);

                // Check that the output matches the expected value
                if (strcmp(buffer, tests[i].expected) != 0)
                {
                        printf("    " RED "[%d] %s Expected \"%s\", got \"%s\"\n", i + 1, tests[i].desc, tests[i].expected, buffer);
                        error -= 1;
                }
                else
                        printf("  " GREEN CHECKMARK GREY " [%d] %s output \"%s\" as expected\n" DEFAULT, i + 1, tests[i].desc, buffer);

                // Delete the output file
                remove("output.txt");
        }

        return (error);
}