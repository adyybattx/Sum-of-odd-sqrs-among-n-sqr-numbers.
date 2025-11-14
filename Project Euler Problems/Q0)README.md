# Sum of odd squares among 'n' square numbers

The following is the registration problem found on the website of Project Euler. The question states that if there exists 'n' natural numbers, we need to find the sum of the squares of the odd numbers among them. The code given, contains my attempt at the solution of this problem, which also did give the correct solution to the problem.  

https://projecteuler.net/register

The above website is the website for project euler. If you do not have an account there, and go on the registration page for the website, a problem of the form of:  
"Among the first 641 thousand square numbers, what is the sum of all the odd squares?"

---

There were a couple of things that I did while solving this problem. The first thing was to look at what the squares of natural numbers tell.  

$1^2$ = 1<br>
$2^2$ = 4<br>
$3^2$ = 9<br>

In short, a pattern forms of the type of:  

1 = 1<br>
1 3 = 4<br>
1 3 5 = 9<br>
1 3 5 7 = 16<br>
1 3 5 7 9 = 25, and so on.

It's pretty easy to get an output like this out of 'c'. All you gotta do is use 2 nested for loops, and declare that the loop that is inside the main loop follow: `2(i)+1`.  
You can then sum it all up, by declaring an integer variable by the name of `sum`, and initializing it to 0.

But that just gives you say, the sum of the square of 'n' terms. We didn't come for that.

---

There's something very interesting that goes on in the square of odd numbers.  
Let's have a look at odd numbers:

1, 3, 5, 7, 9, 11, 13, and on and on. Basically, 2n+1 (n starts from 0).

If we square some of these numbers, a pattern emerges.  

$1^2$ = 1<br>
$3^2$ = 9<br>
$5^2$ = 25<br>
$7^2$ = 49<br>
$9^2$ = 81<br>

The difference between the square of the first term and the second is of: 8.  
The difference between the square of the second term and the third is of: 16.  
The difference between the square of the third term and the fourth is of: 24.  
The difference between the square of the fourth term and the fifth is of: 32.

---

An interesting pattern emerges here:  <br>
8(0) + 1 = 1 --> $1^2$<br>
8(1) + 1 = 9 --> $3^2$<br>
8(3) + 1 = 25 --> $5^2$<br>
8(6) + 1 = 49 --> $7^2$<br>
8(10) + 1 = 81 --> $9^2$<br>


but also look at: `0, 1, 3, 6, 10`

0 and 1 have a difference of 1
3 and 1 have a difference of 2
6 and 3 have a difference of 3
10 and 6 have a difference of 4

0 + 1 = 1<br>
1 + 2 = 3<br>
3 + 3 = 6<br>
6 + 4 = 10<br>
10 + 5 = 15 --> (8(15) + 1 = 11^2)
<br>


We may run a for loop where we have a variable by the name of `sum` which has a value of 0, and we add in `i` to it.  
With each iteration `i` keeps on increasing, and we get this pattern of numbers that we desire.

We can then store these numbers to an array and have something like: (8 * arr[i]) + 1


Which keeps on giving to you every single squared odd number until the criteria of `i` reaching `n` (the number that you entered) has been met.  

You can then do, exactly what you did in line 54, and... *et voila!* You have to yourself the sum of the square of odd numbers till a certain specified threshold!

---

## Implementation Notes

- Written in C.  
- Uses an array to store the triangular numbers for iterative computation.  
- Handles large numbers using `long long` to prevent integer overflow.  
- Runtime is extremely fast — can handle hundreds of thousands of squares in milliseconds.







