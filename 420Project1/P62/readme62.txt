Problem 62
Kevin Koch

Originally the approach we used was the most nieve way possible, to run through 
all of the cubes upto 10k to try and calculate which has five permutations. 
This led to many interesting hurdles. The largest of which was just memory 
allocation, with how large our numbers were getting and our nieve way of 
splitting up the work, we had huge hang times for some of the later processes. 
This should of in theory worked but after testing on 180 processors for an hour 
30 it timed out. This led me to think about it more critically and I came up 
with the second approach; the smart way. Thinking about how the permutations 
for this would work, I realized that all we had to do was sort the numbers, and 
then check to see if the digits were the same. The example problem on the 
website 41063625 would be 01234566. Both 384 and 405 have these same digits, so 
they must be permutations of one another. So I setup a very simple C program to 
calculate this finding that 127035954683 (5027^3) is the smallest cube with 5 
permutations.

Parallelizing this part would of probably caused a slowdown of the problem so I 
decided not to implement that. If we had more time to run our program in the 
lab (I didnt want to hog all the resouces here this weekend with everyone 
running their programs) I figured that this would be acceptable.