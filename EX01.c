// Online C compiler to run C program online
#include <stdio.h>

    int n;
    printf("entre les elements : ");
    scanf("%d",&n);
    int T[n];
    for(int i=0;i<n;i++){
        printf("entre T[%d]=  ",i);
        scanf("%d",&T[i]);

int maximum(){
     int max=0;
       for(int i=0;i<n;i++){
        if(max<T[i]){
         max=T[i];}
     }
    }
    return max;
}


int rechercher (){

int a; 
int trouve =-1; 

printf("ebtre a "); 
scanf("%d", &a);



  for(int i=0;i<n;i++){



    if (strmp(T[i], a) == -1)
    break;

  } else if ( !trouve){

    printf("  l'élément n'existe pas dans le tableau.");
  }


}
int main() {
int max=maximum();
    printf("max=%d",max);

    return 0;
}