                FAMILY TREE PROJECT - DEVELOPMENT MILESTONES \
\
Introduction : \
This document describes the four development milestones of the Family Tree Input and Display project. Each milestone represents a stage of development, starting with the definition of the PERSON  structure and ending with memory cleanup and output improvements. These milestones help organize the work and track the changes made to the program. \

Milestone 1: Person Strcture and Memory Allocation\
Define the PERSON  structure and implement the create\_person()  function to allocate memory for an individual family member.Tasks:- Define the PERSON structure with name, age, father, and mother fields.

- Implement the create\_person() function using malloc()

- Initialize the father and mother pointers to NULL.Required Git Commit Message: feat: add Person struct and create\_person allocation helper\

- 
Milestone 2: Collect information  for  Seven Family Members Tasks:- Collect information about four grandparents.

- Collect information about the father and mother.

- Collect information about yourself.

- Store each family member in a separate PERSON structure.Required Git Commit Message: feat: collect input for all 7 family members \

- 
MILESTONE 3 : Connect family relationships and Display Information \
Tasks:- Connect the father to the paternal grandparents.

- Connect the mother to the maternal grandparents.

- Connect yourself to your father and mother.

- Display names, ages, and family relationships by traversing the pointers.Required Git Commit Message:feat: link parent pointers and implement relationship print

-

  MILESTONE 4 :TASKS : - Implement the free\_family\_tree() function 

- Free the memory allocated for all seven family members 

- Test the  program to verify its output 

- Run Valgrid to check for memory leask 

- Improve the output formatting where necessary Required Git Commit Message: fix: add memory cleanup with free and polish output\

- 
Testing and Verification :The Program is compiled and executed on Ubuntu  Linux using GCC. The output is checked to verify that all seven family members and their relationships are correct . Valgrind is used to check the program for memory - related errors.


Conclusion: The project demonstrates  the use of structures, pointers , dynamic memory allocation, and memory cleanup in C programming. The four milstones organize the implementation into stages and provide a recorde of the required development process.\
\
\
\

