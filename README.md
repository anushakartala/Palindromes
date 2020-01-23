# Palindromes
The objective of this program is to use recursion, command line arguments, and parse information 
from a string letter by letter. Palindromes are character sequences that read the same forward or 
backwards (e.g. the strings "mom" or "123 454 321"). Sometimes, punctuation and spacing affect whether 
or not a phrase is considered a palindrome. I used flags in this code to indicate whether to do case 
sensitive comparisons and whether to ignore spaces. For example "A nut for a jar of tuna" is a palindrome 
if spaces are ignored and not otherwise. "Step on no pets" is a palindrome whether spaces are ignored 
or not, but is not a palindrome if it is case sensitive since the ‘S’ and ‘s’ are not the same. The 
program name is followed by a list of strings separated by a space on the command line. This code will 
determine whether each string is a palindrome and output the results. An optional flag can precede the 
terms that modifies how a palindrome is determined. Flags are case sensitive and must start with a minus 
(-) sign followed by values that can be capital or lowercase. Additionally, the argument -- (two dashes) 
signifies that every argument that follows is not a flag. This program only receives user input from the command line. 
Project requirements credit: John M. Moore, Texas A&M University
