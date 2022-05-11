//2438번 문제


/*
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i+1; j++){
            cout << "*";
        }
        if (i != N-1) {
            cout << endl;
        }
        
    }
    return 0;
}

*/


//2439번 

/*
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N-i-1; j++) {
            cout << " ";
        }

        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        if (i != N - 1) {
            cout << endl;
        }
    }
    return 0;
}

*/


//2475번 문제

/*
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num[6];
    for (int i = 0; i < 6; i++) {
        num[i] = 0;
    }
    
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }

    int sum=0,qual;

    for (int i = 0; i < 5; i++) {
        sum += pow(num[i], 2);
    }
    
    qual = sum % 10;
    cout << qual;
   
}

*/


//2557번 문제

/*
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!";
    return 0;
}
*/



//2562번
/*
#include <iostream>
using namespace std;
int main()
{
    int ary[9];
    for (int i = 0; i < 9; i++) {
        cin >> ary[i];
    }

    int max = 0;
    max = ary[0];
    int idx=0;
    for (int i = 0; i < 9; i++) {
        if (ary[i] > max) {
            max = ary[i];
            idx = i;
        }
    }

    cout << max << endl << idx + 1;

    return 0;
}

*/

//2577번 풀이중...

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int A, B, C;
    int product = 0;
    int ary[10];
    int tmp = 0;//임시저장
    int digit = 0;


    for (int i = 0; i < 10; i++) { //초기화
        ary[i] = 0;
    }
    
    cin >> A >> B >> C;
    product = A * B * C;
    
    //cout << product;

    while (product > 0) { //자릿수 구하기
        product = product / 10;
        digit++;
    }


    p


    for (int i = 0; i < 10; i++) {
        cout << ary[i] << endl;
    }


    return 0;
}
