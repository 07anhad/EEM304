#include<stdio.h>
void hanoiTower(int n,char a,char c,char b){
    if(n==0)
    return;
    hanoiTower(n-1,a,b,c);
    printf("%d%c%c",n,a,c);
    hanoiTower(n-1,b,c,a);
}
int main(){
    int n;
    scanf("%d", &n);   
    hanoiTower(n,'A','C','B');
    return 0;
}
