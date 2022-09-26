#include <iostream>
#include "pairs.hpp"
//fill pairs in with aribic numerals -> romans
pairs rom_num({ 1,5,10,50,100,500,1000 }, { 'I','V', 'X', 'L', 'C', 'D','M' });



[[nodiscard]] int ToNumeral(std::string s) {
    int current = 0;
    int next = 0;
    int ret = 0;
    if (s.size() == 1) {
        for( int x =0; x< rom_num.size-1; x++){
            ret = rom_num.vals[x];
        }
    }

    for (int x = 0; x < s.size()-1; x++) {
        
        for (int f = 0; f < rom_num.size - 1; f++) {
            if (s[x] == rom_num.chars[f]) {
                current = rom_num.vals[f];
                std::cout << current << "is current\n";
                break;
            }
        }
        for (int f = 0; f < rom_num.size - 1; f++) {
            if (s[x + 1] == rom_num.chars[f]) {
                next = rom_num.vals[f];
                std::cout << next << " is next\n";
                break;
            }
            if (s[x + 1] == '\0' ) {
                next = 0;
                std::cout << "next is null\n";
                break;
            }
        }
        if (current < next) {

            ret -= (current-next);
            std::cout << ret<<" is oper\n";
        }
        if (current >= next) {
            
            ret += (current+next);
            std::cout << ret << " is oper\n";
        }

    }

    return ret;

}

int main()
{
    std::cout << "Hello World!\n";
    std::cout<<ToNumeral("LX");
}

