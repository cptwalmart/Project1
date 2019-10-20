Problem 240
Dakota and Kevin

So originally Dakota was working on this project with the approach of brute 
force rolling all the dice. So his program would roll all the dice, sum the top 
ten, and if it was 70 it would be a possible combination, which should work. 
Unforunately, he's been out ill this week so this weekend I had to try and 
finish up the problem. So looking at what he had started, I realized that we 
could do something similar to what ended up being used for 62. Basically we 
iterate every distinct combination of N dice in order, at the point where we 
generate the 10th (in this case) die, we'll stop early if the sum doesn't equal 
70 (because since we are generating them in sorted order with the largest first, 
and die past the 10th doesn't contribute.) when we generate all 20, we then 
count the number of distinct permutations of that arrangement and sum it up. 
Unfortunately again I couldn't think of how parallelzing this idea would help 
the run time. Ideally I would of liked to test Dakota's code some more but 
since we ran out of time to do proper testing this was the easiest solution I 
could think of.