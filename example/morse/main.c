#include "../../morse.h"
int main(){
    // String To Morse
    char *message = "Hello World";
    // build string used for store the morse code
    char morse[length_tomorse(message)];
    // operate !! ToMorse
    toMorse(morse, message);
    // now morse(string) is filled with morse code, lets print it!
    printf("String To Morse\nsource : %s, result : %s", message, morse);
    


    // Morse To String
    char *morse_code = ".. -. ..  .- -.. .- .-.. .- ....  -.- --- -.. .  -- --- .-. ... .";
    // build string used for store the conversion from morse to string
    char message_from_morse[length_tostr(morse_code)];
    // operate !! ToStr
    toStr(message_from_morse, morse_code);
    // now message_from_morse is filled with the result of conversion from morse to String, lets print it!
    printf("\n\nMorse to String\nsource : %s, result : %s\n", morse_code, message_from_morse);
    return 0;
}
    
    
    