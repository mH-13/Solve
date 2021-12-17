//Solve-1

#include <stdio.h>
int main(){
	int year;
    while (~scanf("%d", &year)) {
	    if(year%400==0 || (year%4==0 && year%100!=0)) {
	        printf("It is a leap year.\n");
	    }
	    else{
	        printf("It is not a leap year.\n");
	    }
    }
    return 0;
}

//Solve-2


#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year) {
	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main() {
	int year;
	while(cin >> year) {
		cout << year << " is " << (isLeapYear(year) ? "a leap Year\n" : "not a leap year\n");
	}
}


//Solve-3

#include <stdio.h>
int main(){
    for (int i = 0; i < 8; i++) {
    	int year, i;
	    scanf("%d", &year);
	
	    if(year%400==0 || (year%4==0 && year%100!=0)) {
	        printf("It is a leap year.\n");
	    }
	    else{
	        printf("It is not a leap year.\n");
	    }
    }
    return 0;
}

//Solve-4

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		cout << n << " is " << (((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) ? "a leap Year\n" : "not a leap year\n");
	}
}

//Solve-5

#include <stdio.h>
int main(){
    int year, i;
    scanf("%d", &year);

    if((year%4==0 && year%100==0 && year%400==0) || (year%4==0 && year%100!=0)) {
        printf("It is a leap year.\n");
    }
    else{
        printf("It is not a leap year.\n");
    }
    return 0;
}
