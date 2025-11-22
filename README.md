 ELECTRICITY BILL GENERATOR
To design a system to generate electricity bills based on the units consumed by the consumers.

RESEARCH:
The billing process is crucial for any business as it ensures timely payment and helps maintain a healthy cash flow. Without an effective billing process, businesses risk delayed or missed payments, which  can result in financial difficulties. By having a well-structured billing process, businesses can also build trust and strengthen their relationships with clients.
Billing Process: What is it, Key Elements & Steps in Billing Process


ANALYSIS:
steps in the billing process:
1. Gathering information
 This involves collecting all the necessary details about the products or services provided, pricing, and other billing-related information.
2. Creating an invoice
After gathering the necessary information, the invoice is created, which includes the description of products or services provided, pricing, payment terms, and contact information of both the provider and the customer.
3. Review and approval
Once the invoice is created, it’s reviewed and approved by the authorized personnel to ensure accuracy.
4. Delivery
After approval, the invoice is delivered to the customer via mail or email.
5. Payment
The customer reviews the invoice, and if there are no issues, they make the payment. The payment is then processed, and the transaction is recorded
6. Follow-up
In case of non-payment or delayed payment, a follow-up is necessary to ensure timely payment and prevent any disputes.
7. Record keeping
It’s essential to maintain accurate records of all the invoices, payments received, and follow-up activities. This helps in tracking the cash flow and identifying any discrepancies


IDEATE:
IRCTC Train Ticket Booking Timings
IRCTC Train Ticket Booking Timings
00:20 AM to 11:45 PM
IRCTC website's shutdown timings for maintenance
11:45 PM to 12:20 AM
Tickets for how many passengers per PNR can be booked for IRCTC Tatkal e-tickets (including children)?
4 Passengers (max.)
Senior Citizen Quota in IRCTC
Yes
Senior citizen concession in IRCTC Tatkal Quota
Not Allowed
IRCTC Tatkal Booking Timings For AC berth
10:00 to 10:30 AM
IRCTC tatkal booking timings for a Non-AC berth
11:00 to 11:30 AM
Maximum train ticket booking allowed per user in a month for Indian Railways reservation
24 for users with an Aadhaar number linked and 12 for others.
Maximum train tickets that can be booked from one user ID in a day
Maximum of two tickets can be booked from 1 user ID in a day.

IRCTC Train Ticket Prices/Fare as per Travel Class
Travel Class
Minimum Distance for Charge
Basic Fare at Min Dist
Res Fee
Supp Charge for Superfast Trains
Second Class
50 Kms
₹30
₹15
₹15
Sleeper Class
200 Kms
₹124
₹20
₹30
AC Chair Car
150 Kms
₹211
₹40
₹45
AC 3 Tier
300 Kms
₹470
₹40
₹45
First Class
100 Kms
₹232
₹50
₹45
Executive Class
N/A
N/A
₹60
₹75

Train Ticket Booking Online, Use IRCTC Login | ixigo

BUILD:
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
    
TEST :   
Enter Passenger Name:pooja

Enter age of the passenger:23

Enter Gender (male/female/other): female

 _ _ _Enter Journey Detail _ _ _

Enter train name:ssg

Enter Source Station: pune

Enter Destination Station:rajasthan

Enter Date of Journey (DD-MM-YYYY):12-12-2025

Enter Berth(e.g.,Lower,Upper):lower

********RAILWAY FARE CALCULATION********
Enter the journey distance in kilometer:100

Enter travel class(1-4):1

Calculated train fare: 350.000000
********Railway Bill********
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
Passenger Name: saee
Age: 23
Gender: female
Train name: ssg
Source: pune
Destination: rajasthan
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
Total Fare: 350.000000
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 

=== Code Execution Successful ===
CASE 2:    
_ _ _ ENTER PASSENGER DETAILS _ _ _

Enter Passenger Name:raj

Enter age of the passenger:33

Enter Gender (male/female/other): male

 _ _ _Enter Journey Detail _ _ _

Enter train name:ssj

Enter Source Station: pune

Enter Destination Station:Rajasthan

Enter Date of Journey (DD-MM-YYYY):11-10-2025

Enter Berth(e.g.,Lower,Upper):upper

********RAILWAY FARE CALCULATION********
Enter the journey distance in kilometer:50

Enter travel class(1-4):3

Calculated train fare: 125.000000
********Railway Bill********
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
Passenger Name: raj
Age: 33
Gender: male
Train name: ssj
Source: pune
Destination: Rajasthan
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
Total Fare: 125.000000
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 

=== Code Execution Successful ===
CASE 3:
_ _ _ ENTER PASSENGER DETAILS _ _ _

Enter Passenger Name:kartik

Enter age of the passenger:43

Enter Gender (male/female/other): male

 _ _ _Enter Journey Detail _ _ _

Enter train name:ssj

Enter Source Station: pune

Enter Destination Station:Rajasthan

Enter Date of Journey (DD-MM-YYYY):12-12-2025

Enter Berth(e.g.,Lower,Upper):lower

********RAILWAY FARE CALCULATION********
Enter the journey distance in kilometer:300

Enter travel class(1-4):2

Calculated train fare: 750.000000
********Railway Bill********
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
Passenger Name: kartik
Age: 43
Gender: male
Train name: ssj
Source: pune
Destination: rajasthan
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
Total Fare: 750.000000
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 

=== Code Execution Successful ===
CASE 4:
_ _ _ ENTER PASSENGER DETAILS _ _ _

Enter Passenger Name:awara

Enter age of the passenger:46

Enter Gender (male/female/other): female

 _ _ _Enter Journey Detail _ _ _

Enter train name:ssj

Enter Source Station: pune

Enter Destination Station:rajasthan

Enter Date of Journey (DD-MM-YYYY):12-12-2025

Enter Berth(e.g.,Lower,Upper):upper

********RAILWAY FARE CALCULATION********
Enter the journey distance in kilometer:200

Enter travel class(1-4):4

Calculated train fare: 500.000000
********Railway Bill********
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
Passenger Name: sawara
Age: 46
Gender: female
Train name: ssj
Source: pune
Destination: rajasthan
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
Total Fare: 500.000000
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 

=== Code Execution Successful ===
CASE 5:
_ _ _ ENTER PASSENGER DETAILS _ _ _

Enter Passenger Name:swara

Enter age of the passenger:32

Enter Gender (male/female/other): female

 _ _ _Enter Journey Detail _ _ _

Enter train name:ssj

Enter Source Station: pune

Enter Destination Station:rajasthan

Enter Date of Journey (DD-MM-YYYY):12-12-2025

Enter Berth(e.g.,Lower,Upper):upper

********RAILWAY FARE CALCULATION********
Enter the journey distance in kilometer:250

Enter travel class(1-4):5

Invalid class choice.
Calculated train fare: 0.000000
********Railway Bill********
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
Passenger Name: swara
Age: 32
Gender: female
Train name: ssj
Source: pune
Destination: rajasthan
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 
Total Fare: 0.000000
 
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ 

=== Code Execution Successful ===

