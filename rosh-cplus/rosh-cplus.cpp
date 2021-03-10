#include <iostream>
#include <list>
#include "Functions.h"
#include "hazekaros.h"

int main()
{
    int arg1 = 0x22;
    int varSuperRandom = 0x99;
    int arg0 = 0x86;
    int eaxVal = 0x6;
    int ediVal = 0x3;
    int arg1Suma = 0x0;
    int varRandom = 0x0;        
    int indexConst = 0x1;
    int inc = 0x0;
    arg0 = 0x2;

    Functions* fns = new Functions();

    fns->arg1_int_longitud_maxima = 0x167;    
    fns->iLstStrDst = 0x0;
    fns->index_arg0_ptr_string_enorme = 0x0;
    fns->var_remanente1 = 0x6;

    // Mamarra Vectors
    fns->esi = karos::mamarra::finals_vals::esi;
    fns->wsa_buf = karos::mamarra::finals_vals::wsa_buf;
    fns->arg0_ptr_string_enorme = karos::mamarra::vectors::arg0_ptr_string_enorme;
    fns->arg2_string_ptr = karos::mamarra::vectors::arg2_string_ptr;    
    fns->arg0_ptr_string_enorme = karos::mamarra::vectors::arg0_ptr_string_enorme;
    fns->var_super_random = karos::mamarra::vectors::var_super_random;
    fns->arg4_byte_92B524 = karos::mamarra::vectors::arg4_byte_92B524;

    // Mamarra vars
    fns->veces_loop_2 = karos::mamarra::veces_loop_2;
    fns->var_remanente1 = karos::mamarra::var_remanente1;
    fns->arg3_max_length_wsabuff = karos::mamarra::arg3_max_length_wsabuff;
    fns->arg1_int_longitud_maxima = karos::mamarra::arg1_int_longitud_maxima;

    fns->UncryptWsBuf();
    return 0;

    fns->BeginLoop1();

    return 0;

    fns->nomodifica = 0x16C;
    fns->index3 = 0x0;
    fns->index1 = 0xA8;
    fns->BeginLoop4();

    fns->index3 = 0x6D;
    fns->index0 = 0x3;
    fns->index1 = 0x64;
    fns->BeginLoop3();

    fns->indexArg2 = 0x0;
    fns->index1 = 0x0;
    fns->nomodifica = 0x16C;
    fns->index0 = 0x16C;
    fns->index1 = 0x0;
    fns->indexArg2 = 0x2D;

    arg0 = 0x05;
    arg1 = 0xCF;    
    fns->FuncionXor(&arg0, &arg1);

    fns->index0 = 0x0;
    fns->index1 = 0xB6;
    fns->indexArg2 = 0x0;
    fns->BlockEndLoopMamarra();

    fns->indexArg4 = 0x0;
    fns->index_var_super_random = 0x0;
    fns->iLstNums = 0x0;
    fns->index_arg0_ptr_string_enorme = 0x0;
    fns->iLstStrDst = 0x0;    
    fns->index1 = 0x0;    

    fns->veces_loop_2 = 0x2;
    fns->BeginLoop1();
    return 0x0;

    fns->BlockLoop1();

    fns->BlockCmpJle();
    
    fns->_Loop2();
    fns->_Loop3();

    CMemPool mPool;

    fns->FuncionModEex1(&mPool, 0x2, 0x3);

    std::string varBroma = "broma";
    fns->CleanWithZero(varBroma);
        
    std::string arg0Input = "Hola Mundo";
    fns->ConvertWideAnsi(arg0Input,
        arg0Input.length(),
        NULL,
        NULL);

    // fns->FuncionMamarra(0x0, 0x6, std::string(), 0x0, 0x0);

    std::string username;
    std::string hash2 = "5bd5b92a6a68ffabecc9ef3b36cc3066";
    std::string hash1 = "b755441959f0fb071dda530f086cc58c";
    std::string none = "NONE";
    int arg0ptr = 0;
    const int constante = 0x0FFFFFFFF;
    LPCSTR strArg7 = nullptr;

    fns->UtilizaCNetMsgVftable();

    fns->FuncionNetworkingEnorme(
        &arg0ptr,
        0x2,
        0x3,
        0x0,
        0x0,
        0x0,
        0x0,
        strArg7,
        username,
        0x0,
        constante,
        none,
        hash1,
        hash2.c_str());

    return 0;
}
