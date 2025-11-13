 #include<stdio.h>
 #include<string.h>
 typedef struct student_data
{
int rollno;
char name[100];
int markp;
int markm;
int markc;

}stu;
int b(stu a){
int total=a.markc+a.markm+a.markp;
 printf("Roll no: %d\n", a.rollno);
 printf("Name: %s\n",a.name);
printf("Mark of physics:%d\n",a.markp);
 printf("Mark of maths:%d\n",a.markm);
printf("Mark of chemistry:%d\n",a.markc);
printf("total:%d", total);
}
int main(){
stu s1;
printf("enter roll no.");
scanf("%d",&s1.rollno);
printf("enter name:");
 scanf("%s", &s1.name);
 printf("enter mark of phy:");
 scanf("%d", &s1.markp);
 printf("enter mark of maths:");
 scanf("%d", &s1.markm);
 printf("enter mark of chemistry:");
 scanf("%d",&s1.markc);
b(s1);
return 0;
}
