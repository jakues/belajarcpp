#include <iostream>

using namespace std;

int main() {
    // multidimensional array declaration syntax :
    // type_data var_name[size1][size2][...][...]
    //                              2d, 3d, ...

    // bad declaration :
    // int num[2][3] = { 1, 2, 4, 3, 5, 6 };

    // better declaration with bracket : 
    // int num[2][3] = { {1, 2, 4}, {3, 5, 6} };
    
    // more better :
    int num[2][3] = {
        {1, 2, 4},
        {3, 5, 6}
    };

    // print it
    for (int i=0; i < 2; i++) {
        for (int j=0; j < 3; j++) {
            printf("%d ", num[i][j]);
        }
    }

    // lets fix it
    // reorder elements 4 & 3
    num[0][2] = num[1][0];
    num[1][0] = num[0][2] + 1;

    // print it
    printf("\n\n");
    for (int i=0; i < 2; i++) {
        for (int j=0; j < 3; j++) {
            printf("%d ", num[i][j]);
        }
    }
}