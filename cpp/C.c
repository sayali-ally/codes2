malloc-> one single block of memory
int main(){
    int *ptr,
    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("memory has not been allocated");
    }
    else{
        for(int i=0;i<n;i++){
            ptr[i]=i+1;
        }

        for(int i=0;i<n;i++){
            printf("%d",ptr[i]);
        }
    }
    return 0;
}

calloc-> contigous blocks of memory 

int main(){
    int *ptr,
    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("memory is not allocated");
    }
    else{
        for(int i=0;i<n;i++){
            ptr[i]=i+1;
        }

        for(int i=0;i<n;i++){
            printf("%d",ptr[i]);
        }
    }
    return 0;
}


Free -> used to dynamically de-allocate the memory, the memory allocated by malloc and calloc are not de-allocated on its own.
Hence the free() method is used. 





Explain the difference between const char*, char* const, and const char* const
const char* str ="sayali"
char * const 

int main(){
    int x=10;
    int*ptr=&x;

    *ptr=20;

}

int add(int a,int b);
int subtract(int a,int b);
int main(){
    int (*operation)(int,int);
    operation=add;
    printf("%d",operation(4,6));
    operation=subtract;
    printf("%d",operation(7,2));

    return 0;
}
int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}