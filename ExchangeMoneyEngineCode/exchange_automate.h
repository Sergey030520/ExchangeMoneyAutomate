//
// Created by Malip on 08.12.2022.
//

/*#ifndef AUTOMATETRANSFERMONEY_TRANSFER_AUTOMATE_H
#define AUTOMATETRANSFERMONEY_TRANSFER_AUTOMATE_H*/

#ifndef C_AUTOMATETRANSFERMONEY_TRANSFER_AUTOMATE_H
#define C_AUTOMATETRANSFERMONEY_TRANSFER_AUTOMATE_H


#if defined(__cplusplus)
    extern "C" {
#endif


    enum InputSymbols{
        COIN_ONE = 1,
        COIN_THREE = 3,
        COIN_FIVE = 5,
        COIN_TEN = 10
    };
    enum OutputSymbols{
        OUT_COIN_0 = 0,
        OUT_COIN_1,
        OUT_COIN_2,
        OUT_COIN_3,
        OUT_ERROR = -1
    };
    enum StateSymbols{
        STATE_ZERO = 0,
        STATE_ONE = 1,
        STATE_TWO= 2,
        STATE_UNKNOWN = -1
    };

    struct AutomateExchangeMoney{
        enum StateSymbols state;
    };

enum OutputSymbols exchange_money(struct AutomateExchangeMoney* automate, enum InputSymbols inSymbol);
enum StateSymbols mod_3(int current_value);
enum OutputSymbols div_3(int current_value);

#if defined(__cplusplus)
}
#endif

#endif //AUTOMATETRANSFERMONEY_TRANSFER_AUTOMATE_H
