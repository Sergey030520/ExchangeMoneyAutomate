//
// Created by Malip on 08.12.2022.
//

#include "exchange_automate.h"

enum OutputSymbols exchange_money(struct AutomateExchangeMoney* automateTransfer, enum InputSymbols inSymbol) {
    int current_value = inSymbol + automateTransfer->state;
    automateTransfer->state = mod_3(current_value);
    return div_3(current_value);
}

enum StateSymbols mod_3(int current_value) {
    switch (current_value % 3) {
        case STATE_ZERO:
            return STATE_ZERO;
        case STATE_ONE:
            return STATE_ONE;
        case STATE_TWO:
            return STATE_TWO;
        default:
            return STATE_UNKNOWN;
    }
}

enum OutputSymbols div_3(int current_value) {
    switch (current_value/3) {
        case OUT_COIN_0:
            return OUT_COIN_0;
        case OUT_COIN_1:
            return OUT_COIN_1;
        case OUT_COIN_2:
            return OUT_COIN_2;
        case OUT_COIN_3:
            return OUT_COIN_3;
        default:
            return OUT_ERROR;
    }
}