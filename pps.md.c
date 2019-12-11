MARK DOWN FILE  (PPS)

SUBMITTED TO -  GOLDENDEEP KAUR

**NAME - NAVDEEP SAPRA
      , CLASS - CSE-C1
       ,ROLL No - 1915334**




```c
#include <stdio.h>
int main()
{
        int m, n, c, d, first[10][10], second[10][10], sum[10][10];
        printf("Enter the number of rows and columns of matrix\n");
        scanf("%d%d", &m, &n);
        printf("Enter the elements of first matrix\n");
        for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
             scanf("%d", &first[c][d]);

        printf("Enter the elements of second matrix\n");

        for (c = 0; c < m; c++)
                for (d = 0 ; d < n; d++)
                        scanf("%d", &second[c][d]);
        printf("Sum of entered matrices:-\n");

        for (c = 0; c < m; c++)
        {
                for (d = 0 ; d < n; d++) 
                {
                        sum[c][d] = first[c][d] + second[c][d];
                        printf("%d\t", sum[c][d]);
                }
                printf("\n");
        }
       return 0;
}
```


```c
#include<stdio.h>
void main()
{
puts("principal\npanth pattan shiri gurucharan singh tohra complex \nguru nanak dev engineering collage \ngill park \nludhiana 141006 \nindia\n");
}

#include<stdio.h>
int main()
{
float d,a,p;
printf("enter diameter\n");
scanf("%f", &d);
p=22/7.0*d;
a=22/7.0*d*d/4;
printf("peremeter is %.1f \narea is %.1f \nof circle with diameter %.1f",p,a,d);
}
```
```c
#include<stdio.h>

int main()
{
   int count=0;
  int a[10],i,max=a[0];
  float sum=0;
  printf("Enter the score of 10 students : ");
  for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(i=0;i<10;i++)
{ if(max<a[i])
  max=a[i];
}
printf("maximum score of student is %d \n",max);
for(i=0;i<10;i++)
sum=sum+a[i];
sum=sum/10;
printf("average score of students is %f\n",sum);

for(i=0;i<10;i++)
{
if(a[i]>sum)
count++;
}
printf(" no of students who score marks greater than class average are %d\n",count);
return 0;
}
```
```c
#include<stdio.h>
int main()
{
 int arr[10];
 int *p;
 int i;
 p=&arr[0];
 printf("enter any element :-\n");
 for(i=0;i<10;i++)
 {
  printf("enter elements %02d:\n");
  scanf("%d", p+i);
 }
 printf("entered array elements are:\n");
 printf("\address\tvalue\n");
 for(i=0;i<10;i++)
 {
  printf("%08x \t 03d\n", (p+i),*(p+i));
 }
 return 0;
}
```
```c
#include<stdio.h>

struct record
{
int roll_no;
char name[20];
int marks;
long contact_no;
};

int main()
{
int i;
struct record r[5];
for(i=1;i<6;i++)
{
  printf("STUDENT %d \nEnter roll no,name,marks,contact no: ",i);
scanf("%d %s %d %ld",&r[i].roll_no,&r[i].name,&r[i].marks,&r[i].contact_no);
}
for(i=1;i<6;i++)
{
   printf("for student %d \n roll no :%d \n name: %s  \n marks: %d \n contact no: %ld \n\n ",i,r[i].roll_no,r[i].name,r[i].marks,r[i].contact_no);
}
return 0;
}
```

```c
#include<stdio.h>
int main()
{
int a;
printf("enter no\n");
scanf("%d",&a);
if ( a%2 == 0)
printf("no is even");
else printf("no is odd");
return 0;
}
```
```c


#include<stdio.h>
int main()
{
int a, b=1;
printf("enter no\n");
scanf("%d",&a);
while(a>0)
{
b=b*a;
a=a-1;
}
printf("factorial is %d\n",b);
return 0;
}

```
```c


#include<stdio.h>

int main()
{
int n,a=0,b=1,c,i;
printf(" Enter the  no of fibonachi terms u want to print: ");
scanf("%d",&n);
printf("%d\t%d\t",a,b);
for(i=1;i<=n-2;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
return 0;
}

```
```c



#include<stdio.h>
int fib(int n)
{
if (n<=1)
return n;
else
return fib(n-1)+fib(n-2);
}
int main ()
{
int n;
printf("enter n\n");
scanf("%d",&n);
printf("fibonacci is %d\n",fib(n));
getchar();
return 0;
}
```
```c

#include<stdio.h>
int main()
{
int array[5], a, max;
printf("enters nos");
for(a=0; a < 5; a++)
scanf("%d", &array[a]);
max = array[0];
for ( a = 1; a <5; a++)
{ 
if (array[a] > max);
   {
 max = array[a];

}
}
printf("max valued element is %d \n, max");
return 0;

}


```
```c




#include<stdio.h>

int main()
{
int n; 
printf("Enter the year u want to check it for leap :");
scanf("%d",&n);
if(n%4==0)
printf("it is a leap year\n");
else
printf(" not a leap year\n");
return 0;
}



```
```c

#include<stdio.h>

int main()
{
int a[3][3],b[3][3],c[3][3],i,j;

printf("Enter the values of matrix a : \n");

for(i=0;i<3;i++)
{
   for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);
}
printf("Enter the values of matrix b:\n ");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
}
for(i=0;i<3;i++)
{
     for(j=0;j<3;j++)
     c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
}
printf("matrix a * b = \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
     printf("%d\t",c[i][j]);
    printf("\n");
}
return 0;
}


```
```c


#include<stdio.h>
int  main()
{
int i;
 int a[i],max;

 for(i=0;i<=4;i++)

  {
    scanf("%d",&a[i]);
    max = a[0];


    for(i=1;i<=4;i++)
    {
      if( max<a[i])
     max =a[i];
}
}
  printf("max of the array %d",max);
return 0;
} 


```
```c

#include<stdio.h>
int main()
{
 int a[5], max, i;
 printf("enter five numbars");
 for(i=0;i<5;i++)
 {
  scanf("%d", &a[i]);
 }
 max=a[0];
 for(i=1;i<5;i++)
 {
  if(max<a[i])
  max=a[i];
 }
 printf("max is %d",max);
 return 0;
}
 
 
 
 ```
```c
 
 #include<stdio.h>
int main()
{
int b,a,n,r=0;
printf("enter no\n");
scanf("%d",&n);
b=n;
while(n>0)
{
a= n%10;
r= r*10 + a;
n=n/10;
}
if (b==r)
printf("yes");
else
printf("no");
return 0; }


```
```c

#include<stdio.h>
int main()
{
int a,b,c;
printf("enter no\n");
scanf("%d",&a);
for(b=2;b<=a/2;b++)
{
if (a%b==0)
{c=1;
break;}}
if (a==1)
printf("1 is nither prime nor composite");
else 
if (c==0)
printf("prime\n");
else
printf("non  prime\n");
return 0;
}



```
```c




#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d;

printf("enter the value of a b c \n");
scanf("%f%f%f", &a, &b, &c);
d=b*b-4*a*c;
if (d<0)
{
printf("root1 is %0.3f + %0.3f i\n",-b/2*a, sqrt(-d)/2*a );
printf("root2 is %0.3f - %0.3f i \n ",-b/2*a, sqrt(-d)/2*a);
}
else 
{
printf("rrot1 is %.3f \n",(-b+ sqrt(d))/2*a);
printf("root2 is %.3f \n",(-b- sqrt(d))/2*a);
}
return 0;
}
```
```c




#include<stdio.h>
int main()
{
int a,n,r=0;
printf("enter no\n");
scanf("%d",&n);
while(n>0)
{
a= n%10;
r= r*10 + a;
n=n/10;
}
printf("reverse no is %d\n",r);
return 0; }



```
```c

#include<stdio.h>
int sqr(int n)
{return n*n;}
int main()
{
int n,s;
printf("enter no \n");
scanf("%d",&n);
printf("square is %d\n",sqr(n));
return 0;
}
```
```c



#include<stdio.h>
int main()
{
int a,b,c;
printf("enter no  to  add");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);

return 0;
}


```
```c





#include<stdio.h>

int main()
{
char n;
printf(" Enter m for monday t for tuesday w for wednesday h for thursday f for friday s for saturday  : ");
scanf("%c",&n);
switch(n)
{
case 'm':printf("monday\n");
break;
case 't':printf("tuesday\n");
break;
case 'w':printf("wednseday\n");
break;
case 'h':printf("thursday\n");
break;
case 'f':printf("friday\n");
break;
case 's':printf("saturday\n");
break;
}
return 0;
}



```
```c


#include<stdio.h>
int main()
{
int a;
int b;
printf("enter no a & b\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("swaped no's are %d %d \n",a,b);
return 0;
}



```
```c



#include<stdio.h>

void swap(int,int);        

void main( )
{
    int n1,n2;
    printf("Enter the two numbers to be swapped\n");
    scanf("%d%d",&n1,&n2);
    printf("\nThe values of n1 and n2 in the main function before calling the swap function are n1=%d n2=%d\n",n1,n2);
    swap(n1,n2);
    }

void swap(int n1,int n2)
{ 
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\nThe values of n1 and n2 in the swap function after swapping are n1=%d n2=%d\n",n1,n2);
}





```
```c

#include <stdio.h>
void swap(int*, int*);
int main()
{
   int x, y;
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
   swap(&x, &y);
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
   return 0;
}
void swap(int *a, int *b)
{
   int temp;
   temp = *b;
   *b = *a;
   *a = temp;
}

```
```c




#include<stdio.h>
int main()
{
int a,i;
printf("enter no whose table is to  be printed\n");
scanf("%d",&a);
for ( i=1; i<=10; i++)
{
printf(" %d * %d = %d \n", a, i, a*i);
}
return 0;
}





```
```c



#include<stdio.h>

int main()

{ int a[3][3],c[3][3],i,j;

printf("Enter the elements of matrix A : \n");

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d\n",&a[i][j]);
}

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
c[j][i]=a[i][j];
}

printf(" transpose of matrix A :\n");


for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
return 0;
}




```
```c



#include<stdio.h>
void main()
{
puts("welcome all budding engineers to gne collage ludhiana");
}

```



```c

#include<stdio.h>
int main ()
{
float b,c;
printf("enter temperature in C\n");
scanf("%f", &c );
b=9/5.0*c+32;
printf("%.01f \n",b);
return 0;
}


```
