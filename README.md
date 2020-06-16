# BASH Imitaion Project
## Introduction
This is a project with the intent of learning more about the BASH. It is a project to redo and extend "rshell", a class project done in CS100 (Introduction to Software Construction) at UC Riverside.  

When undertaking this project in CS100, we are required to partner up into groups of 2. The intent behind this is to experience creating software in teams. My partner was amazing, and I had a lot of fun working in a team with him.

My partner and I split the work between each other. I did the expression parsing, while he handled the system calls. In the spirit of teamwork, this is a great idea. We got work done faster than if I did it myself. On the other hand, this did come with its own drawbacks.

Before doing this project, I didn't understand how any of the system calls that we use work. Due to my curious nature, I really wanted to learn more about it. In addition, due to the outbreak of COVID19, we were not able to finish implementing piping and file I/O redirection. 

So what better way to learn these concepts than to actually do the project myself? 

## Motivation and Goals
The motiviation behind this project is to learn more about the Linux system calls. I also intend to finish implementing piping and file I/O redirection. Iintend to extend the capability of the shell to include other BASH terminal commands.

I am creating this project with the intent that if I ever go back and look at this, I'll understand what I am doing. This README is a part of it. If there are people out there with the same learning style as me, then this may help. Otherwise, please look through this understanding that all documentation/comments isn't really intended for others.

## Workflow
One thing I learned while doing this project during class is the importance of an established workflow. Below is the workflow that I take in order to minimize errors and create this program at an efficient speed.

I used some ideas from the agile method. Since this is also a relatively small project done by a single person, I also use test driven design in some parts.

### 1. Branch
Even though I am working by myself on this project, I branch from the master whenever I want to add a feature to the project. This helps me keep the master branch always working.

### 2. Comment
I do this before starting to code. This is so that I can solidify my idea of what I want the code to do before coding it. If I don't, I end up adding more features to the function. This makes it hard to maintain and test. As a result, it makes my code brittle and unscalable. 
    
The commenting done in this project is very thorough. While some may say that this is unnecessary, I've found that this is useful when looking back at my code months (maybe years) from now. The intent behind this is so that I can explain it to others what each function does in words when asked about it.

### 3. Code
I only code after I'm done commenting what the function does. Again this is done in order to minimize the amount of on the fly coding that I do. 

Coding is sometimed done in conjunction with step 3. This is called test driven design. Personally I find that this helps me find bugs and fix them more quickly. 

### 4. Test
Testing is done through the google test suite. Again this is sometimes done in conjunction with step 2, as per the philosphy for TDD.

I know I have a lot of tests. Thats because that's kind of what TDD makes me do. I also love writing tests and then writing code to pass them. 

When doing this project in class my grader would usually comment that "X amount of tests is mybe too much lol". But I figure, better be safe now than find a big bug later.

### 5. Git workflow
This is the usual git add -> git commit -m "blah blah" -> git push -> create pull request -> check code -> merge.

Proper version control is very handy, especially because I make a lot of mistakes.

## Under the hood
Given an expression, the program will take these steps to execute the input.

### 1. Check for errors
Some input may have erros or mistakes. This will check for those in advance.
eg) echo hi && || echo bye

### 2. Remove octothrope and extra spaces 
Some input may have # and extra spaces. This will remove impurites in the input. This is so that the parsing step is easily done.
eg) ls myFolder          &&      echo folder #folder

### 3. Add space
In this step, the program will add spaces if necessary in front of () and connectors. This is needed because step 3 splits the expression along spaces.

### 4. Split 
This step will split the expression by the spaces and return a array of strings. This makes the tokenizing part much easier to handle.

### 5. Tokenize
This step will assign each substring in the array a token in order to identify the strings. This allows the shunting yard to correctly place precedence by accessing each token's type value.

### 6. Shunting Yard Algorithm
This step will utilize the shunting yard algorithm in order to set precedence of sub-expressions to execute.

### 7. Execute
Lastly we will execute the expression.
