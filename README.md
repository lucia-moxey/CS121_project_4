# CS121_project_4

Pseudocode

This is what we did last week with the horse race, but now this is object-oriented and organized by class. 

Horse Class
Attributes:
-position int
-horseID int

Constructor Horse(int id):
  set horseID to the value of id
  set position to 0

Method advance():
  generate random bool using a 50/50 probability
  if the random value is true:
    increment position by 1

Method getPosition():
  Return the value of position

Method getID():
  Return the value of horseID

Race Class

Attributes:
-NUM_HORSES const int
-TRACK_LENGTH const int
-horses

Constructor Race():
  Loop i from 0 to NUM_HORSES - 1
    Create a new Horse object with ID i
    Add the new Horse object to the horses collection

Method runRace():
  Declare a boolean variable gameOver and set it to false
  Loop while gameOver is false:
    Clear the screen (or print newlines to simulate it)
    For each horse in the horses collection:
      Call horse.advance()
      Call printLane(horse) (or integrate the printing logic here)
    For each horse in the horses collection:
      If horse.getPosition() is greater than or equal to TRACK_LENGTH - 1:
        Print a message declaring horse.getID() as the winner
        Set gameOver to true
        Break the loop
    If gameOver is false:
      Print a message prompting the user to press enter for the next turn
      Wait for user input
    Else (gameOver is true):
      Print a message prompting the user to press enter to exit
      Wait for user input

Helper Method printLane(Horse horse):
  Loop i from 0 to horse.getPosition() - 1
    Print a "."
  Print horse.getID()
  Loop i from horse.getPosition() + 1 to TRACK_LENGTH - 1
    Print a "."
  Print a newline character

Main Program
Function main():
  Create an instance of the Race class named horseRace
  Call the horseRace.runRace() method
  Return 0
