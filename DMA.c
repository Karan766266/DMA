void main(){

    int n;
    int *p;
    printf("Enter how many memory you want to allocate:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));


/*
int*p,*q;
p=(int*)malloc(sizeof(int));
*p=34;
printf("%d",*p);


q=(int*)calloc(6,sizeof(int));
*(q+0)=45;
*(q+1)=55;
*(q+4)=60;

printf("%d %d",*(q+2),*(q+0));

q=(int*)realloc(q,9);
*(q+8)=40;
printf("%d ",*(q+8));
free(p);
free(q);
*/
getch();
}
