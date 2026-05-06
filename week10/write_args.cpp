#include<iostream>

using namespace std;

//C++파일 실행할 수 있는 과정
//write_args.cpp -> 전처리 -> 컴파일 -> 오브젝트(.obj / .o) -> 링킹 ->실행파일

//터미널에서 실행한다면:
// C:\Users\com316\Desktop\C++\10-cpp-mem-data-structs-2026-LeeJunyoung03\week10\x64\Debug
// /week10.exe. say hello world
//argc=3
//argv= ["say", "hello", "world"]
//>>>>say hello world

int main(int argc, char** argv) {
	//명령 프롬프트에 입력한 인수가 존재하면 출력
	if (argc > 1) {//argc=인수의 개수(argument count)

		cout << "실행파일: " << argv[0] << endl;
		cout << "인수들: " << endl;

		//첫번째인수를 출력
		//공백 하나와 함께 나머지 인수들을 각각 출력
		for (int i = 0; i < argc; i++)
			cout << argv[i] << " ";
		cout << endl;
	}
	return 0;
}
