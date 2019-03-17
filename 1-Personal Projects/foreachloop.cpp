// Working with an array using the for each loop   

char myArr[4] = {'N', 'S', 'E', 'W'};

    for (int ele : myArr) {
        if(userInput == ele) {
            if(myArr[ele] == 'N')
                dir = NORTH;
            else if(myArr[ele] == 'S')
                dir = SOUTH;
            else if(myArr[ele] == 'E')
                dir = EAST;
            else
                dir = WEST;
        }
    }

