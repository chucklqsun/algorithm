#include <bitset>
#include <iostream>

//check power2: (val & -val) == val because it check the rightest bit
void checkPowerTwo1(int64_t val){
    std::bitset<sizeof(int64_t)> x(val);
    std::cout << val << " is " << x << std::endl;

    std::cout << val << " flip is " << x.flip() << std::endl;

    val *= -1;
    x = val;
    std::cout << val << " is " << x << std::endl;

    val = val & -val;
    x = val;
    std::cout << val << " is " << x << std::endl;
}

//check power2: (val & (val-1)) == 0
void checkPowerTwo2(int64_t val1){
    std::bitset<sizeof(int64_t)> x(val1);
    std::cout << val1 << " is " << x << std::endl;

    int64_t val2 = val1-1;
    x = val2;
    std::cout << val2 << " is " << x << std::endl;

    val1 = val1 & val2;
    x = val1;
    std::cout << val1 << " is " << x << std::endl;
}

void tableSizeFor(int64_t val){
    std::bitset<sizeof(int64_t)> x(val);
    std::cout << val << " is " << x << std::endl;
    val = val - 1;
    x = val;
    std::cout << val << " is " << x << std::endl;

    int64_t k = 1;
    for(size_t i=0;i< sizeof(int64_t);i++){
        val |= val >> (k << i);
        x = val;
        std::cout << val << " is " << x << std::endl;
    }

    // cal power two less than val
//    val = val - (val >> 1);
//    x = val;
//    std::cout << val << " is " << x << std::endl;

    // cal power two larger than val
    val = val + 1;
    x = val;
    std::cout << val << " is " << x << std::endl;

}

int main(int argc, char *argv[]) {
//    checkPowerTwo1(atoi(argv[1]));
//    checkPowerTwo2(atoi(argv[1]));
    tableSizeFor(atoi(argv[1]));
}
