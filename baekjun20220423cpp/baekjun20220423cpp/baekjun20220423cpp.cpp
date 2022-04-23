//2675 문자열 반복

/*
#include <iostream>
#include <string>
//using namespace std;

int main()
{
    int T,R;//테스트 케이스의 개수
    string S,P;
    
    cin >>T; // 테스트 케이스의 개수 입력

    for (int i = 0; i < T; i++) {
        cin >> R >> S;
        for (int j = 0; j < S.length(); j++) {
            for (int k = 0; k < R; k++) {
                P.push_back(S[j]);
            }
        }
        P.push_back('\n');
    }
    cout << P;
}
*/


//2739 구구단

/*
#include <iostream>
#include <string>
int main()
{
    int N;
    std::cin >> N;
    
    for (int i = 0; i < 9; i++) {
        std::cout << N << " * " << i+1 << " = " << N * (i + 1)<<std::endl;
    }
    return 0;
}

*/


//2741번 