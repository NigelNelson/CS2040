// CS 2040
// Lab 3
// Spring 2021
// Author: Nigel Nelson

#include <iostream>
#include <iomanip>
using namespace std;

//Function that is responsible for getting the lowest acceptable input number
int getLowerRange();

// Function that is responsible for getting the highest acceptable input number
int getUpperRange();

/* 
 * Function that is responsible for propagating a provided array, but only if
 * the input numpers are within a provided range of numbers
 */
void getInputValues(int nums[], int lowerRange, int upperRange);

/* 
 * greatestFrequency finds, and returns, the largest value > 0 in
 * the provided array
 */
int greatestFrequency(int array[], int lowerRange, int upperRange);

/* 
 * Compute width of the axis needed to display the data in
 * the given array (where the portion of the array being examined is
 * from lowerRange to upperRange)
 */
int axisWidth(int array[], int lowerRange, int upperRange);

/* 
 * Function that should draw the horizontal axis up to, 
 * and including the largest increment of 10 that contains 
 * "axisWidth." There will be "+" tick marks every 5 values.
 */
void drawHorizontalAxis(int axisWidth);

// Function that Labels the horizontal axis, writing multiples of 5s and 10s
void labelHorizontalAxis(int axisWidth);

/* 
 * Function that takes a value and a quantity for the value and draws
 * a single line for that value. For example, if the number
 * is 12 and it occurs 5 times, print
 * 12 |#####
 */
void drawCount(int value, int quantity);

/* 
 * Function that draws the vertical axis of the histogram by calling
 * "drawCount()" for each value in the provided array.
 */
void drawValues(int nums[], int lowerRange, int upperRange);

/* 
 * Function that is responsible for printing out all of the formatting
 * that is neccesary in order to display a histogram based on the provided
 * array and the range of values in that array.
 */
void createHistogram(int nums[], int lowerRange, int upperRange);

/* 
 * Main function that is responsible for executing the purpose of the program,
 * which is to print out a simple histogram in response to numbers input by
 * the user.
 */
int main(){
    int lowerRange = getLowerRange();
    int upperRange = getUpperRange();
    int nums[upperRange - lowerRange +1] = {0};
    getInputValues(nums, lowerRange, upperRange);
    createHistogram(nums, lowerRange, upperRange);
    return 0;
}

int getLowerRange(){
   int lowerRange;
   cin >> lowerRange;
   return lowerRange;
}

int getUpperRange(){
   int upperRange;
   cin >> upperRange;
   return upperRange;
}

void getInputValues(int nums[], int lowerRange, int upperRange){
    int num;
    cin >> num;
    while(cin){
        if(num < lowerRange || num > upperRange){
            cout << "Error: value " << num <<  " is out of range" << endl;
        } else{
            nums[num-lowerRange]++;
        }
        cin >> num;
    }
}

int greatestFrequency(int nums[], int lowerRange, int upperRange){
    int greatestFreq = 0;
    for(int i = 0; i <= upperRange-lowerRange; i++){
        if (nums[i] > greatestFreq){
            greatestFreq = nums[i];
        }
    }
    return greatestFreq;
}

int axisWidth(int nums[], int lowerRange, int upperRange){
    int greatestFreq = greatestFrequency(nums, lowerRange, upperRange);
    if (greatestFreq % 10 == 0){
        greatestFreq-=10;
    }
    int axisWidth = (greatestFreq + 10) - (greatestFreq % 10);
    if (axisWidth < 10){
        axisWidth = 10;
    }
    return axisWidth;
}

void drawHorizontalAxis(int axisWidth){
    cout << "    +" << flush;
    for(int i = 0; i < axisWidth / 10; i++){
        cout << "----+----+" << flush;
    }
    cout << endl;
}

void labelHorizontalAxis(int axisWidth){
    cout << "    " << flush;
    for (int i = 0; i <= axisWidth; i++){
        if (i % 5 == 0 || i % 10 == 0){
            cout << i << flush;
            if(i >= 10){
                i++;
            }
        } else{
            cout << " " << flush;
        }
    }
    cout << endl;
}

void drawCount(int value, int quantity){
    cout << setw(3) << value << flush;
    cout << " |" << flush;
    for(int i = 0; i < quantity; i++){
      cout << "#" << flush;
      }
      cout << endl;
}

void drawValues(int nums[], int lowerRange, int upperRange){
    for(int i = upperRange-lowerRange; i >= 0; i--){
        drawCount(i + lowerRange, nums[i]);
    }
}

void createHistogram(int nums[], int lowerRange, int upperRange){
    drawValues(nums, lowerRange, upperRange);
    int width = axisWidth(nums, lowerRange, upperRange);
    drawHorizontalAxis(width);
    labelHorizontalAxis(width);
}
