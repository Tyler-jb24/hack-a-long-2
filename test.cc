// hackalong
#include <iostream>
#include <string>
#include <vector>
int main(){
    std::cout << "hello world" << "\n";
    std::vector<int> nums{3, 7, 9, 13, 17};

    for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it){
        *it *= 2;
    }
    for (auto it = nums.cbegin(); it != nums.cend(); ++it){
        std::cout << *it << "\n";
    }
    return 0;
}
