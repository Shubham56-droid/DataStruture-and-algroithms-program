#include<stdio.h>
#include<string.h>

int main(){
    
    char list[5][10] = {"Apple","Brisket","Quanta","Toronto","Zirconium"};
    char word[] = "Brisket";
    int found = 0;
    
    for(int i=0;i<5;i++){
        if(strcmp(list[i],word)==0){
            printf("%s present at %d",word,i+1);
            found = 1;
	    break;
        }
    }
    if(found == 0){
	printf("Element not found");
    }   
}