# Phone_Book_Validation

Github Repository can be found at https://github.com/sjkaiser18/Phone_Book_Validation </br>
This program is a Phone Book Listing, where a user inputs their name and phone number. There are certain restrictions on what is considered a valid or invalid name or number. If the user's number is invalid, it will not be added to the list and the user will be asked to replace the incorrect value. 

#Compilation
For this program, I created the program in CLion and tested using Github actions; however, these should not be required for compiling. 

To compile the program, either open the program folder in your preferred compiler, using either valid_list.txt or invalid_list.txt as your command line argument (highly preferred method), or open your Terminal, navigate to the folder and type: </br>g++ -c main.cpp </br>g++ -c Phone_Validation.cpp</br> g++ -c Name_Validation.cpp</br>g++ -o Phone_Book Name_Validation.o Phone_Validation.o main.o
</br>./Phone_Book valid_list.txt or ./Phone_Book invalid_list.txt

| Valid Inputs for Name                       | Invalid Inputs for Name                                       | Valid Inputs for Phone # | Invalid Inputs for Phone #                       |
|---------------------------------------------|---------------------------------------------------------------|--------------------------|--------------------------------------------------|
| First                                       | F                                                             | #######                  | # to ######                                      |
| First Last                                  | f                                                             | ### ####                 | +0 ### ### ####                                  |
| First Middle Last                           | <script>                                                      | ###-####                 | +0# ### ### ####                                 |
| First, Middle, Last                         | 3ric                                                          | ##########               | +0## ### ### ####                                |
| First, Last                                 | "Sarah"                                                       | ### ### ####             | +#### ### ### ####                               |
| First O'Henry                               | First O''Henry                                                | ###-###-####             | any characters that are not a digit, (,),-, or + |
| Last,First                                  | any characters that are not part of the alphabet,-,comma,or ' | (###)#######             |                                                  |
| Last, First                                 |                                                               | (###)-###-####           |                                                  |
| First McCartney                             |                                                               | (###) ### ####           |                                                  |
| First-Part Middle-Part Last-Part            |                                                               | (###) ###-####           |                                                  |
| First 'Nickname' Middle Last                |                                                               | # ### ### ####           |                                                  |
| First-Part 'Nickname' Middle-Part Last-Part |                                                               | ## ### ### ####          |                                                  |
| F. M. L.                                    |                                                               | ### ### ### ####         |                                                  |
| F.-P. M.-P. L.-P.                           |                                                               | +# ### ### ####          |                                                  |
|                                             |                                                               | +# (###) ### ####        |                                                  |
|                                             |                                                               | +## ### ### ####         |                                                  |
|                                             |                                                               | +### ### ### ####        |                                                  |
|                                             |                                                               | +# ### ####              |                                                  |
|                                             |                                                               | +## ### ####             |                                                  |
|                                             |                                                               | +### ### ####            |                                                  |

Assumptions and Pros/Cons: I have assumed that there are users that will be lazy with their typing so this does not check for spelling errors. This code has also assumed that someone with malicious intent may attempt to gain access to the system. While the program does prevent injection attacks, it does not protect from deliberately incorrect inputs and may allow another user to delete an account that is not theirs using DEL. Another con is that this program does not accept names that contain characters outside of the US 26 letter standard. 
