# CPSC 120 - Final Exam

## Instructions

* The exam is 2 hours and 40 minutes from start time.
* You are allowed to look at your textbook, notes, previous labs, midterm exam, and project.
* You are only allowed to use the internet browser to open the GitHub and GitHub classroom websites, as well as the www.cplusplus.com/reference website.
* You are not allowed to use Google nor other websites such as other search engines, e-mail, social medial, etc.
* You are not allowed to look at your phone nor talk to any classmate during the exam.

If you are caught violating any of the instructions above, you will receive a failing score for this exam.

Once you finish the exam, you must check out with your instructor.

**NOTE: Make sure your code compiles in order to receive credit for the question. If your code does not compile, you will not receive any points. Additionally, make sure to carefully read and follow the instructions, and use the appropriate naming for the folder and program name.**

## Exam

Similar to the labs you have worked on, each part of this exam must be submitted in its own folder named `partN` where `N` is the part number. For example, all the files for *Part 1* should be placed in a folder called `part1`.

Each folder must include the programs you write as well as a `README.md` file with the following content. *Make sure to replace the `N` with the part number.*

```
# My information

* Name: Your full name
* Email: your university email

# Part N Program

(add explanation here of what the program does)
```

## Part 1: Adjacent character detector (50 points)

Write a program that asks a user to input a message. The message can contain any characters, such as numbers, symbols, spaces, and letters. The program then should check that if any adjacent characters are the same. If at least two adjacent characters are the same, the program should print out a message indicating which adjacent characters are the same. However, the program should ignore adjacent characters that are whitespaces.

For example, if the user inputs `Hi, how are you?`, then the program outputs that there are no adjacent characters that are the same. If the user inputs `Hello, how are you?`, then the program outputs that there are two adjacent characters (the third and fourth characters are the same).

The program might look like this:

```
Enter a message: Hi, how are you?

There are no adjacent characters that are the same.
```

```
Enter a message: Hello, how are you?

Characters 3 and 4 are the same: l
```

```
Enter a message: Whaaatt!??

Characters 3 and 4 are the same: a
Characters 4 and 5 are the same: a
Characters 6 and 7 are the same: t
Characters 9 and 10 are the same: ?
```

```
Enter a message: Hi       everyone!

There are no adjacent characters that are the same.
```

```
Enter a message: Hello    class!

Characters 3 and 4 are the same: a
Characters 13 and 14 are the same: s
```

The name of the file must be `program1.cpp`. **Make sure to execute the compiled file to verify that the program runs correctly.**

Lastly, run the following command: `ls > ls.out`. This command will store the output of the command `ls` into a new file called `ls.out`. Make sure you run this command inside of the `part1` folder.

Commit the files `program1.cpp`, `README.md`, and `ls.out`, and then push your changes to GitHub.

## Part 2: Distance between two multi-dimensional points (50 points)

**NOTE: In the file `program2.cpp`, you only have to add code inside of the `distance` function.**

Implement the `distance` method in the `program2.cpp` file provided to you. The program calculates the distance between two multi-dimensional points where the user indicates how many dimensions to use for the points.

The distance between two n-dimensional points can be calculated using the following formula:

```
d = √( (b_1 - a_1)^2 + (b_2 - a_2)^2 + (b_3 - a_3)^2 + ... + (b_n - a_n)^2 )
```

where point `a` is represented as `(a_1, a_2, a_3, ..., a_n)` and point `b` is represented as `(b_1, b_2, b_3, ..., b_n)`, and `n` is the number of dimensions.

**Hint: You might want to first calculate the sum of the square of the differences, and then take the square root after.**

The program should have the following output:

```
Enter number of dimensions: 1
Enter a_1: 0
Enter b_1: 2
The distance between (0) and (2) is 2
```

```
Enter number of dimensions: 2
Enter a_1: 0
Enter a_2: 1
Enter b_1: 3
Enter b_2: 6
The distance between (0,1) and (3,6) is 5.83095
```

```
Enter number of dimensions: 5
Enter a_1: 1
Enter a_2: 2
Enter a_3: 3
Enter a_4: 4
Enter a_5: 5
Enter b_1: 10
Enter b_2: 12
Enter b_3: 14
Enter b_4: 16
Enter b_5: 18
The distance between (1,2,3,4,5) and (10,12,14,16,18) is 24.7992
```

Move the `program2.cpp` file into the `part2` folder. You may use the `git mv` command to avoid having to commit the deletion of the original file. Make sure to execute the compiled file to verify that the program runs correctly.

**Make sure to execute the compiled file to verify that the program runs correctly.**

Lastly, run the following command: `ls > ls.out`. This command will store the output of the command `ls` into a new file called `ls.out`. Make sure you run this command inside of the `part2` folder.

Commit the files `program2.cpp`, `README.md`, and `ls.out`, and then push your changes to GitHub. Don't forget to `git add` the file that was deleted when moving `program2.cpp` into the `part2` folder in case you didn't use `git mv` to move the file into the `part2` folder.
