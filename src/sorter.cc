#include"threeintegersort.h"
//Using Ahmed's method, but really broke it down to learn what and why every part is doing. Hope this is okey
namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {

                void sort(int &a, int &b, int &c) {//Address's for swapping later.
                    int array[3] = {a, b, c};
                    int hold; //swapping mechanism
                    //int j, i = 0; //variables to iterate with and compare.
                    for (int i = 0; i < 2; i++) { //O(n) iterative step ensures each variable is tested and secured the value in ascending order
                       for(int j = 1; j < 3; j++){ //O(n(Square)) iterative step does superficial swapping
                           if(array[i] > array[j]){ //swapping method utilizing holder
                               hold = array[j];
                               array[j] = array[i];
                               array[i] = hold;
                           }

                       }

                    }
                    a = array[0];//input a, b, c as sorted variables
                    b = array[1];
                    c = array[2];
                } //end of sort scope
            }
        }
    }
}