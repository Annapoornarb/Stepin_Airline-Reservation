# Requirements
## Introduction
"Airline Reservation systems (ARS) are systems that allow an airline to sell their inventory (seats). It contains information on schedules and fares and contains a database of reservations (or passenger name records) and of tickets issued (if applicable). ABSs are part of passenger service systems (PSS), which are applications supporting the direct contact with the passenger.ABS eventually evolved into the computer reservations system (CRS). A computer reservation system is used for the reservations of a particular airline and interfaces with a global distribution system (GDS) which supports travel agencies and other distribution channels in making reservations for most major airlines in a single system.

## Research
Airline Reservation systems incorporate airline schedules, fare tariffs, passenger reservations and ticket records. An airline's direct distribution works within their own reservation system, as well as pushing out information to the GDS. The second type of direct distribution channel are consumers who use the internet or mobile applications to make their own reservations. Travel agencies and other indirect distribution channels access the same GDS as those accessed by the airline reservation systems, and all messaging is transmitted by a standardized messaging system that functions on two types of messaging that transmit on SITA's high level network (HLN). These messaging types are called Type A [usually EDIFACT format] for real time interactive communication and Type B [TTY] for informational and booking type of messages. Message construction standards set by IATA and ICAO, are global, and apply to more than air transportation. Since airline booking systems are business critical applications, and they are functionally quite complex, the operation of an in-house airline reservation system is relatively expensive.

## Benefits
Airline Reservation systems has a set of benefits. Here are few of them:
* 24/7 booking available for customers.
* User-Friendly Interface.
* Easy Cancellation Process.
* Easy and flexible booking policies for travelers.
* Display Terms and Conditions, details and flights to the travelers.
* Display the arrangement of seats on the screen thus enabling customers to book seats accordingly.
* Real-Time Update.

## Defining Our System
* Add airline database.
* Add/delete specific flight.
* View its own flight,customers of specific flight and update airline info.
* Update personal information(name,age).
* Stores the entire customer database.

![Description](https://github.com/Annapoornarb/Stepin_Airline-Reservation/blob/main/1_Requirements/design.png)

### Explaination
* Airline Reservation  Application have few inbuilt features like:
    - Reserve airline.
    - Cancel flight.
    - Display airline records.
    - Exit.

## Swot Analysis

![Description](https://github.com/Annapoornarb/Stepin_Airline-Reservation/blob/main/1_Requirements/swot_analysis.png)

# 4W&#39;s and 1&#39;H

## Who:
* Airline management and department.

## What:
* The airline reservation system is a web-based booking solution that helps in consolidating data from all airlines through the use of global distribution systems. 

## When:
* The increasing the number of people to travel to the different places.

## Where:
* This issue is in all parts of the world.

## How:
* Any manual wrong entry of the data by the person who is managing the airline booking will create a lot of confusion among the airline management and passengers might not get seats even if there was an empty seats.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new passenger record | Techincal | Implemented | 
| HR02 | User shall be able to read a passenger record | Techincal | Implemented |
| HR03 | User shall be able to read all the passenger record | Techincal | Implemented |
| HR04 | User Shall be able to read the number of seats available | Technical | Implemented
| HR05 | User shall be able to allot the seats to the passengers | Scenario | Implemented   
| HR06 | User shall be able to cancel the seats  | Scenario | Implemented   



##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | New record shall be added by providing all the asked information and the Passenger id should be unique else Passenger record should not be accepted. | HR01 | Implemented |
| LR02 | Reading Passenger data should be possible by printing all the records available | HR02 | Implemented |
