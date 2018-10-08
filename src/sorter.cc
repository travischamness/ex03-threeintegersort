#include"threeintegersort.h"
namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {

                void sort(int &a, int &b, int &c) {//no return
                    int array[] = (a, b, c);
                    for (int i = 0; i <= 2; i++) {
                        int j = i;
                        if (array[j] >= array[j - 1]) {
                            int hold = array[j];
                            array[j] = array[j - 1];
                            array[j - 1] = hold;
                            --j;
                        }
                    }
                }
            }
        }
    }
}