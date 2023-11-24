/*
    Segmentation error occurs when you attempt to access memory that your program does not have permission to access.
    In C++, this will most often occur when you attempt to access an element of an array that is out of bounds.
    For example, if you have an array of size 5, and you attempt to access the element at index 5, this will cause a segmentation error.
    This is because the array is zero-indexed, so the last element is at index 4.
    In the code above, the askForArrayElements function asks the user to input the elements of the array.
    However, it does not check to make sure that the user does not input more elements than the array can hold.
    If the user inputs more elements than the array can hold, this will cause a segmentation error when the program attempts to access an element that is out of bounds.
    To fix this, you can add a check in the askForArrayElements function to make sure that the user does not input more elements than the array can hold.
    For example, you could add a check to make sure that the user does not input more elements than the array can hold.

*/