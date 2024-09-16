//A string is a Pangram if the string contains all the English alphabet letters.

/*Input: str = “We promptly judged antique ivory buckles for the next prize” 
Output: Yes 
Explanations: In the above string, str has all the English alphabet letters.

Input: str = “We promptly judged antique ivory buckles for the prize” 
Output: No 
*/

//brute force aprach
/* make two strings or cahr array 
1- will have all english alphabets
2- will have a statement
compare them using two for loops and update the count variable if an alphabwt matches to string,avoid the duplicate comparsions
if count is turned out to be be 26 then return true or else false
could use a duplicate varaible to avoid duplication of count*/