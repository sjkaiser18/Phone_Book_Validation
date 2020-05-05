# Phone_Book_Validation
This program is a Phone Book Listinng, where a user inputs their name and phone number. There are certain restrictions on what is considered a valid or invalid name or number. If the user's number is invalid, it will not be added to the list and the user will be asked to replace the incorrect value. 

| Valid Inputs for Name                       | Invalid Inputs for Name                                       | Valid Inputs for Phone # | Invalid Inputs for Phone #                       |   |
|---------------------------------------------|---------------------------------------------------------------|--------------------------|--------------------------------------------------|---|
| First                                       | F                                                             | #######                  | # to ######                                      |   |
| First Last                                  | f                                                             | ### ####                 | +0 ### ### ####                                  |   |
| First Middle Last                           | <script>                                                      | ###-####                 | +0# ### ### ####                                 |   |
| First, Middle, Last                         | 3ric                                                          | ##########               | +0## ### ### ####                                |   |
| First, Last                                 | "Sarah"                                                       | ### ### ####             | +#### ### ### ####                               |   |
| First O'Henry                               | First O''Henry                                                | ###-###-####             | any characters that are not a digit, (,),-, or + |   |
| Last,First                                  | any characters that are not part of the alphabet,-,comma,or ' | (###)#######             |                                                  |   |
| Last, First                                 |                                                               | (###)-###-####           |                                                  |   |
| First McCartney                             |                                                               | (###) ### ####           |                                                  |   |
| First-Part Middle-Part Last-Part            |                                                               | (###) ###-####           |                                                  |   |
| First 'Nickname' Middle Last                |                                                               | # ### ### ####           |                                                  |   |
| First-Part 'Nickname' Middle-Part Last-Part |                                                               | ## ### ### ####          |                                                  |   |
| F. M. L.                                    |                                                               | ### ### ### ####         |                                                  |   |
| F.-P. M.-P. L.-P.                           |                                                               | +# ### ### ####          |                                                  |   |
|                                             |                                                               | +# (###) ### ####        |                                                  |   |
|                                             |                                                               | +## ### ### ####         |                                                  |   |
|                                             |                                                               | +### ### ### ####        |                                                  |   |
|                                             |                                                               | +# ### ####              |                                                  |   |
|                                             |                                                               | +## ### ####             |                                                  |   |
|                                             |                                                               | +### ### ####            |                                                  |   |
