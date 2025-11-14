# Problem 1 – Multiples of 3 and 5

This is the very first problem of Project Euler, it's a nice and simple excursion designed to have us **get our feet wet** as we step into this realm of computational mathematics.

---

The problem at hand is: suppose we have a number like **10**.  
All the natural numbers below 10, which are multiples of 3 or 5 are:  

**3, 5, 6, 9**  

The sum of these numbers yields:  

**3 + 5 + 6 + 9 = 23**

---

Suppose, we have some number now, like **1000**.  
Take all the numbers here, that are multiples of either 3 or 5, and sum them up.  

So, numbers like:  

**3, 5, 6, 9, 10, 12, 15, 18, 20, 21, 24, 25, 27, 30, 33, 35,.....,999**  

fall in.

---

As humans, we have a tendency in ourselves to assign **'labels'** to things.  
Perhaps we do this as an attempt for classification, but sometimes doing this can make us miss out on some of the **wonderful nuance** that lies underneath. :)

---

Similarly, rather than classifying this question as merely **"easy"** and just moving on, I think questions like these expose the sheer usefulness and power of a very fundamental concept that we use often in code, and that is: **loops**.  

And so, let's try and imagine as to how we can solve a problem like this...

---

An approach that comes to mind while solving this can be to say, start at **0**, or even **1**, if we want, and then gradually have the computer figure out as to whether a number fits our criteria of being a multiple of either 3 or 5.  

Now, for some number like **0** or **1**, this doesn't exactly fit.  
But we can't stop there. We have to go till **1000**.  

So, we have to ask the computer to perform this task for the number: **2**.  
Unfortunately, 2 doesn't satisfy the criteria as well.  

Then we go further, for **3**. We find that 3 fits!! (**3 is a multiple of 3, itself**).

---

Now, we can't just call it a day and rest on our laurels, we have to go further, all the way till **1000**.  

**4, 5, 6, 7, 8, 9, 10, 11, 12, ..... 1000.**

---

The best way to go about this is to use a **loop**.  
A **for loop** can fit in nicely here.

And since the fact is that we are evaluating a condition, we can use an **'if' statement inside the 'for' loop**.  

The if statement is as simple as:  
> If `i` is divisible by 3, OR if `i` is divisible by 5, then just store that particular `i`, and have some way for us to add all of those `i` values up and display them in the future.

---

We can do something for this.  
We can declare an integer variable by the name of say, **'d'**, and whatever 'i' value fits our condition is basically that new **'d' value** now.

---

The question now is of **summation** of said 'd' values.  

Again, we can declare an integer variable by the name of **'sum'** and initialize it to **0**.  

Inside the for loop which is storing the values of **d as i**, just in the next line, we can use the sum feature as:

```c
sum = sum + d;
