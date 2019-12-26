# advent_of_code_2016
C++ solutions to Advent of Code 2016 puzzles 

The code is organizaed as an Xcode project.
Each day is a folder with a subfolder for each part.
Each part has its own Xcode target (since there can be only 1 main in each target).

When creating a new day, we need to :
- create the dated folder and add inside the data files : data.txt and sample.txt (if any)
- create in the dated folder a folder for each part
- inside each part folder :
    - create a main.cpp (copy an existing and change the date of the data file)
    - create partX.hpp and partX.cpp
- for each part, create an Xcode target (File > New > Target)
- set the working directory to the top of the project (Product > Scheme > Edit) so the data file can be read
- Ensure each required cpp file is ticked in "Target Membership" frame (usually common/Utils.cpp and partX.cpp)
