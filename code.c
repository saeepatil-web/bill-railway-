#include <stdio.h>
#include <string.h>
float caltrainfare(float distance,int ClassTravel){
    float base_rate;
    float total_fare;
    
switch(ClassTravel){
    case 1://first class AC
    base_rate=3.5;
    break;
    case 2://second class AC
    base_rate=2.5;
    
    break;
    case 3:
    base_rate=2.5;
    
    break;
    case 4://sleeper class AC
    base_rate=2.5;
   
    break;
    default:
    printf("\nInvalid class choice.");
    return 0.0;
}

total_fare=distance*base_rate;
return total_fare;
}
int main(){
char name[50];
char gender[10];
char train_no[20];
char train_name[50];
char source[50];
char destination[50];
char date[50];
char coach[10];
char berth[10];
int age;
int distance;
float fare;
int ClassTravel;
printf("_ _ _ ENTER PASSENGER DETAILS _ _ _\n");
printf("\nEnter Passenger Name:");
scanf("%s", &name);
printf("\nEnter age of the passenger:");
scanf("%d", &age);
printf("\nEnter Gender (male/female/other): ");
scanf("%s", &gender);
printf("\n _ _ _Enter Journey Detail _ _ _\n");
printf("\nEnter train name:");
scanf("%s", &train_name);
printf("\nEnter Source Station: ");
scanf("%s", &source);
printf("\nEnter Destination Station:");
scanf("%s", &destination);
printf("\nEnter Date of Journey (DD-MM-YYYY):");
scanf("%s", &date);
printf("\nEnter Berth(e.g.,Lower,Upper):");
scanf("%s", &berth);

printf("\n********RAILWAY FARE CALCULATION********");
printf("\nEnter the journey distance in kilometer:");
scanf("%d", &distance);
if (distance <=0){
    printf("\nDistance must be greater than 0");
}
printf("\nEnter travel calss(1-4):");
scanf("%d", &ClassTravel);
fare = caltrainfare(distance,ClassTravel);
printf("\nCalculated train fare: %f",fare);
printf("\n********Railway Bill********");
printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _");
printf("\nPassenger Name: %s\n",name);
printf("Age: %d\n",age);
printf("Gender: %s\n",gender);
printf("Train name: %s\n",train_name);
printf("Source: %s\n",source);
printf("Destination: %s\n",destination);
printf(" \n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
printf("\nTotal Fare: %f\n",fare);
printf(" \n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
return 0;
}
    
