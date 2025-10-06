# bill-railway-
this c program is build to input your personal info and accordingly create a railway bill.
#include <stdio.h>

int main(){
    int trav_id,totrav_statepin,choise; 
    char trav_name [100],trav_addr [100],trav_type [100],rail_class [1],totravel_state [100],trav_date [100];
    float fin_amt;
    printf("\nwelcome to india rail service!!");
    printf("\nplease enter your details here");
    printf("\nenter travellers name:");
    scanf("%s",&trav_name);
    printf("\nenter traveller's type(domestic,commercial):");
    scanf("%s",&trav_type);
    printf("\nenter travellers id:");
    scanf("%d",&trav_id);
    printf("\nenter current address of the traveller:");
    scanf("%s",&trav_addr);
    printf("\nenter the name of the state the travellers wishes to travel:");
    scanf("%s",&totravel_state);
    printf("\nenter the pin of the state the traveller wishes to travel:");
    scanf("%d",&totrav_statepin);
    printf("\nenter the date the traveller wishes to travel:");
    scanf("%s",&trav_date);
   
    printf("\n1.amount for class 1=1000/- \n2.amount for class 2=800/- \n3.amount for class 3=500/-");
    printf("\nenter the railway class the traveller wishes to travel:");
    scanf("%d",&choise);
    if(choise==1){
        printf("\nfinal amount to pay:1000/- ");
    }
    else if(choise==2){
        printf("\nfinal amount to pay:800/-");
    }
    else if(choise==3){
        printf("\nfinal amount to pay:500/-");
    }
    else{
        printf("\ninvalid choise.please enter a number between 1 and 4.");
    }
    
    return 0;
}
    
