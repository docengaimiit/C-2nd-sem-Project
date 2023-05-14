#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "maze mat lo, enter the valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void trigo();
void logarithm();

int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to quit the program ********\n");
    printf("Enter 1 for Addition \n");
    printf("Enter 2 for Subtraction \n");
    printf("Enter 3 for Multiplication \n");
    printf("Enter 4 for Division \n");
    printf("Enter 5 for Modulus\n");
    printf("Enter 6 for Power \n");
    printf("Enter 7 for Factorial \n");
    printf("Enter 8  for square \n");
    printf("Enter 9  for cube \n");
    printf("Enter 10 for squareroot\n");
    printf("Enter 11 for Trignometric functions\n");
    printf("Enter 12 for Logarithm\n\n");
    
    while(1){    
    printf("\n\nEnter the operation you want to do: ");
    
    scanf("%d",&choice);
            
    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    power();
                    break;
                case 7:
                    factorial();
                    break;
                case 8:
                    square();
                    break;
                case 9:
                    cube();
                    break;
                case 10:
                    squareroot();
                    break;
                case 11:
					trigo();
					break;
				case 12:
					logarithm();
					break;    
                case 0:
                    exit(0);
                default:
                    printf("\n********** %s ***********\n",note);
        }
    
    }
    return 0;
}

void addition(){
    printf("Enter the numbers you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d\n",a+b);
}
void subtraction(){
    printf("Enter the numbers you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The subtraction of a and b is %d\n",a-b);
}
void multiplication(){
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
}
void division(){
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of a and b is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
    int n,factorial,i;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}
void power(){
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The power is %lf",e);
}
void square(){
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
void cube(){
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
void squareroot(){
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
void trigo(){
	float b;int option;
	printf("Enter 1 for Sine \n");
    printf("Enter 2 for Cosine \n");
    printf("Enter 3 for Tan \n");
    printf("Enter 4 for Sin-¹ \n");
    printf("Enter 5  for Cos-¹ \n");
    printf("Enter 6  for Tan-¹ \n");
    printf("Enter 0 to exit \n");
    
	double deg_to_rad(int n){
		float x=(M_PI/180)*n;
		return x;
	}
	double rad_to_deg(float n){
		float x=(180.00/M_PI)*n;
		return x;
	}
	void sine(){
    	double b,temp;
    	printf("Enter the angle in degree you want the sine of : ");
    	scanf("%lf",&b);
    	temp=deg_to_rad(b);
    	double s = sin(temp);
    	printf("The sine of %lf degrees is %lf",temp,s);
	}
	void cosine(){
    	double b,temp;
    	printf("Enter the angle in degree you want the cosine of : ");
    	scanf("%lf",&b);
    	temp=deg_to_rad(b);
    	double s = cos(temp);
    	printf("The cosine of %lf degrees is %lf",temp,s);
    }
	void tangent(){
    	double b,temp;
    	printf("Enter the angle in degree you want the tan of : ");
    	scanf("%lf",&b);
    	temp=deg_to_rad(b);
    	double s = cos(temp);
    	printf("The tan of %lf degrees is %lf",temp,s);
    }
	void asine(){
    	double b,temp;
    	printf("Enter the value you want the sin-¹ of : ");
    	scanf("%lf",&b);
    	double s = asin(b);
    	printf("The sin-¹ of %lf is %lf degrees",b,rad_to_deg(s));
    }
	void acosine(){
    	double b,temp;
    	printf("Enter the value you want the cos-¹ of : ");
    	scanf("%lf",&b);
    	double s = acos(b);
    	printf("The cos-¹ of %lf is %lf degrees",b,rad_to_deg(s));
    }
	void atangent(){
    	double b,temp;
    	printf("Enter the value you want the tan-¹ of : ");
    	scanf("%lf",&b);
    	double s = atan(b);
    	printf("The tan-¹ of %lf is %lf degrees",b,rad_to_deg(s));
    }
    while(1){    
    printf("\n\nEnter the operation you want to do: ");
    
    scanf("%d",&option);
            
    switch(option)
    {
                case 1:
                    sine();
                    break;
                case 2:
                    cosine();
                    break;
                case 3:
                    tangent();
                    break;
                case 4:
                    asine();
                    break;
                case 5:
                    acosine();
                    break;
                case 6:
                    atangent();
                    break;
                case 0:
					main();
					break;    
                default:
					printf("Invalid Choice");
				}}
    
}
	
   

void logarithm(){
	double b;
	printf("Enter the number you want the log of : ");
    scanf("%lf",&b);
    double l = log(b);
    printf("The log of %lf is %lf",b,l);
}
