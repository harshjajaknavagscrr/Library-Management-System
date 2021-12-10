# Library Management System
Library management system C++ project using oops concepts: Inheritance, Polymorphism, Access specifiers etc. And  file handling to store user and books data.


# About Project

In order to run this project, you must have installed **VS Code** on your PC.(We recommend these IDE).
For the project demo, have a look at the image slider below.


## Features


# Output

<div align="center"> <h3>ADMIN INTERFACE </h3> </div>
   
<img src="images/LMS.PNG" width="1000"/>   
<img src="images/LMS_Admin_Page.PNG" width="1000"/>  
<img src="images/LMS_Admin_login.PNG" width="800"/>  
<img src="images/LMS_Login_Successful.PNG" width="800"/> 
<img src="images/LMS_Admin_Menu_Page.PNG" width="800"/>  
 
 <div align="center"> <h3>STUDENT INTERFACE </h3> </div>
 
<img src="images/LMS.PNG" width="800"/>
<img src="images/LMS_Student_Page.PNG" width="800"/>
<img src="images/LMS_Student_Login_Page.PNG" width="800"/>
<img src="images/LMS_Login_Successful.PNG" width="800"/>
<img src="images/LMS_Student_Menu_Page.PNG" width="800"/>
 


## Prerequisites
 - C++ IDE
   - [VS Code (Visual Studio Code)](https://code.visualstudio.com/docs/?dv=win)
   - Install following extensions : -
      - C/C++
      - Code runer
      - C/C++ Makefile Project 
    - Go to manage setting and open Command Palette -type create c++ project and select folder for creating project.
 - MinGW Compiler
   - [MinGW-w64](https://sourceforge.net/projects/mingw-w64/)
   - Now you need to set the environment variables, so for which you need to paste the bin path.In bin folder "make.exe" must be otherwise you will find the error such as "'make' is not recognized as an internal or external command".
   - To avoid above such error we simply do following : -
        -  Make another copy of C:\MinGW\bin\mingw32-make.exe file in the same folder.
        -  Rename the file name from mingw32-make.exe to make.exe.
        -  Run make command again.
        -  [For more details click here.](https://stackoverflow.com/questions/23723364/windows-7-make-is-not-recognized-as-an-internal-or-external-command-operabl)
    


## Compile and Run Program
**After generating project and implementing the code we simply do following two steps : -**
-  To Compile the Program, type

```bash
  make
```

-  To run the Program, first change the directory and go to ouput folder where your **'main.exe'** file exits.For changing the directory,type **cd output** and for running the Program,type

```bash
  ./main
```
 *where ./ represents present working directory and 'main' is the executable target file.*
 
 


