# BASH Imitaion Project
## Introduction
This is a project with the intent of learning more about the BASH. It is a spinoff personal project from "rshell", a BASH cloning project in CS100 (Introduction to Software Construction) done at UC Riverside.  

## Motivation
When undertaking this project in CS100, we are required to partner up into groups of 2. The intent behind this is to experience creating software in teams. My partner was amazing, and I had a lot of fun working in a team with him.

My partner and I split the work between each other. I would do the expression parsing, while he handled the system calls. In the spirit of teamwork, this was a great idea. We probably got work done faster than if I did it myself. On the other hand, this did come with its own drawbacks.

I realized that I did not understand how any system calls that we used worked. Due to my curious nature, I could not leave this feeling alone. In addition, due to the outbreak of COVID19, we were not able to finish implementing piping and file I/O redirection. 

So what better way to learn these concepts than to actually do the project myself? The motiviation behind this project is to learn more about the Linux system calls and to finish what we started. I hope to extend the project a little further to include other BASH terminal commands.

## Under the hood
Given an expression, the program will take these steps to execute the input.

1. Check for errors
    - Some input may have erros or mistakes. This will check for those in advance.
    - eg) echo hi && || echo bye
2. Clean
    - Some input may have # and extra spaces. This will remove impurites in the input. This is so that the parsing step is easily done.
    - eg) ls myFolder          &&      echo folder #folder
3. Parse
    - This step will parse the expression. I will split the expression by the spaces and return a array of strings.
4. Tokenize
    - This step will assign each substring in the array a token in order to identify the strings.
5. Shunting Yard Algorithm
    - This step will utilize the shunting yard algorithm in order to set precedence of sub-expressions to execute.
6. Execute
    - Lastly we will execute the expression.
