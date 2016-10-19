/**
* Class: CS 110A
* Description : This program will caculate the occupancy rate for a hotel.It will start by
	1. asking user how many floors the hotel has. 
	2. Then, it will iterate once for each floor.
	3. In each iteration, it will ask the user for the number of rooms on the floor and how many of them are occupied.

	After all the iterations, it will display 
       	1. how many rooms the hotel has
	2. how many of them are occupied
	3. how many are unoccupied,
	4. and the percentage of rooms that are occupied.

	ref. 1. 13th floor will be skipped.
	     2. The program won't accept a value less than 1 for the number of floors.
	     3. Also, won't accept a number less than 10 for the number of rooms on a floor.

* Due Date: Oct/21/2015
* Name: Minho Cha
* File Name: HotelOccupancy.cpp
* Assignment #7
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 int floor, room, occupied_room;
 int number = 1;
 double total_room, total_occupied_room, vacant_room, occupancy_rate; 

 cout << "How many floors does the hotel have? ";
  cin >> floor;
   while( floor <= 0 ){
    cout << "Invalid. Enter 1 of more: ";
     cin >> floor;}
   while( floor == 13 ){
    cout << "There's no 13th floor in this hotel. " << "Enter again: ";
     cin >> floor;}

 while ( (floor+1) != number){

  cout << "\nHow many rooms does floor " << number << " have? ";
   cin >> room;
    while( room < 10 ){
     cout << "Invalid. Enter 10 or more: ";
      cin >> room;}
   total_room += room;

  cout << "How many occupied rooms does floor " << number << " have? ";
   cin >> occupied_room;
    while( occupied_room > room ){
     cout << "Invalid. Enter " << room << " or less than " << room << ". Enter again: ";
      cin >> occupied_room;}
   total_occupied_room += occupied_room;

  number++;
  }

 vacant_room = total_room - total_occupied_room;
 occupancy_rate = ( total_occupied_room / total_room ) * 100;

 cout << "\nNumber of rooms: "<< total_room  <<endl;
 cout << "Occupied rooms: "<< total_occupied_room <<endl;
 cout << "Vacant rooms: "<< vacant_room << endl;
 cout << "Occupancy rate: "<< fixed << showpoint << setprecision(1) << occupancy_rate << "%" << endl;

 cout << "\nProgrammed by Minho Cha" << endl;

 return 0;
}