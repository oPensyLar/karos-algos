#include "Functions.h"

void Functions::CmpJge()
{

    if (ecxCpyIndexArg1Xor >= 0x2)
        EndLoop5();

    else
    {
        
        if (cpyIndexArg1Xor == 0x7)
        {
            EndLoop5();
        }

            else
            {
                _indexArg1Xor = cpyIndexArg1Xor + 2;

                if (_indexArg1Xor == 0x7)
                {
                    EndLoop5();
                }

                    else
                    {
                        
                        if (ecxCpyIndexArg1Xor != 0x0)
                            XorSencillo();
                        
                        else
                        { 
                            // 0x00641177
                            int xorPrm1 = arg2_string_ptr->at(_indexArg1Xor);
                            int xorPrm0 = arg2_string_ptr->at(cpyIndexArg1Xor);

                            FuncionXor(&arg2_string_ptr->at(cpyIndexArg1Xor),
                                &arg2_string_ptr->at(_indexArg1Xor));

                            EndLoop5();
                        }                        
                    }
            }
    }

}

void Functions::EndLoop5()
{
    cpyIndexArg1Xor++;

    int vEax = cpyIndexArg1Xor + 0x2;

    if (vEax < arg3_max_length_wsabuff)
        BeginLoop5();

    else
    {      
        DumpVector();
        ByeBye();
    }
}

void Functions::XorSencillo()
{

    int xor1 = arg2_string_ptr->at(_indexArg1Xor);
    int xor0 = arg2_string_ptr->at(cpyIndexArg1Xor);
    int varAux = xor0^ xor1;

    __asm
    {
        mov ebx, varAux
        movzx bl, ebx
        movzx ebx, bl
        mov varAux, ebx
    }

    arg2_string_ptr->at(cpyIndexArg1Xor) = varAux;

    varAux = arg2_string_ptr->at(_indexArg1Xor) + arg2_string_ptr->at(cpyIndexArg1Xor);


    __asm
    {
        mov ebx, varAux
        movzx bl, ebx
        movzx ebx, bl
        mov varAux, ebx
    }

    arg2_string_ptr->at(_indexArg1Xor) = varAux;

    EndLoop5();

}

void Functions::AntesDelMemset()
{
}

int *Functions::CMemPoolZeroPtrInit(int arg0, int arg1)
{       

    if (gMemPool->number == 0x0)
    {
        // ANTES_DEL_MEMSET:

        gMemPool->incrementador++;

        if (arg0 == 0x0)
        {
            return 0;
        }

        memset(gMemPool->ptr, 0x0, 0x4000);
    }    

    else
    {
        // call CONTIENE_FUNCION_ERROR1

        if (arg0 == 0x0)
        {
            return 0;
        }

        memset(gMemPool->ptr, 0x0, 0x4000);

    }

    return gMemPool->ptr;
}


int Functions::UtilizaCNetMsgVftable()
{

    gCNetMsg->entero0x4 = 0x0;
    RegistroAZero();

    return 0;
}

int Functions::MueveRegsNoCall(int arg0, CMemPool *arg1)
{
    
    gMemPool->handle = arg0;

    return 0;
}

int Functions::FuncionError()
{


    return 0;
}


void Functions::BlockLoop1()
{

    if (index1 < veces_loop_2)
    {
        Loop2();
    }

}

void Functions::BlockCmpJle()
{


    if (index_arg0_ptr_string_enorme && 0x0)
    {
        BlockAntesLoop1();
    }

        else
        {
            BlockRandLoop();
        } 
}

void Functions::BlockAntesLoop1()
{
}

void Functions::BlockRandLoop()
{
}

void Functions::Loop2()
{

    // 0x00640F86
    if (iLstStrDst == 0x4)
        EndLoop1();

    if (iLstStrDst == 0x7)
        EndLoop1();

    int varAux = iLstStrDst;
    int flagActive = 0x1;

    // 0x00640F52
    // 0x00640F92
    __asm
    {
        mov ebx, varAux
        and ebx, 0x8000000F
        jns active

        active :
            mov flagActive, 0x0

            mov varAux, ebx
    }
    
    // 0x00640F96
    index_arg4_byte_92B524 = varAux;

    // 0x00640F9C
    indexArg2StringPtr = iLstStrDst;    

    if (flagActive == 0x0)
        Loop3();

}


void Functions::Loop3()
{

    int varAux = iLstStrDst;
    int dividend = 0x0;

    __asm
    {
        mov eax, varAux
        cdq
        mov edi, 0x3
        idiv edi

        mov dividend, edx
    }

    // 0x00640FB1 
    int arg4Val = arg4_byte_92B524.at(index_arg4_byte_92B524);

    // 0x00640FB7
    // add bl, [ebp+edx+var_super_random]
    arg4Val = arg4Val + var_super_random.at(dividend);

    __asm
    {
        mov ebx, arg4Val
        movzx bl, ebx
        movzx ebx, bl
        mov arg4Val, ebx
    }
    
    arg2_string_ptr->at(indexArg2StringPtr) = 
        arg2_string_ptr->at(indexArg2StringPtr) + arg4Val;

    varAux = arg2_string_ptr->at(indexArg2StringPtr);

    __asm
    {
        mov eax, varAux
        movzx al, eax
        movzx eax, al
        mov varAux, eax
    }

    // 0x00640FBB
    arg2_string_ptr->at(indexArg2StringPtr) = varAux;

    _Loop3();

}


void Functions::FuncionXor(int *arg0, int *arg1)
{
    int varTmp = Movzx8(*arg0 ^ *arg1);
    *arg0 = Movzx8(varTmp + *arg1);
    *arg1 = varTmp;
}


int Functions::Movzx8(int dat)
{
    return ((dat & 0x80) << 0) | (dat & 0x7F);
}

void Functions::BlockEndLoop()
{
}


void Functions::BeginLoop4()
{

    int edx = 0x0;
    
    index0 = arg3_max_length_wsabuff;

    // 0x00641035
    index0 = index0 - edx;
    int varAux = index0;

    // 0x00641037
    __asm
    {
        sar varAux, 1
    }

    index0 = varAux;
    
    // 0x00641039
    index0 = index0 + index0;

    // 0x0064103B
    index0 = index0 - cpyIndexArg1Xor;

    // 0x0064103D
    index0--;

    // 0x0064103E
    if (cpyIndexArg1Xor == 0x7)
        EndLoop4();

    // 0x00641043
    if (index0 == 0x7)
        EndLoop4();

    varAux = indexArg1Xor;
    int flagNotSigned = 0x0;

    __asm
    {
        and varAux, 0x80000001

        jns blockNotSigned

        blockNotSigned:
            mov flagNotSigned, 0x1
    }

    index3 = varAux;

    if (flagNotSigned)
    {
        BlockCmp4();
    }

        else
        {
            if (varAux != 0x1)
                BlockXor4();
        }

}


void Functions::EndLoop4()
{

    int var0 = arg3_max_length_wsabuff;

    var0 = var0 - index3;

    cpyIndexArg1Xor++;

    __asm
    {
        sar var0, 0x1
    }

    if (cpyIndexArg1Xor < var0)
        BeginLoop4();
}


void Functions::BlockCmp4()
{

    if (index3 != 0x1)
    {
        BlockXor4();
    }

        else 
        {   
            // 0x00641064
            FuncionXor(&arg2_string_ptr->at(indexArg1Xor), &arg2_string_ptr->at(index0));
            EndLoop4();
        }

}

void Functions::BlockXor4()
{

    // 0x0064106D
    // 0x0064106F
    // 0x00641071
    // 0x00641073
    arg2_string_ptr->at(cpyIndexArg1Xor) =
        arg2_string_ptr->at(cpyIndexArg1Xor) xor arg2_string_ptr->at(index0);

    arg2_string_ptr->at(index0) = arg2_string_ptr->at(index1);

    EndLoop4();
}


void Functions::BeginLoop3()
{
    
    // mov ecx, ebx;
    ecxIndexArg1Xor = indexArg1Xor;
    
    int varAux = ecxIndexArg1Xor;
    int flagNotSigned = 0x0;

    __asm
    {
        and varAux, 0x80000003
        jns blockNotSigned

        blockNotSigned:
            mov flagNotSigned, 0x1
    }

    ecxIndexArg1Xor = varAux;

    if (flagNotSigned)
    {
        BlockCmp();
    }

}

void Functions::BlockTestJle(int edx)
{
    // 0x00641203
    int restaTmp = arg3_max_length_wsabuff - edx;    
    
    //0x00641205
    int sarResult = arg3_max_length_wsabuff / 2;


    if (sarResult <= 0)
        ByeBye();

    BlockBeginLoop();

    /*edx--;

    if (0x1 == 0x0)
        CheckEdiIsTwo();

    edx--;

    if(0x0 == 0x0)
        CheckEdiIsTwo2();

    */

    

}


void Functions::EvalResult()
{
    for (int i = 0x0; i < esi.size(); i++)
    {
        if (esi.at(i) != arg2_string_ptr->at(i))
        {
            std::cout << "distinto" << std::endl;
        }
    }
        
    
    return;
}


int Functions::UncryptWsBuf()
{
    DeployUncrypt();
    return 0;
}


std::map<char, int> Functions::DecryptXorV2(int prm0, int prm1)
{

    std::map<char, int> ret;

    ret['k'] = Movzx8(prm0 - prm1);
    ret['d'] = Movzx8(prm1 ^ ret['k']);

    return ret;

}


std::vector<int> Functions::DeployUncrypt()
{
    std::vector<int> resultHalf0;
    std::vector<int> resultHalf1;

    // sar
    std::size_t const half_size = wsa_buf.size() / 2;

    // len
    std::vector<int> lenData(wsa_buf.begin(), wsa_buf.begin() + 0x4);

    // half1
    std::vector<int> half0(wsa_buf.begin() + 0x4, wsa_buf.begin() + half_size);

    // half2
    std::vector<int> half1(wsa_buf.begin() + half_size, wsa_buf.end());

    std::vector<int>::const_iterator lIt = lenData.begin();
    std::vector<int>::const_iterator half0It = half0.begin();
    std::vector<int>::const_iterator half1It = half1.begin();
    std::map<char, int> realBytes;

    /*for (; lIt != lenData.end(); ++lIt)
        std::cout << std::hex << *lIt;*/

    for (; half0It != half0.end(); half0It++, half1It++)
    {
        /*std::cout << std::hex << *half0It << ", ";
        std::cout << std::hex << *half1It << ", ";*/

        realBytes = DecryptXorV2(*half0It, *half1It);

        resultHalf0.push_back(realBytes['k']);
        resultHalf1.push_back(realBytes['d']);
    }        

    /*for (; half1It != half1.end(); half1It++)
        std::cout << std::hex << *half1It;*/

    return resultHalf0;
}


void Functions::ByeBye()
{
    EvalResult();
    exit(0);
}

void Functions::CheckEdiIsTwo()
{
    if (arg3_max_length_wsabuff <= 0x2)
    {
        ByeBye();
    }

    else
    {
        BeginLoop5();
    }
}


void Functions::CheckEdiIsTwo2()
{
    if (arg3_max_length_wsabuff <= 0x2)
        ByeBye();

    BeginLoop3();

}

void Functions::DumpVector()
{
    std::ofstream file_ofstream("C:\\Users\\opensylar\\Desktop\\karos\\mem\\dump\\replicante\\dump.log");
    
    int i = 0x0;
    std::string outputStr;    
    std::string strFinal;

    while (i < arg2_string_ptr->size())
    {

        std::stringstream stream;
        strFinal.clear();

        strFinal = "0x";
        stream << std::hex << arg2_string_ptr->at(i);
        strFinal = strFinal + stream.str() + "\n";
        file_ofstream.write(strFinal.c_str(), strFinal.length());

        i++;
    }

    if (!file_ofstream)
        return;    

    file_ofstream.close();

}

void Functions::BlockCmp()
{
    
    // 0x00641106
    if (ecxIndexArg1Xor >= 0x2)
        EndLoop3();

    // 0x0064110B
    if(indexArg1Xor == 0x7)
        EndLoop3();

    // 0x00641110
    indexArg2 = indexArg1Xor + 0x2;

    // 0x00641113
    if (indexArg2 == 0x7)
        EndLoop3();

        // 0x00641118
        if (ecxIndexArg1Xor != 0x1)
            BlockXor3();

    else
    {
        // 0x00641122
        // int arg1 = arg2_string_ptr->at(indexArg1Xor);

        // 0x0064111F
        // int arg2 = arg2_string_ptr->at(indexArg2);        

        FuncionXor(&arg2_string_ptr->at(indexArg1Xor),
            &arg2_string_ptr->at(indexArg2));
    }

    EndLoop3();

}

void Functions::EndLoop3()
{

    // 0x0064113A
    indexArg1Xor++;

    // 0x0064113B
    int val0 = indexArg1Xor + 0x2;

    if (val0 < arg3_max_length_wsabuff)
        BeginLoop3();

}


void Functions::BlockXor3()
{

    // 0x0064112E
    int val1 = arg2_string_ptr->at(indexArg2);

    // 0x00641132
    int val0 = arg2_string_ptr->at(indexArg1Xor);

    // 0x00641134
    arg2_string_ptr->at(indexArg1Xor) = val0 xor val1;

    // 0x00641138
    // arg2_string_ptr->at(indexArg2) = val1 + arg2_string_ptr->at(indexArg1Xor);
    int varAux = val1 + arg2_string_ptr->at(indexArg1Xor);

    __asm
    {
        mov eax, varAux
        movzx eax, al
        mov varAux, eax
    }

    arg2_string_ptr->at(indexArg2) = varAux;

    EndLoop3();
}


void Functions::EndLoop2()
{

    int tmpVal = arg3_max_length_wsabuff - 0x0;
    indexArg1Xor++;

    __asm
    {
        sar tmpVal, 1
    }

    if (indexArg1Xor < tmpVal)
        BlockBeginLoop();

    DumpVector();
    ByeBye();

}


void Functions::BlockMovEsi3(int arg0)
{

    if (intVal0 == 0x1)
    {

        int xor1 = arg2_string_ptr->at(indexArg0Xor);
        int xor0 = arg2_string_ptr->at(indexArg1Xor);

        FuncionXor(&arg2_string_ptr->at(indexArg1Xor), 
            &arg2_string_ptr->at(indexArg0Xor));

        EndLoop2();

    }
        
        else
            BlockAddrXor0();
}


void Functions::BlockAddrXor0()
{
   
    int xorArg1 = arg2_string_ptr->at(indexArg0Xor);
    int xorArg0 = arg2_string_ptr->at(indexArg1Xor);
    int tmpVal;

    // 0x006411EC
    arg2_string_ptr->at(indexArg1Xor) =
        arg2_string_ptr->at(indexArg1Xor) ^ arg2_string_ptr->at(indexArg0Xor);

    tmpVal = arg2_string_ptr->at(indexArg0Xor) + arg2_string_ptr->at(indexArg1Xor);

    __asm
    {
        mov eax, tmpVal
        movzx al, eax
        mov tmpVal, eax
    }

    arg2_string_ptr->at(indexArg0Xor) = tmpVal;
    
    EndLoop2();
}

void Functions::loc_64119F()
{
    int tmpVal = arg3_max_length_wsabuff;

    tmpVal = tmpVal - cpyIndexArg1Xor;

    __asm
    {
        sar tmpVal, 0x1
    }

    if (tmpVal <= 0x0)
        ByeBye();

        else
        {
            BlockBeginLoop();
        }
}

void Functions::loc_64108A()
{
    int tmpVal = arg3_max_length_wsabuff;

    tmpVal = tmpVal - cpyIndexArg1Xor;

    __asm
    {
        sar tmpVal, 1
    }

    if (tmpVal == 0x0)
        ByeBye();

    BeginLoop2();
}


void Functions::BeginLoop5()
{
    // 0x00641150
    int varAux = cpyIndexArg1Xor;
    int fNotSigned = 0x0;

    __asm
    {
        and varAux, 0x80000003
        jns flagNotSigned

        flagNotSigned:
            mov fNotSigned, 0x1
    }

    ecxCpyIndexArg1Xor = varAux;

    if (fNotSigned)
    {
        CmpJge();
    }
}

// BLOCK_END_LOOP
void Functions::BlockEndLoopMamarra()
{

    // 0x0064124F
    // sub eax, edx
     int sarArg3 = arg3_max_length_wsabuff - cpyIndexArg1Xor;

    // 0x00641251
    indexArg1Xor++;

    sarArg3 = sarArg3 / 2;

    if (indexArg1Xor < sarArg3)
        BlockBeginLoop();

    else
        ByeBye();

}


// BLOCK_BEGIN_LOOP
void Functions::BlockBeginLoop()
{

    int varAux = 0x0;

    // 0x0064120E    
    indexArg0Xor = arg3_max_length_wsabuff - cpyIndexArg1Xor;

    // 0x00641210
    indexArg0Xor = indexArg0Xor / 2;

    // 0x00641212
    indexArg0Xor = indexArg0Xor + indexArg1Xor;

    // 0x00641214
    if(indexArg1Xor == 0x7)
        EndLoop2();

        else
        {

        // 0x00641219
        if (indexArg0Xor == 0x7)
                EndLoop2();

            // 0x00641220
            int tmpVal = indexArg1Xor;
            tmpVal = tmpVal & 0x80000001;

            // Problem!
            if (tmpVal >= 0x0)
            {
                BlockMovEsi(tmpVal);
            }
                
            
        }

    int flagNotSigned = 0x0;

    varAux = indexArg1Xor;

    // 0x0064121E
    // 0x00641220
    __asm
    {
        mov ecx, varAux
        and ecx, 0x80000001

        jns chkNotSigned

        chkNotSigned:
            mov flagNotSigned, 0x1
    }

    if (flagNotSigned == 0x0)
    {
        indexArg2--;
        varAux = indexArg2;

        __asm
        {
            or varAux, 0x0FFFFFFFE
        }

        indexArg2 = varAux;
        indexArg2++;
    }

        else
        {
            BlockMovEsi(flagNotSigned);
        }    

}


void Functions::BlockMovEsi(int zf)
{

    if (zf != 0)
        BlockAddrXor();

    else
    {
        int xor1 = arg2_string_ptr->at(indexArg0Xor);
        int xor0 = arg2_string_ptr->at(indexArg1Xor);

        FuncionXor(&arg2_string_ptr->at(indexArg1Xor),
            &arg2_string_ptr->at(indexArg0Xor));

        // BLOCK_END_LOOP
        BlockEndLoopMamarra();
    }
}


void Functions::BlockAddrXor()
{
    // 0x00641246
    arg2_string_ptr->at(indexArg1Xor) =
        arg2_string_ptr->at(indexArg1Xor) xor arg2_string_ptr->at(indexArg0Xor);

    arg2_string_ptr->at(indexArg0Xor) = Movzx8(arg2_string_ptr->at(indexArg0Xor) +
        arg2_string_ptr->at(indexArg1Xor));

    // BLOCK_END_LOOP
    BlockEndLoopMamarra();
}


int Functions::BeginLoop2()
{
    tmpVal = arg3_max_length_wsabuff;

    // 0x0064109C
    tmpVal = tmpVal - cpyIndexArg1Xor;
    
    int localInt = tmpVal;

    __asm
    {
        sar localInt, 1
    }

    tmpVal = localInt;

    tmpVal = tmpVal + tmpVal;

    tmpVal = tmpVal - indexArg1Xor;

    // 0x006410A4
    tmpVal--;

    if (indexArg1Xor == 0x7)
        BlockEnd2();

    // 0x006410AA
    if(tmpVal == 0x7)
        BlockEnd2();

    int tmpVal1 = indexArg1Xor;
    int flagSigned = 0x1;

    __asm
    {
        and tmpVal1, 0x80000001
        jns NotSigned

        NotSigned:
            mov flagSigned, 0x0
    }    

    // 0x006410AF
    flagZero = (tmpVal1 and 0x80000001) == 0x0;

    if (flagSigned == 0x0)
        BlockMovEsi1();

    return 0x0;
}


void Functions::BlockEnd2()
{
    int tmpArg3 = arg3_max_length_wsabuff;

    tmpArg3 = tmpArg3 - cpyIndexArg1Xor;

    // 0x006410E2
    indexArg1Xor++;

    __asm
    {
        sar tmpArg3, 1
    }

    if (indexArg1Xor < tmpArg3)
        BeginLoop2();

}


void Functions::BlockXor()
{


    arg2_string_ptr->at(indexArg1Xor) =
        arg2_string_ptr->at(tmpVal) xor arg2_string_ptr->at(indexArg1Xor);

    int sum16 = (arg2_string_ptr->at(tmpVal) + arg2_string_ptr->at(indexArg1Xor)) / 64;

    arg2_string_ptr->at(tmpVal) = sum16;

    BlockEnd2();
}


void Functions::BlockMovEsi1()
{
    if (!flagZero)
        BlockXor();

        else
        {

            FuncionXor(
                &arg2_string_ptr->at(indexArg1Xor),
                &arg2_string_ptr->at(tmpVal));

            BlockEnd2();
        }

}


void Functions::BlockMovEsi3()
{
}


int Functions::BeginLoop1()
{


    if (iLstStrDst < veces_loop_2)
    {
        Loop2();
    }
        else
        {

            if (index_arg0_ptr_string_enorme >= arg1_int_longitud_maxima)
               Loop2();               

            // 0x00640F40
            if (iLstStrDst == 0x4)
                EndLoop1();

            // 0x00640F49
            if (iLstStrDst == 0x7)
                EndLoop1();

            int varAux = iLstStrDst;
            int flagNoSigned = 0x0;

            // 0x00640F54
            __asm
            {
                mov ebx, varAux
                and ebx, 0x8000000F

                mov varAux, ebx

                jns flagNS
                
                flagNS:
                    mov flagNoSigned, 0x1
            }

            index_arg4_byte_92B524 = varAux;

            if (flagNoSigned == 0x0)
            {
                varAux = iLstStrDst;
                flagNoSigned = 0x0;

                // 0x00640F5C
                __asm
                {
                    dec varAux
                    or varAux, 0x0FFFFFFF0
                    inc varAux
                }

                index_arg4_byte_92B524 = varAux;

                // FIXME
                // AQUI NO DEBERIA DE ASIGNARLE EL VALOR A iLstStrDst
                // iLstStrDst = varAux;

            }
                            
            _Loop2();
        }

    return 0;
}


int Functions::DespuesDeCifrar()
{

    int varAux = var_remanente1;

    __asm
    {
        xor edx, edx

        mov eax, varAux
        mov ecx, 0x6
        idiv ecx

        mov varAux, edx
    }


    // 0x00640FF9
    indexArg1Xor = 0x80 xor 0x80;

    // 0x00640FFB
    cpyIndexArg1Xor = varAux - indexArg1Xor;

    if (cpyIndexArg1Xor > 0x0)
    {
        // 0x00641003
        cpyIndexArg1Xor--;

        if(cpyIndexArg1Xor == 0x0)
        {
            loc_64119F();
        }

            else
            {
                // 0x0064100A
                cpyIndexArg1Xor--;

                if (cpyIndexArg1Xor == 0x0)
                {
                    CheckEdiIsTwo();
                }

                // 0x00641011
                cpyIndexArg1Xor--;

                if (cpyIndexArg1Xor == 0x0)
                {
                    CheckEdiIsTwo2();
                }

                // 0x00641018
                cpyIndexArg1Xor--;

                if (cpyIndexArg1Xor == 0x0)
                {
                    loc_64108A();
                }

                // 0x0064101B
                cpyIndexArg1Xor--;

                if (cpyIndexArg1Xor != 0x0)
                {
                    ByeBye();
                }

                else
                {
                    int tmpVal = arg3_max_length_wsabuff;

                    // 0x00641025
                    tmpVal = tmpVal - cpyIndexArg1Xor;

                    // 0x00641027
                    indexArg1Xor++;

                    __asm
                    {
                        sar tmpVal, 1
                    }

                    // 0x0064102A
                    if (tmpVal <= indexArg1Xor)
                        ByeBye();

                    else
                        BeginLoop4();
                }

            }
    }

        else
        {
            BlockTestJle(varAux);
        }    

    return 0x0;
}


int Functions::_Loop2()
{

    int varAux = iLstStrDst;

    __asm
    {
        xor edx, edx
        mov eax, varAux
        mov edi, 0x3
        idiv edi

        mov varAux, edx
    }

    // 0x00640F6C
    int var_arg4_byte_92B524 = arg4_byte_92B524.at(index_arg4_byte_92B524);

    // 0x00640F72
    int add_var_super_random = Movzx8(var_arg4_byte_92B524 + var_super_random.at(varAux));

    // 0x00640F79
    arg2_string_ptr->at(iLstStrDst) = Movzx8(add_var_super_random + arg0_ptr_string_enorme.at(index_arg0_ptr_string_enorme));

    // 0x00640F7E    
    index_arg0_ptr_string_enorme++;
    
    _Loop3();

    return 0;
}


int Functions::_Loop3()
{
    
    int varAux = iLstStrDst;
    int flagNotSigned = 0x0;
    int vEdx = 0x0;

    // 0x00640FBD
    varAux++;

    __asm
    {
        xor edx, edx
        mov eax, varAux
        mov ebx, 0x3
        idiv ebx

        mov vEdx, edx
    }

    // 0x00640FC6
    index_var_super_random = vEdx;

    varAux = iLstStrDst + 1;

    // 0x00640FCD
    __asm
    {    

        mov edx, varAux
        and edx, 0x8000000F

        jns flag

        flag:
            mov flagNotSigned, 0x1

        mov varAux, edx

    }

    // 0x00640FCD
    index_arg4_byte_92B524 = varAux;

    // 0x00640FD5
    if (flagNotSigned == 0x0)
    {
        varAux--;

        __asm
        {
            mov edx, varAux
            or edx, 0x0FFFFFFF0
        }

        varAux++;
    }

    Loop4();

    return 0;
}


int Functions::Loop4()
{

    // 0x00640FDA
    // 0x00640FCA
    // 0x00640FCD
    int vDl = arg4_byte_92B524.at(index_arg4_byte_92B524);


    // 0x00640FDF
    // add     dl, [ebx+ecx]
    vDl = vDl + arg2_string_ptr->at(iLstStrDst);
    
    __asm
    {

        mov eax, vDl
        movzx al, eax
        mov vDl, eax

    }

    // index_var_super_random se setea en ....
    var_super_random.at(index_var_super_random) = 
        var_super_random.at(index_var_super_random) + vDl;

    // NO ELIMINAR WORKS
    // varAux se utiliza para pasarlo a 16bits con el ASM embedido
    int varAux = var_super_random.at(index_var_super_random);

    // NO ELIMINAR WORKS
    __asm
    {
        mov eax, varAux
        movzx al, eax
        mov varAux, eax
    }

    // 0x00640FE5
    var_super_random.at(index_var_super_random) = varAux;

    EndLoop1();

    return 0;
}
    

int Functions::EndLoop1()
{

    iLstStrDst++;
    // longitud_maxima = 0x0

    if (iLstStrDst < arg3_max_length_wsabuff)
    {
        BeginLoop1();
    }

    DespuesDeCifrar();
        
    return 0;
}


int Functions::LlamaRand()
{

    // varRand = rand();
    varRand = 0x78;
    flagRandCalled = 1;    
    varRandOld = varRand;

    return 0;
}

int Functions::RandLoop()
{    

    if (flagRandCalled == 0)
    {
        LlamaRand();        
    }

        else
        {
            varRand = varRandOld;
        }

    int resultDivRemanente;

    // 0x00640D2E    
    int var1  = varRand;

    // BLOCK_DESPUES_RAND
    __asm
    {
        xor edx, edx

        mov eax, var1
        mov ecx, 0x1F31D
        div ecx

        mov resultDivRemanente, edx
        mov var1, eax
    }
     
    varRand = var1;

    // imul eax, 0x0B14
    varRand = varRand * 0x0B14;

    // imul edx, 0x41A7
    resultDivRemanente = resultDivRemanente * 0x41A7;
    resultDivRemanente = resultDivRemanente - varRand;
    varRand = resultDivRemanente;
    varRandOld = varRand;

    return 0;
}


int Functions::Mov16bRegister()
{
    // CHECKPOINT

    // incrementador = 0x0;



    return 0;
}


int Functions::FuncionModEex1(CMemPool *arg0, int arg1, int arg2)
{
    struct CMemPool* memPool;

    arg0->field1 = 0;
    arg0->handle = arg1;

    if (arg2)
    {
        arg0->field1 = arg2;
        memPool = arg0;

        return 0x0;
    }

    else
    {
        return 0x0;
    }
}

int Functions::CleanWithZero(std::string arg0)
{
    return 0;
}

int Functions::FuncionMamarra(int arg0, int arg1, std::string arg2, int arg3, int arg4)
{

    if (arg1 >= 5)
    {
        // BLOCK_RAND_MASTER:
        RandLoop();

        int var0 = varRand;
        int resultDivRemanente;

        // 0x00640E38
        __asm
        {
            xor edx, edx

            mov eax, var0
            mov ecx, 3
            div ecx

            mov resultDivRemanente, edx
            mov var0, eax
        }

        // inc edx
        resultDivRemanente++;
        varRand = var0;

        RandLoop();

        var0 = varRand;
        
        // 0x00640E48
        if (var0 > 0x1)
            var0 = 0x1;

        // 0x00640E4D
        var0++;

        RandLoop();

        var0 = varRand;
        int flagNS = 0x0;
        int varRemanente1;

        // 0x00640E53
        __asm
        {

            xor edx, edx
            // push 0x18
            // pop ecx
            mov eax, var0
            mov ecx, 0x18
            div ecx

            mov varRemanente1, edx
        }

        // add edx, 4
        varRemanente1 = varRemanente1 + 0x4;

        RandLoop();

        var0 = varRand;
        
        // 0x00640E65
        __asm
        {
            mov eax, var0
            movzx eax, al
            mov var0, eax                
        }

        if (var0 && 0x8000007F)
        {
            Mov16bRegister();
        }
            
    }

    return 0;
}

int Functions::FuncionModWSABuffEax(struct CNetMsg* arg0)
{

    int32_t varLocal;
    varLocal = arg0->sizeStr;

    if (varLocal >= arg0->sizeDeOtraCosa)
    {
        if ((arg0->sizeDeOtraCosa + 1) != 0x28028)
        {
            varLocal = 0x28027;
        }

        else
        {
            return varLocal + 1;
        }
    }

    return varLocal - arg0->sizeDeOtraCosa;
}


signed char Functions::FuncionNetworkingEnorme(
    int* arg0ptr,
    u_short arg1_u_short,
    u_short arg2_u_short,
    u_short arg3_u_short,
    u_short arg4_u_short,
    u_short arg5_u_short,
    u_short arg6_u_short,
    LPCSTR arg7_str,
    std::string arg8_str,
    void* arg9_void,
    int constInt,
    std::string none,
    std::string hash1,
    LPCSTR hash2)
{

    AntesCMutexMemsetWaitObject(0x2);    

    int *puntero = new int();
    *puntero = 0x0;

    LlamaMemcpy(puntero, 0x1);

    // SumaUnoEax();
    LlamaHtonlMemset(this->inc);

    auto retHtons = LlamaHtonsMemset(arg1_u_short);
    retHtons = LlamaHtonsMemset(arg1_u_short);
    retHtons = LlamaHtonsMemset(arg1_u_short);
    retHtons = LlamaHtonsMemset(arg1_u_short);
    retHtons = LlamaHtonsMemset(arg1_u_short);
    retHtons = LlamaHtonsMemset(arg1_u_short);

    LlamaHtonlMemset(arg1_u_short);

    LlamaMemcpy(&arg9_void, 0xFF);

    int retSetValues = SetValuesCMemPool(0x0, 0x1);

    int arg7_strSize = strlen(hash2);
    LPSTR arg3 = nullptr;

    ConvertWideAnsi(arg7_str, arg7_strSize, arg3, retSetValues);

    // char nose[100];
    // auto retStrlen = strlen(nose); //0x8c5930
    // ConvertWideAnsi();
    // retStrlen = strlen("Hola");
    // ConvertWideAnsi();

	return 0;
}


void Functions::RegistroAZero()
{   

    gCNetMsg->entero0x4 = 0x0;

    if (gCNetMsg->entero0x8 != 0)
    {
        // BYEBYE
        gCNetMsg->entero0x10 = 0x0;
        gCNetMsg->entero0x0C = 0x0;
    }

    gCNetMsg->entero0x8 = CMemPoolZeroPtrInit(0x0, 0x0);

}


void Functions::AntesCMutexMemsetWaitObject(int prm1)
{

    RegistroAZero();

    gCNetMsg->entero0x4 = prm1;

    ContieneMemset(prm1);
    
}

int Functions::ModString(char arg0[STRLEN], int arg1)
{
    return 0;
}


void Functions::Sumaveces_loop_2Eax()
{

    inc++;

    if (inc < 0x7FFFFFFF)
        return;

    inc = 0x0;

    return;
}


void Functions::LlamaHtonlMemset(int arg0)
{

    auto retHtonl = htonl(arg0);
    LlamaMemcpy(&retHtonl, 0x4);

}


signed char* Functions::LlamaHtonsMemset(int arg0)
{

    htons(arg0);

    LlamaMemcpy(&arg0, 0x2);

    return nullptr;
}

void Functions::LlamaMemcpy(void *argSrc, int size)
{
    if (argSrc == 0x0)
        return;

    if (size < 0x1)
        return;

    if (gCNetMsg->entero0x14 == 0x1)
        return;

    auto varCualquiera = 0x4000 - size;

    if (gCNetMsg->entero0x0C <= 0x4000)
    {
        // BLOCK_MEMCPY
        gCNetMsg->entero0x8 = gCNetMsg->entero0x8 + gCNetMsg->entero0x0C;

        memcpy(gCNetMsg->entero0x8, argSrc, size);

        gCNetMsg->entero0x0C = gCNetMsg->entero0x0C + size;

        if (gCNetMsg->entero0x0C <= gCNetMsg->entero0x10)
            return;

        gCNetMsg->entero0x10 = gCNetMsg->entero0x0C;

    }
}


int Functions::SetValuesCMemPool(int arg0, int arg1)
{

    auto var_zer0 = 0x0;

    if (gMemPool->number == 0x0)
    {
        gMemPool->entero0x20++;

        auto var_10 = gMemPool->ptr;

        if (arg0 == 0x0)
        {
            return 0x0;
        }

        memset(gMemPool->ptr, 0x0, 0x2000);
    }

    else
    {
        ContieneFuncionError1();

        if (arg0 == 0x0)
            return 0;

        memset(gMemPool->ptr, 0x0, 0x2000);
    }    

    return 0;
}

int Functions::ContieneFuncionError1()
{
    CMemPool mPool = CMemPool();

    MueveRegsNoCall(gMemPool->handle, gMemPool);
    FuncionError();

    return 0;
}


void Functions::ConvertWideAnsi(
    const std::string& arg0StrInput,
    int arg1_longitud_int, 
    LPSTR arg2_plaintext, 
    int arg3_int)
{
    int arg1 = 0x0;    
    wchar_t strOutput[STRLEN] = { 0 };

    // Ansi To Wstring
    MultiByteToWideChar(CP_ACP,
        0x0, 
        arg0StrInput.c_str(), 
        arg0StrInput.length(), 
        strOutput, STRLEN);

    const std::wstring wStrInput;
    char buf[STRLEN] = { 0 };

    // Wstring To Ansi
    WideCharToMultiByte(0x0FDE9,
        0x0, 
        strOutput,
        wcslen(strOutput),
        buf,
        STRLEN,
        nullptr, 
        nullptr);
   
    ModString(buf, 0x1);

}

void Functions::ContieneMemset(int prm1)
{
    LlamaMemcpy(reinterpret_cast<void*>(prm1), 0x1);
}
