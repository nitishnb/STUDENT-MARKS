#include<stdio.h>

 struct marks
 {
     float coa,dm,ds,ld,java,mp;
 };
 struct studentinfo
 {
 	char name[30];
 	char usn[20];
 	struct marks m;
 };
 int main()
 {
 	struct studentinfo s1;
 	printf("\nEnter the name of the student:");
 	scanf("%s",s1.name);
 	printf("\nEnter the usn of the student:");
 	scanf("%s",s1.usn);
 	printf("\nEnter the marks of 6 subjects");
 	scanf("%f",&s1.m.coa);
 	scanf("%f",&s1.m.dm);
 	scanf("%f",&s1.m.ds);
 	scanf("%f",&s1.m.ld);
 	scanf("%f",&s1.m.java);
 	scanf("%f",&s1.m.mp);
 	printf("\nSTUDENT INFORMATION");
 	printf("\nName of the stdent:%s",s1.name);
 	printf("\nUSN of the student:%s",s1.usn);
 	printf("\nMarks in subjects :");
 	printf("\n%f\n%f\n%f\n%f\n%f\n%f\n",s1.m.coa,s1.m.dm,s1.m.ds,s1.m.ld,s1.m.java,s1.m.mp);
 	return 0;
 }
