void main()
{
char s[100];
int i;
clrscr();
printf("Enter any things:");
scanf("%c",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
{printf("Given string is numeric True");}
else
{
printf("Given string is not a numeric False");
break;
}
}
getch();
}
