#include <stdio.h>

int main()
{
    int num_units = 8;

    char unit_names[num_units][50];
    double results[num_units][3];

    for (int i = 0; i < num_units; i++)
    {
        printf("Enter results for Unit %d:\n", i + 1);
        printf("Unit Name: ");
        scanf("%s", unit_names[i]);

        double cat1, cat2, final_exam;

        do
        {
            printf("CAT 1 (<= 30): ");
            scanf("%lf", &cat1);
            if (cat1 < 0 || cat1 > 30)
            {
                printf("Invalid input! CAT 1 score must be between 0 and 30.\n");
            }
        } while (cat1 < 0 || cat1 > 30);

        do
        {
            printf("CAT 2 (<= 30): ");
            scanf("%lf", &cat2);
            if (cat2 < 0 || cat2 > 30)
            {
                printf("Invalid input! CAT 2 score must be between 0 and 30.\n");
            }
        } while (cat2 < 0 || cat2 > 30);

        printf("Final Exam: ");
        scanf("%lf", &final_exam);

        results[i][0] = cat1;
        results[i][1] = cat2;
        results[i][2] = final_exam;
    }

    printf("\nResults Slip for Computer Science Student:\n");
    printf("---------------------------------------------------\n");
    printf("| Unit Name | CAT 1 | CAT 2 | Final Exam | Final Result |\n");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < num_units; i++)
    {
        double cat1 = results[i][0];
        double cat2 = results[i][1];
        double final_exam = results[i][2];
        double unit_result = (0.3 * (cat1 + cat2)) + (0.7 * final_exam);

        printf("| %-10s | %-5.2lf | %-5.2lf | %-10.2lf | %-12.2lf |\n",
               unit_names[i], cat1, cat2, final_exam, unit_result);
    }

    printf("---------------------------------------------------\n");

    return 0;
}
