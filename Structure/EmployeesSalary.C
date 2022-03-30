#include <stdio.h>
#include <conio.h>
struct Employee
{
    int emp_id, wage, working, days, t_days, t_month, t_wage;
    float pf_percentage;
};
struct Employee S;
void setEmployee();
void getEmployee();
void main()
{
    clrscr();
    setEmployee();
    getEmployee();
    getch();
}
void setEmployee()
{
    printf("\nEnter the Employee ID :");
    scanf("%d", &S.emp_id);
    printf("\nEnter the Wage Per Hour( 4/8) :");
    scanf("%d", &S.wage);
    printf("\nEnter the Working  Hour per Day:");
    scanf("%d", &S.working);
    printf("\nEnter the Days in month :");
    scanf("%d", &S.days);
    printf("\n\nEnter the PF Percentage :");
    scanf("%f", &S.pf_percentage);
}
void getEmployee()
{
    S.t_days = S.wage * S.working;
    printf("\nTotal Wage per Day : %d", S.t_days);
    S.t_month = S.t_days * S.days;
    printf("\nTotal Wage per  Month : %d", S.t_month);
    S.pf_percentage = (S.pf_percentage * S.t_month) / 100;

    S.t_wage = S.t_month - S.pf_percentage;

    printf("\nPF Amount ::%.2f", S.pf_percentage);
    printf("\n\nSalary in Hand :: %d  ", S.t_wage);
}