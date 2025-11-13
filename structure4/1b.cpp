#include<stdio.h>
typedef struct students
{
int rollno;
char name [100];
char course [100];
char Majorsub[100];
char minorsub[100];
}stu;
void b(stu a, int no) {

if(no==a.rollno) {
printf("%d\n",a.rollno);
 printf("%s\n",a.name);
 printf("%s\n",a.course);
 printf("%s\n",a.Majorsub);
printf("%s\n",a.minorsub);
}
}
int main(){
int no;
stu s1={60, "SUJAL", "CSBS", "MATHS", "AI"};
stu s2={54, "DAKSH", "CSBS", "CHEM", "AI"};
stu s3={64, "ARYAN", "CSBS", "ELECTRICAL", "AI"};
stu s4={3, "VANSH", "CSBS", "MATHS", "AI"};
stu s5={61, "DAX", "CSBS", "MATHS", "AI"};
printf("enter rollno and get that student all detail");
scanf("%d",&no);
b(s1,no);
b(s2,no);
b(s3,no);
b(s4, no);
b(s5,no);
return 0;
}
