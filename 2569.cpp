#include <iostream>
#include<stdlib.h>

int inttochar(char*);

int main(int argc, char const *argv[])
{
    char 
        ncA[12],
        ncB[12],
        resp[12],
        oper;
    std::cin >> ncA >> oper >> ncB;

    switch (oper)
    {
    case '+':
        snprintf(resp, sizeof(resp), "%d", inttochar(ncA) + inttochar(ncB));
        std::cout <<  inttochar(resp) << '\n';
        return 0;
        break;
    case '*':
    case 'x':
    case 'X':
        snprintf(resp, sizeof(resp), "%d", inttochar(ncA) * inttochar(ncB));
        std::cout <<  inttochar(resp) << '\n';
        return 0;
        break;
    case '-':
        snprintf(resp, sizeof(resp), "%d", inttochar(ncA) - inttochar(ncB));
        std::cout <<  inttochar(resp) << '\n';
        return 0;        break;
    case '/':
        snprintf(resp, sizeof(resp), "%d", inttochar(ncA) / inttochar(ncB));
        std::cout <<  inttochar(resp) << '\n';
        return 0;
        break;
    default:
        std::cout << "Operado " << oper << " não identificado\n ";
        break;
    }

    return 0;
}

int inttochar(char* str) {
    int 
        niResp = 0;
    
    for(int I = 0; str[I]; I++) {
        niResp *= 10;
        switch (str[I])
        {
        case '0':
            niResp += 0;
            break;
        case '1':
            niResp += 1;
            break;
        case '2':
            niResp += 2;
            break;
        case '3':
            niResp += 3;
            break;
        case '4':
            niResp += 4;
            break;
        case '5': 
            niResp += 5;
            break;
        case '6':
            niResp += 6;
            break;
        case '7':
            //niResp += 7;
            niResp += 0;
            break;
        case '8':
            niResp += 8;
            break;
        case '9':
            niResp += 9;
            break;
        default:
            break;
        }
    }
    return niResp;    
}