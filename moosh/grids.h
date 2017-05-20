int entryPoint[2] = {5, 5};
int entryGrid[2] = {0, 0};

/*
-1 = border
0 = wall
1 = floor
2 = key
3 = doorLocked
4 = doorUnLocked
5 = endPoint
6 = reversePoint
7 = 3keyDoor
8 = enemy
*/

int gird0MapLocation[2] = {0, 0};
int grid0[12][12] = {
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    { 0, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1,-1},
    { 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0,-1},
    { 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0,-1},
    { 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0,-1},
    { 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0,-1},
    {-1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0,-1},
    {-1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0,-1},
    {-1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1,-1},
    {-1, 0, 1, 1, 1, 0, 2, 0, 0, 0, 0,-1},
    {-1,-1, 0, 0, 0,-1, 0,-1,-1,-1,-1,-1},
};
int gird1MapLocation[2] = {1, 0};
int grid1[12][12] = {
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1,-1},
    {-1, 0, 0, 0, 0, 6, 0, 1, 0, 0, 0,-1},
    { 0, 2, 1, 2, 0, 2, 0, 1, 0, 0, 0,-1},
    {-1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 3,-1},
    {-1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1,-1},
    {-1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
};
int gird2MapLocation[2] = {2, 0};
int grid2[12][12] = {
    {-1,-1,-1,-1, 0,-1,-1,-1,-1,-1,-1,-1},
    {-1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0,-1},
    {-1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,-1},
    {-1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0,-1},
    {-1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 1, 2, 1, 0, 0, 0, 0, 0, 0,-1},
    {-1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
};
int gird3MapLocation[2] = {1, 1};
int grid3[12][12] = {
    { 0, 0, 0, 0,-1,-1,-1,-1,-1,-1,-1,-1},
    { 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0,-1},
    { 0, 1, 2, 1, 0, 1, 0, 0, 1, 0, 0,-1},
    { 0, 1, 1, 1, 0, 3, 1, 1, 1, 1, 3,-1},
    {-1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 2, 0, 1, 0, 6, 6, 6, 6,-1},
    {-1, 0, 0, 1, 1, 1, 0, 6, 0, 6, 0,-1},
    {-1, 0, 0, 0, 0, 6, 0, 6, 0, 1, 0,-1},
    {-1, 0, 0, 0, 0, 6, 6, 6, 0, 1, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
};
int grid4MapLocation[2] = {2, 1};
int grid4[12][12] = {
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0,-1},
    {-1, 1, 1, 6, 0, 0, 0, 1, 2, 1, 0,-1},
    {-1, 0, 0, 6, 0, 0, 0, 1, 1, 1, 0,-1},
    {-1, 0, 0, 6, 6, 0, 0, 0, 1, 0, 0,-1},
    {-1, 6, 0, 0, 6, 0, 2, 1, 1, 0, 0,-1},
    { 0, 6, 0, 0, 1, 1, 1, 0, 0, 0, 0,-1},
    { 0, 6, 0, 0, 0, 1, 0, 0, 0, 0, 0,-1},
    { 0, 6, 3, 1, 1, 1, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
};
int gird5MapLocation[2] = {0, 2};
int grid5[12][12] = {
    {-1,-1,-1, 0, 0, 0, 0, 0,-1, 0, 0,-1},
    {-1, 0, 0, 1, 1, 1, 1, 1, 0, 6, 6,-1},
    {-1, 0, 0, 1, 0, 0, 0, 1, 0, 6, 0,-1},
    {-1, 0, 0, 1, 0, 2, 0, 1, 0, 1, 0,-1},
    {-1, 0, 0, 1, 0, 2, 0, 1, 3, 1, 0,-1},
    {-1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0,-1},
    {-1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0,-1},
    {-1, 0, 0, 2, 0, 0, 3, 1, 1, 1, 1,-1},
    {-1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0,-1},
    {-1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1,-1,-1, 0,-1,-1,-1,-1,-1,-1,-1,-1},
};
int gird6MapLocation[2] = {1, 2};
int grid6[12][12] = {
    {-1, 0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    {-1, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0,-1},
    { 0, 6, 0, 6, 6, 6, 3, 1, 6, 6, 0,-1},
    { 0, 6, 6, 6, 0, 0, 1, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 1, 3, 1, 1, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0,-1},
    {-1, 0, 1, 1, 1, 0, 0, 1, 0, 2, 0,-1},
    {-1, 1, 1, 2, 1, 0, 0, 1, 0, 0, 0,-1},
    {-1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
};
int gird7MapLocation[2] = {1, 3};
int grid7[12][12] = {
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    {-1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 3,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
};
int gird8MapLocation[2] = {2, 3};
int grid8[12][12] = {
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0,-1},
    {-1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0,-1},
    {-1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0,-1},
    {-1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0,-1},
    {-1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0,-1},
    {-1, 0, 0, 0, 1, 0, 5, 1, 0, 1, 0,-1},
    {-1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0,-1},
    {-1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
};


/*
int gird0MapLocation[2] = {0, 0};
int grid0[12][12] = {
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,-1},
    {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
};
*/