#pragma once
#pragma once

#include <iostream>
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <winsock.h>
#include <vector>
#include <map>
#include <sstream>

#pragma comment(lib, "Ws2_32.lib")
#define STRLEN 819

struct CMemPool
{
	int field1;
	int handle;
	int incrementador;
	int number;
	int* ptr;
	int field16;
	int entero0x20;
};


class Functions
{

private:

	struct CNetMsg
	{
		int entero0x14;
		int entero0x4;
		int *entero0x8;
		int entero0x10;
		int entero0x0C;
		int entero0x22;
		int sizeStr;
		int sizeDeOtraCosa;

	};

	CMemPool *gMemPool;
	CNetMsg *gCNetMsg;
	int inc;
	int intVal0;
	int varRandOld;
	int varRand;
	int flagRandCalled;

public:
	
	// Indexs
	int indexArg4;
	int indexArg2StringPtr;
	int index_var_super_random;
	int index_arg4_byte_92B524;
	int iLstNums;
	int iLstStrDst;
	int index_arg0_ptr_string_enorme;
	int arg3_max_length_wsabuff;
	int arg1_int_longitud_maxima;
	int veces_loop_2;
	int var_remanente1;
	int indexArg0Xor;
	int edxDecrement;
	
	int indexArg1Xor;
	int cpyIndexArg1Xor;
	int _indexArg1Xor;
	int ecxCpyIndexArg1Xor;
	int _indexArg2Xor;

	void CmpJge();
	void EndLoop5();
	void XorSencillo();

	int ecxIndexArg1Xor;
	int index1;
	int tmpVal;
	int index3;
	int nomodifica;
	int index0;
	int indexArg2;
	int setado_despues_xor;
	int flagZero;

	// Lists
	std::vector<int> var_super_random;
	std::vector<int> arg4_byte_92B524;
	std::vector<int> lstNums;
	std::vector<int> arg0_ptr_string_enorme;
	std::vector<int> esi;
	std::vector<int> wsa_buf;
	std::vector<int> lstStrDst;
	std::vector<int> *arg2_string_ptr;
	std::vector<int>* valTmp0;
	std::vector<int>* valTmp1;
	std::vector<int>* valTmp2;
	std::vector<int> var_stack_string_ptr;

	Functions()
	{
		indexArg2StringPtr = 0x0;

		inc = 0x0;

		gMemPool = new CMemPool();
		gCNetMsg = new CNetMsg();
		
		// incrementador = 0;
	}

	void AntesDelMemset();

	int *CMemPoolZeroPtrInit(int arg0, int arg1);

	signed char FuncionNetworkingEnorme(
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
		LPCSTR hash2);

	void RegistroAZero();
	void AntesCMutexMemsetWaitObject(int prm1);
	int ModString(char arg0[STRLEN], int arg1);
	void Sumaveces_loop_2Eax();
	void LlamaHtonlMemset(int arg0);
	signed char* LlamaHtonsMemset(int arg0);
	void LlamaMemcpy(void *argSrc, int size);
	int FuncionModEex1(CMemPool* arg0, int arg1, int arg2);
	int SetValuesCMemPool(int arg0, int arg1);
	int ContieneFuncionError1();
	
	void ConvertWideAnsi(const std::string& arg0StrInput,
		int arg1_longitud_int, 
		LPSTR arg2_plaintext, 
		int arg3_int);

	void ContieneMemset(int prm1);
	int UtilizaCNetMsgVftable();
	int MueveRegsNoCall(int arg0, CMemPool* arg1);
	int FuncionError();
	// int ContieneMemset1(CMemPool* arg0, int arg1, int arg2);

	void BlockLoop1();
	void BlockCmpJle();
	void BlockAntesLoop1();
	void BlockRandLoop();
	void Loop2();
	void Loop3();
	void BeginLoop4();
	void EndLoop4();
	void BlockCmp4();
	void BlockXor4();
	void BeginLoop3();
	void BlockTestJle(int edx);
	void EvalResult();
	int UncryptWsBuf();
	std::vector<int> DeployUncrypt();
	std::map<char, int> DecryptXorV2(int prm0, int prm1);
	void ByeBye();
	void CheckEdiIsTwo();
	void CheckEdiIsTwo2();
	void DumpVector();
	void BlockCmp();
	void EndLoop3();
	void BlockXor3();
	void FuncionXor(int *arg0, int *arg1);
	int Movzx8(int dat);
	void BlockEndLoop();
	void EndLoop2();
	void BlockMovEsi3(int arg0);
	void BlockAddrXor0();
	void loc_64119F();
	void loc_64108A();
	void BeginLoop5();

	int BeginLoop1();
	int BeginLoop2();
	void BlockEnd2();
	void BlockXor();
	void BlockMovEsi1();
	void BlockMovEsi3();
	int DespuesDeCifrar();
	int _Loop2();
	int _Loop3();
	int Loop4();
	int EndLoop1();
	void BlockEndLoopMamarra();
	void BlockBeginLoop();
	void BlockMovEsi(int zf);
	void BlockAddrXor();

	int LlamaRand();
	int RandLoop();
	int Mov16bRegister();
	int CleanWithZero(std::string arg0);
	int FuncionMamarra(int arg0, int arg1, std::string arg2, int arg3, int arg4);
	int FuncionModWSABuffEax(struct CNetMsg* arg0);
};

