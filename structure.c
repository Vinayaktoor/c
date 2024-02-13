#include<stdio.h>
int main(){
struct student{
char grd;
long int phn_no;
};
struct student vinayak;
vinayak.grd = 'A';
vinayak.phn_no = 9306781861;
 
 struct student arni;
 arni.grd =  'F';
 arni.phn_no = 78647757887;
 printf("%c",vinayak.grd);
    return 0;
}