#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void is_prime(int n); //function declaration or prototype to check number is prime or not.
int largest(int n1, int n2, int n3, int n4); //Function to find out maximum of four integers
int smallest(int n1, int n2, int n3, int n4); //Function to find out minimum of four integers
void check_even_odd(int n); //
//Function to check whether a number is prime or not
void is_prime(int n) {
    int i, flag = 1;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if(n<=1)
        flag=0;
    else if(n==2)
        flag=1;
    if (flag == 1) {
        // cout<<"is prime.";
        printf("is prime.\n");
    }
    else {
        printf("is not prime.\n");
    }
}

//Function to find out maximum of four integers

int largest(int n1, int n2, int n3, int n4){
    int first_of_two_largest = (n1>n2)?n1:n2;
    int second_of_two_largest = (n3>n4)?n3:n4;
    return (first_of_two_largest>second_of_two_largest)?first_of_two_largest:second_of_two_largest;
}

//Function to find out minimum of four integers

int smallest(int n1, int n2, int n3, int n4){
    int first_of_two_smallest = (n1<n2)?n1:n2;
    int second_of_two_smallest = (n3<n4)?n3:n4;
    return (first_of_two_smallest<second_of_two_smallest)?first_of_two_smallest:second_of_two_smallest;
}

//Function to check whether number is even or odd

void check_even_odd(int n) {
    if(n%2==0)
        printf("even");
    else
        printf("odd");
}


int main() {
    int n1,n2,n3,n4;
    printf("Enter four numbers\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    if((n1<50||n1>100)||(n2<50||n2>100)||(n3<50||n3>100)||(n4<50||n4>100)) {
        printf("Invalid Input\n");
        return 0;
    }
    int p=n1*n2*n3*n4;
    int l;
    l=largest(n1,n2,n3,n4);
    int m;
    m=smallest(n1,n2,n3,n4);
    printf("The number entered are %d, %d, %d, %d.\n",n1,n2,n3,n4);
    printf("The product of %d x %d x %d x %d = %d\n",n1,n2,n3,n4,p);
    printf("The largest number is %d.\n",l);
    printf("The smallest number is %d.\n",m);
    printf("The number %d is ", n1);check_even_odd(n1); printf(" and ");is_prime(n1);
    printf("The number %d is ", n2);check_even_odd(n2); printf(" and ");is_prime(n2);
    printf("The number %d is ", n3);check_even_odd(n3); printf(" and ");is_prime(n3);
    printf("The number %d is ", n4);check_even_odd(n4); printf(" and ");is_prime(n4);
    return 0;
}
