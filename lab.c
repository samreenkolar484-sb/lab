/*#include <stdio.h>
int main()
{
	printf("hello world\n");

}*/

/*#include <stdio.h>
int main()
{

	printf("name:.........\n");
	printf("full name:........\n");
	printf("hno:...........\n");
	
	
}*/


/*(#include <stdio.h>
void main()
{
	float x=12.34;
	printf("%f\n",x);
}*/

/*# include <stdio.h>
void main()
{
	char x='a';
	printf("%c\n",x);

}*/
/*#include <stdio.h>
void main()
{
	int a=20,b=10,c;
	c=a+b;
	printf("%d+%d=%d\n",a,b,c);
}*/
/*# include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the number");
	scanf("%d", &a);
	printf("a=%d\n",a);

	printf("Enter the number");
	scanf("%d", &b);
	printf("b=%d\n",b);

	return 0;

}*/

/*#include <stdio.h>
char main()
{
	char x,y,z;
	printf("Enter the character");
	scanf(" %c", &x);
	printf("x=%c\n", x);

	printf("Enter the charcter");
	scanf(" %c", &y);
	printf("y=%c\n", y);

	printf("Enter the character");
	scanf(" %c", &z);
	printf("z=%c\n", z);



}*/


/*#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two nmbers");
	scanf(" %d%d",&a,&b);
	c=a+b;
	printf("%d\n",c);
	return 0;

}*/

/*#include <stdio.h>
int main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	printf("a:%d",a);
}*/

/*#include <stdio.h>
int a=3;
int main()
{
	const int a=4;
	printf("a:%d\n",a);
	printf("a=%d\n",a);
	return 0;
}*/
/*#include <stdio.h>
int main()
{
	int k=5,i,j;
	i=k++,j=(k++,k++,++k);
	printf("i=%d\t j=%d",i,j);
	return 0;

}*/

/*#include <stdio.h>
int main()
{

	printf("char occupies%ldbytes\n",sizeof(char));
	printf("int occupies%ld bytes\n",sizeof(int));

	return 0;
}*/

//average of 3 numbers
/*#include <stdio.h>
int main()
{
	int a=3,b=4,c=2,d;
	d=(a+b+c)/3;
	printf("(%d+%d+%d)/3=%d\n",a,b,c,d);
	return 0;

}*/

// swaping of 2 numbers
/*#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}*/


/*#include <stdio.h>
int main()
{
	int a,b;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}*/

//area of a rectangle

/*#include <stdio.h>
int main()
{
	int l,b,a;
	printf("Enter land b");
	scanf("%d%d",&l,&b);
	printf("l=%d,b=%d\n",l,b);
	a=l*b;
	printf("a=%d\n",a);
	return 0;


}*/
// area of a circle
/*#include <stdio.h>
int pi=3.144;
int main()
{
	int r,z;
	printf("enter the r value");
	scanf("%d",&r);
	printf("r=%d\n",r);
	z=pi*r*r;
	printf("z=%d\n",z);
	return 0;

}*/

//perimeter of a rectangle
/*#include <stdio.h>
int main()
{
	int l,b,p;
	printf("Enter land b");
	scanf("%d%d",&l,&b);
	printf("l=%d,b=%d\n",l,b);
	p=2*(l+b);
	printf("p=%d\n",p);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a=10,b;
	printf("%d\n",a);
	printf("Enter the number");
	scanf("%d",&b);
	printf("b=%d\n",b);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	float a=10.22,b=33461628172.5;
	printf("%f\n",a);
	printf("%f\n",b);
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	char a='a';
	
	printf("%d\n",a);
	printf("%c\n",a);
	return 0;

}*/

//%zu unusigned int lab programs 
/*#include <stdio.h>
void main()
{
	printf("int occupies %zu bytes\n",sizeof(int));
	printf("float occupies %zu bytes\n",sizeof(float));
	printf("char occupies %zu bytes\n",sizeof(char));
	printf("double occcupies %zu bytes\n",sizeof(double));
	printf("longdouble occpupies %zu bytes\n",sizeof(long double));
	printf("long int occupies%zu bytes\n",sizeof(long int) );
	printf("short int occupies %zu bytes\n",sizeof(short int));
	printf("signed int occupies %zu bytes\n",sizeof(signed int));
	printf("unsigned int occupies %zu bytes\n",sizeof(unsigned int));
}*/
//lab prgrm-2
/*#include <stdio.h>
void main()
{
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	if(a%2==0)
		printf("The given number is even\n");
	else
		printf("THe given number is odd\n");
}*/

//lab prgrm-3
/*#include <stdio.h>
#include <math.h>
void main()
{
	int a,b;
	char operator;
	printf("Enter a,b values");
	scanf("%d %d",&a,&b);
	printf("Enter the operator(+,-,*,/):");
	scanf(" %c",&operator);

	switch(operator)
	{
	case '+':
		printf("a+b=%d\n",a+b);
		break;
	case '-':
		printf("a-b=%d\n",a-b);
		break;
	case '*':
		printf("a*b=%d\n",a*b);
		break;
	case '/':
		printf("a/b=%d\n",a/b);
		break;
	case '%':
		printf("%d%% %d=%d\n",a,b,a%b);
		break;
	

	default:
		printf("Error");

	}
}*/

// lab prgrm 4
/*#include <stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter the 2 numbers");
	scanf("%d%d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	//temp=a;
	//a=b;
	//b=temp;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d",a);
	printf("b=%d\n",b);

}*/


/*#include <stdio.h>
void main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	if(a>0)
		printf("IT is positive number");
	else if(a<0)
		printf("it is negative number");
	else
		printf("It is a zero");
}*/

/*#include <stdio.h>
void main()
{
	int a;
	float b;
	char c;
	printf("Enter the 3 numbers");
	scanf("%d %f %c",&a,&b,&c);
	printf("a=%d b=%f c=%c\n",a,b,c);
	
}*/

/*#include <stdio.h>
void main()
{
	int a[5]={1,2,3,4,5};
	int *b=&a[2];
	printf("a=%d\n",a[4]);
	printf("%d\n",*b);
}*/

/*#include <stdio.h>
void main()
{
char ch;
printf(“\n Enter any character:”);
scanf(“%c”,&ch);
switch(ch)
{
	case ‘a’:
		printf(“%c is a VOWEL”, ch);
		break;
	case ‘e’:
		printf(“%c is a VOWEL”, ch);
		break;);
	scanf("%d%d%d",&a,&b,&c);
	printf("%d%d%d\n",a,b,c);
	if(a<b)
	{
		if(a<c)
			printf("%d
	case ‘i’:
		printf(“%c is a VOWEL”, ch);
		break;
	case ‘o’:
		printf(“%c is a VOWEL”, ch);
		break;
	case ‘u’:
		printf(“%c is a VOWEL”, ch);
		break;
	default:
		printf(“%c is not a VOWEL”, ch);
}


}*/


//square root use lm command while running 
/*#include <stdio.h>
#include <math.h>
void main()
{
	int n,root,num;
	printf("Enter the number");
	scanf("%d",&n);
	root=sqrt(n);
	num=root*root;
	if(num==n)
		printf("ii is a perfect square\n");
	else
		printf("not a perfect square\n");
}*/

/*#include <stdio.h>
void main()
{
	int i=1;
	for(i=1;i<=5;i++)
		printf("%d\n",i);
	while(i<=5)
	{
		
		printf("%d\n",i);
		i++;

	}

}*/

/*#include <stdio.h>
void main()
{
	int n,temp,sum=0,rev;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	rev=n%10;
	sum=sum*10+rev;
	n=n/10;
	
    }
    if(sum==temp)
    	printf("It is a polindrome");
    else
    	printf("It is not a polindrome");
}*/

//prime number code

/*#include <stdio.h>
int main()
{
	int n,c=0;
	printf("Enter the number");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			c=c+1;
		}
		i++;
	}
		if(c==2)
			printf("It is a prime number\n");
		else
			printf("It is not a prime number\n");
		return 0;
}*/

//to print prime numbers from 1 to n

/*#include <stdio.h>
int main()
{
	int n,i,j,count;
	printf("Enter the number");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;

			}
		}
		if(count==2)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}*/


//factors of a given number
/*#include <stdio.h>
void main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	int i=1;
	for(i=1;i<=a;i++)
	
		if(a%i==0)
		{
		printf("i=%d\n",i);
		}
	
}*/

//to print n prime numbers n=5 2,3,5,7,11
/*#include <stdio.h>
void main()
{
	int n,count=0,num=2,i,prime;
	printf("Enter the number");
	scanf("%d",&n);
	while(count<n)
	{
		prime=1;
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				prime=0;
			

				break;
			}
		}
	
		if(prime==1)
		{
			printf("%d\n",num);
			count++;
		}
		num++;
	}

}*/

/*#include <stdio.h> //to print prime numbers up to the given number
int main()

{
	int i,j,prime,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		prime=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}


		}
		if(prime==1)
		{
			printf("%d\n",i);
		}
	}

}*/

//perfect number

/*#include <stdio.h>
void main()
{
	int count=0,num,i;
	long int n,sum;
	printf("Enter the number");
	scanf("%ld",&n);
	num=1;
	while(count<n)
	{
		sum=0;
		for(i=1;i<num;i++)
		{
			if(num%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==num)
		{
			printf("%d\n",num);
			count++;
		}
		num++;
	} 
}*/

// loops lab proogram
//to print prime numbers from 1 to n: prime numbers upto n

/*#include <stdio.h>
int main()
{
	int n,i,j,count;
	printf("Enter the number");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;

			}
		}
		if(count==2)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}*/

// first n prime numbers
/*#include <stdio.h>
int main()
{
	int n,i,j,count,prime_count=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=2;prime_count<n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{

			if(i%j==0)
			
				count++;
		}
			
			if(count==2)
			{
			
				printf("%d",i);
				prime_count++;
			}
			
	
	}
	return 0;

}*/

//pascal triangle
/*#include <stdio.h>
int main()
{
	int n,j,i,value;
	printf("ENter the number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		value=1;
		for(j=0;j<=i;j++)
		{
			printf("%d",value);
			value=value*(i-j)/(j+1);

		}
		printf("\n");
	}
	return 0;

}*/

//  first n perfect numbe
/*#include <stdio.h>
void main()
{
	int count=0,num,i;
	long int n,sum;
	printf("Enter the number");
	scanf("%ld",&n);
	num=1;
	while(count<n)
	{
		sum=0;
		for(i=1;i<num;i++)
		{
			if(num%i==0)
			{
				sum=sum+i;
			}
		}
		if(sum==num)
		{
			printf("%d\n",num);
			count++;
		}
		num++;
	} 
}*/

/*#include <stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("* ");

		}
		printf("\n");
	}
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int n,i,j,k,num=2;
	int prime;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n;j++)
		{
			printf("  ");
		}
			for(j=1;j<=i;j++)
			{
				prime=0;
				while(prime==0)
				{
					prime=1;
				
					for(k=2;k<num;k++)
					{
						if(num%k==0)
						{
							prime=0;
							break;
						}
					
						if(prime==0)
						{
							num++;
						}
					}
					printf("%3d",num);

						num++;
						
				}
			
				
			}
			printf("\n");
	}
	return 0;
}*/
/*#include <stdio.h>
void main()
{
	int i,n,arr[20];
	int min,s_min;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("The array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	int max,s_max;
	max=arr[0];
	s_max=arr[1];
	if(s_max>max)
	{
		int temp=max;
		max=s_max;
		s_max=temp;
	}
	for(i=2;i<n;i++)
	{
		if(arr[i]>max)
		{
			s_max=max;
			max=arr[i];
		}
		else if(arr[i]>s_max && arr[i]<max)
		{
			s_max=arr[i];
		}

	}
	//finding the second smallest 
	min=arr[0];
	s_min=arr[i];
	if(s_min<min)
	{
		int temp=min;
		min=s_min;
		s_min=temp;

	}
	for(i=2;i<n;i++)
	{
		if(arr[i]<min)
		{
			s_min=min;
			min=arr[i];

		}
		else if(arr[i]<s_min && arr[i]>min)
		{
			s_min=arr[i];
		}
	}
	printf("The second largest number is %d",s_max);
	printf("The second smallest number is %d",s_min);
	printf("\n");

}*/

// two dimensional array

//to print sum 
/*#include <stdio.h>
int main()
{
	int i,j,r,c;
	int a[10][10],b[10][10],d[10][10];
	printf("Enter the number of rows an cols");
	scanf("%d%d",&r,&c);
	printf("read tha matrix elments\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("The matrix A is \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				printf("%d\t",a[i][j]);
			printf("\n");
		}
		printf("Read the matrix B elments\n");
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
			{
				printf("b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);

			}
			printf("The Matrix b is \n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
					printf("%d\t",b[i][j]);
				printf("\n");
			}
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
					d[i][j]=a[i][j]-b[i][j]; //replace sum with - and /
			}
			printf("The sum of matrix  A and B is\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
					printf("%d\t",d[i][j]);
				printf("\n");
			}
			return 0;
}*/

/*#include <stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j,k;
	int a[10][10],b[10][10],c[10][10];
	printf("Enter the number of rows an cols");
	scanf("%d%d",&r1,&c1);
	printf("ENter the matrix b rows and cols");
	scanf("%d%d",&r2,&c2);
	printf("read tha matrix elments\n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("The matrix A is \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				printf("%d\t",a[i][j]);
			printf("\n");
		}
		printf("Read the matrix B elments\n");
		for(i=0;i<r2;i++)
			for(j=0;j<c2;j++)
			{
				printf("b[%d][%d]",i,j);
				scanf("%d",&b[i][j]);

			}
			printf("The Matrix b is \n");
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
					printf("%d\t",b[i][j]);
				printf("\n");
			}
			if(c1!=r2)
			{
				printf("The multiplication is not possible");
				return 0;
			}

			for(i=0;i<r1;i++)
			{
				for(j=0;j<c2;j++)
				{
					c[i][j]=0;
					for(k=0;k<c1;k++)
					{
						c[i][j]=c[i][j]+a[i][k]*b[k][j];
					}
				}
			}
			printf("The multiplication matrix is \n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("%d\t",c[i][j]);
				}
				printf("\n");
			}
			return 0;

			

}*/


//to print the transpose

/*#include <stdio.h>
int main()
{
	int arr[10][10],trans[10][10];
	int rows,cols,i,j;
	printf("ENter the rows and cols");
	scanf("%d%d",&rows,&cols);
	printf("Enter the element matrix\n ");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);

		}
	}
	printf("the matrix is\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d",arr[i][j]);
			
			
		}
		printf("\n");
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			trans[j][i]=arr[i][j];
			
		}
	}
	printf("The transpose of a matrix\n");
	for(i=0;i<cols;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%d",trans[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
*/


// to print diagonal elemts
/*#include <stdio.h>
int main()
{
	int matrix[10][10];
	int n,i,j;
	printf("Enter the size of the matrix");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("matrix[%d][%d]",i,j);
			scanf("%d",&matrix[i][j]);

		}
		
	}
	printf("the diagonal elments are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",matrix[i][i]);

	}
	return 0;
}*/

//secondary diagonal elmets
/*#include <stdio.h>
int main()
{
	int matrix[10][10];
	int n,i,j;
	printf("Enter the size of the matrix");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("matrix[%d][%d]",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("The secondary diagonal elemts are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",matrix[i][n-1-i]);
	}
	return 0;
}
*/

// printing lowercase uppercase usiing functions

/*#include <stdio.h>
#include <ctype.h>
int main()
{
	char str[100];
	int i;
	printf("Enter the number");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(islower(str[i]))
		{
			str[i]=toupper(str[i]);
		}
		else if(isupper(str[i]))
		{
			str[i]=tolower(str[i]);
		}
	}
	printf("converyted string :%s",str);
	return 0;

}*/

//converting lower to upper bwithout using string functions
/*#include <stdio.h>
int main()
{
	char str[100];
	int i;
	printf("ENter a string");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' &&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;

		}

	}
	printf("Converted string:%s",str);
	return 0;
}*/

// to print no.of vowels,consonants,digits with functions
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i, vowels=0,consonants=0,digits=0;
	printf("ENter a string");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(isalpha(str[i]))
		{
			if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='u' || str[i]=='o'|| str[i]=='u'||str[i]=='A' ||str[i]=="E"||str[i]=="I" ||str[i]=="O"|| str[i]=="U")
			{
				vowels++;
			}
			else
			{
				consonants++;
			}

		}
		else if(isdigit(str[i]))
		{
			digits++;
		}

	}
	printf("Number of vowels=%d\n",vowels);
	printf("Number of consonants=%d\n",consonants);
	printf("Number of digits=%d\n",digits);
	return 0;
}

*Palindrome with string functions* 
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}



*Sorting of string*
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j, length;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length using string function
    length = strlen(str);

    // Bubble sort characters in ascending order
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);
    return 0;
}

*Printing strings starting with c and a*

#include <stdio.h>

int main()
{
    char str[100][100];
    int n, i;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    printf("Strings starting with c or a:\n");

    for (i = 0; i < n; i++)
    {
        if (str[i][0] == 'c' || str[i][0] == 'a')
        {
            printf("%s\n", str[i]);
        }
    }

    return 0;
}

*Dictionary order*

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][100], temp[100];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter the strings:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    /* Arrange in dictionary order */
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Strings in dictionary order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}


*string reverse order*
#include <stdio.h>

int main()
{
    char str[100];
    int i, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    end = 0;

    while (str[end] != '\0')
    {
        end++;
    }

    /* Remove newline */
    if (str[end - 1] == '\n')
    {
        str[end - 1] = '\0';
        end--;
    }

    for (i = end - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            printf("%s ", &str[i + 1]);
            str[i] = '\0';
        }
    }

    printf("%s", str);

    return 0;
}









	
	
		
	





	




