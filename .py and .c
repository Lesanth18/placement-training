# placement---training
"I Can Learn AnyWhere"

                                                                Python Programs
1.Factorial of a number using recursion.

def recur_factorial(n):
   if n==1:
       return n
   else:
       return n*recur_factorial(n-1)
num=7
if num<0:
   print("Sorry,factorial does not exist for negative numbers")
elif num==0:
   print("The factorial of 0 is 1")
else:
   print("The factorial of",num,"is", recur_factorial(num))

   
2.Program to display calendar of the given month and year

import calendar

yy = 2014  # year
mm = 11    # month

print(calendar.month(yy, mm))


3.Program to add two matrices using nested loop

X=[[12,7,3],
  [4 ,5,6],
  [7 ,8,9]]

Y=[[5,8,1],
  [6,7,3],
  [4,5,9]]

result=[[0,0,0],
        [0,0,0],
        [0,0,0]]

for i in range(len(X)):
   for j in range(len(X[0])):
       result[i][j]=X[i][j]+Y[i][j]

for r in result:
   print(r)

4.Python program to find H.C.F of two numbers

def compute_hcf(x,y):
    if x>y:
        smaller=y
    else:
        smaller=x
    for i in range(1,smaller+1):
        if((x%i==0) and (y%i==0)):
            hcf=i 
    return hcf

num1=54 
num2=24

print("The H.C.F. is", compute_hcf(num1,num2))


5.Python Program to find the L.C.M. of two input number

def compute_lcm(x,y):
   if x>y:
       greater=x
   else:
       greater=y

   while(True):
       if((greater % x==0) and (greater % y==0)):
           lcm=greater
           break
       greater +=1
   return lcm
num1=54
num2=24

print("The L.C.M. is", compute_lcm(num1,num2))

6.Display the powers of 2 using anonymous function

terms=10
result=list(map(lambda x:2**x, range(terms)))
print("The total terms are:",terms)
for i in range(terms):
   print("2 raised to power",i,"is",result[i])

7.Python program to check if year is a leap year or not

year=2000
elif (year % 4==0) and (year % 100 !=0):
    print("{0} is a leap year".format(year))
else:
    print("{0} is not a leap year".format(year))


8.Solve the quadratic equation ax**2 + bx + c = 0

import cmath
a = 1
b = 5
c = 6
d = (b**2) - (4*a*c)
sol1 = (-b-cmath.sqrt(d))/(2*a)
sol2 = (-b+cmath.sqrt(d))/(2*a)
print('The solution are {0} and {1}'.format(sol1,sol2))


9.Python program to swap two variables

x=5
y=10

x=input('Enter value of x: ')
y=input('Enter value of y: ')

temp=x
x=y
y=temp

print('The value of x after swapping: {}'.format(x))
print('The value of y after swapping: {}'.format(y))

10.Taking kilometers input from the user

kilometers = float(input("Enter value in kilometers: "))
conv_fac = 0.621371
miles = kilometers * conv_fac
print('%0.2f kilometers is equal to %0.2f miles' %(kilometers,miles))



                                                                          C-Programs


11.convert binary to decimal

#include <stdio.h>
#include <math.h>

int convert(long long);

int main() {

  long long n;

  printf("Enter a binary number: ");
  scanf("%lld",&n);

  printf("%lld in binary=%d in decimal",n,convert(n));

  return 0;
}

int convert(long long n) {

  int dec=0, i=0, rem;

  while (n !=0) {

    rem=n % 10;

    n/=10;

    dec+=rem*pow(2,i);

    ++i;
  }

  return dec;
}

12.C Program to Print Pyramids and Patterns

#include<stdio.h>
int main() {
   int i,j,rows;
   printf("Enter the number of rows: ");
   scanf("%d",&rows);
   for (i=1;i<=rows;++i) {
      for (j=1; j<=i;++j) {
         printf("*");
      }
      printf("\n");
   }
   return 0;   
}


13.C Program to Display its own Source Code as Output

#include <stdio.h>
int main() {
    FILE*fp;
    int c;
    fp=fopen(__FILE__,"r");

    do {
         c=getc(fp);   
         putchar(c);     
    }
    while(c!=EOF);  
    fclose(fp);
    return 0;
}

14.C Program to Read the First Line From a File

#include <stdio.h>
#include <stdlib.h> // For exit() function
int main() {
    char c[1000];
    FILE*fptr;
    if ((fptr=fopen("program.txt","r"))==NULL) {
        printf("Error! File cannot be opened.");
        exit(1);
    }
    fscanf(fptr,"%[^\n]",c);
    printf("Data from the file:\n%s",c);
    fclose(fptr);

    return 0;
}

15.C Program to Store Data in Structures Dynamically

#include <stdio.h>
#include <stdlib.h>
struct course {
  int marks;
  char subject[30];
};

int main() {
  struct course*ptr;
  int noOfRecords;
  printf("Enter the number of records: ");
  scanf("%d",&noOfRecords);

  ptr = (struct course*)malloc(noOfRecords*sizeof(struct course));
  for (int i=0;i<noOfRecords; ++i) {
    printf("Enter subject and marks:\n");
    scanf("%s %d",(ptr+i)->subject,&(ptr+i)->marks);
  }

  printf("Displaying Information:\n");
  for (int i=0;i<noOfRecords;++i) {
    printf("%s\t%d\n",(ptr+i)->subject,(ptr+i)->marks);
  }
  free(ptr)
  return 0;
}
