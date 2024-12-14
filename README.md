<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Student Registration Program 📋</h1>
  <p>
    This program modifies the registration system from Project 9 by splitting the program into two source files and one header file, following modular programming principles.
  </p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>
    Modify the registration program from Project 9 by splitting the program into two source files and one header file:
    <ul>
      <li><code>student.c</code>: Contains all functions related to operations on the list of students.</li>
      <li><code>student.h</code>: Contains the <code>student</code> structure declaration and function prototypes for the functions in <code>student.c</code>, enclosed in an <code>#ifndef</code>-<code>#endif</code> pair to protect the file.</li>
      <li><code>student_registration.c</code>: Contains the main function.</li>
    </ul>
    You are allowed to modify all parts of the program.
  </p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>User inputs an operation code for various actions like adding a student, removing a student, or listing students.</li>
    <li>The program prompts the user for the student's name, NetID, grade in COP2510, GPA, and the number of previous attempts as necessary.</li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li>Output will be the list of students in the queue based on the current operation.</li>
    <li>The program will output a formatted table listing students when requested.</li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example Input</h3>
  <div class="code-block">
    Enter operation code: a<br>
    Enter the name of the student: Mauricio Pamplona<br>
    Enter the NetID of the student: mauriciop<br>
    Enter the COP2510 letter grade: B<br>
    Enter the GPA: 2.5<br>
    Enter the number of previous attempts: 2<br><br>

    Enter operation code: a
    Enter the name of the student: Jing Wang
    Enter the NetID of the student: jw
    Enter the COP2510 letter grade: A
    Enter the GPA: 3.5
    Enter the number of previous attempts: 1

    Enter operation code: l<br>
    |----------------------|----------------------|---------|-----|----------|
    | Name                 | NetID                | COP2510 | GPA | Attempts |
    |----------------------|----------------------|---------|-----|----------|
    | Mauricio Pamplona    | mauriciop            | B       | 2.5 | 2        |
    |----------------------|----------------------|---------|-----|----------|
    | Jing Wang            | jw                   | A       | 3.5 | 1        |
    |----------------------|----------------------|---------|-----|----------|
  </div>
  <p><strong>Explanation:</strong></p>
  <ul>
    <li>The program adds students to the list and lists them after an 'a' operation and the 'l' operation is called to list all students in the queue.</li>
  </ul>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>The program should be split into three files: <code>student.c</code>, <code>student.h</code>, and <code>project10_registration.c</code>.</li>
    <li><code>student.c</code> should contain functions related to operations on the list of students.</li>
    <li><code>student.h</code> should contain the <code>student</code> structure and the function prototypes for functions in <code>student.c</code>, with appropriate use of <code>#ifndef</code>-<code>#endif</code> guards.</li>
    <li><code>project10_registration.c</code> should contain the <code>main</code> function.</li>
    <li>The program should compile correctly when the files are split as described.</li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">
    gcc -o registration student_registration.c student.c
  </div>
  
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">
    ./registration
  </div>
  
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>Choose an operation code (e.g., 'a' for adding a student, 'p' for popping a student).</li>
    <li>Provide the necessary details depending on the operation selected (student name, NetID, etc.).</li>
  </ul>
</section>

</body>
</html>
