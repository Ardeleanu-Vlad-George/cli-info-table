# Purpose
Make a general CLI table utility, that will be called by other programs you have developed.

Each line is given as a string in which the different cells of the line are delimited by the '_' character. 
An example: 'hey_there_is_a_line'

The program expects each line to have the same number of cells, aspect that must be taken into account by the using program.

The number of cells is given as the first CLA argument.
Example: '2 45_45 ceva_altceva data_exam'
