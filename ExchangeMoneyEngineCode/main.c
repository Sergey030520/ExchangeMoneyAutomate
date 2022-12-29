#include <stdio.h>
#include <stdlib.h>
#include "exchange_automate.h"


int main() {
    enum InputSymbols inSymbols[] = { COIN_ONE, COIN_ONE, COIN_ONE};
    struct AutomateExchangeMoney engine = {STATE_ZERO};

    int count_el = sizeof (inSymbols)/sizeof (inSymbols[0]);

    for(int ind = 0; ind < count_el; ++ind){
        printf("Res: %u  State: %u\n", exchange_money(&engine, inSymbols[ind]),
               engine.state);
    }
    return EXIT_SUCCESS;
}
