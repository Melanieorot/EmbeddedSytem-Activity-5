
#include<stdio.h>
#include<math.h>

/*sender func*/
int sender(int arr[10], int l){

    /*sender dec int*/
    int cs, a;
    int sum = 0;

    printf("\n--Sender--\n");
    for(a = 0; a < l; a++)
    sum += arr[a];
    printf("Sum: %d", sum);

    /*one's complement sender*/
    cs =~ sum;
    printf("\nChechsum: %d", cs);
    return cs;
}

/*receiver func*/
void receiver(int arr[10], int l, int send){

    /*receiver dec int*/
    int cs, a;
    int sum = 0;
    
    printf("\n\n--Reciever--\n");
    for(a = 0; a < l; a++)
    sum += arr[a];
    printf("Sum: %d", sum);

    /*complement receiver func*/
    sum = sum + send;
    cs =~ sum;
    printf("\nChecksum: %d", cs);
}

/*main ask size and elements of array*/
void main(){
    int l,send;
    
    /*size*/
    printf("Size: ");
    scanf("%d", &l);
    int arr[n];

    /*element arrays*/
    printf("Elements--\n");
    for(int a = 0; a < l; a++){
        scanf("%d", &arr[i]);
    }
    
    /*call functions*/
    send = sender(arr, l);
    receiver(arr, l, send);
}