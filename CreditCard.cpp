#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "信用卡卡號：";
    cin >> number;

    if (number / 1000000000000000 == 4) {
        cout << "Visa";
    } else if (number / 100000000000000 == 34 || number / 100000000000000 == 37) {
        cout << "American Express";
    } else if (number / 100000000000000 >= 51 && number / 100000000000000 <= 55) {
        cout << "MasterCard";
    } else {
        cout << "卡號錯誤";
    }

    int total;
    long long checksum = number;
    long long sum1 = checksum / 1000000000000000;
    checksum = checksum - sum1 * 1000000000000000;
    long long sum2 = checksum / 100000000000000;
    checksum = checksum - sum2 * 100000000000000;
    long long sum3 = checksum / 10000000000000;
    checksum = checksum - sum3 * 10000000000000;
    long long sum4 = checksum / 1000000000000;
    checksum = checksum - sum4 * 1000000000000;
    long long sum5 = checksum / 100000000000;
    checksum = checksum - sum5 * 100000000000;
    long long sum6 = checksum / 10000000000;
    checksum = checksum - sum6 * 10000000000;
    long long sum7 = checksum / 1000000000;
    checksum = checksum - sum7 * 1000000000;
    long long sum8 = checksum / 100000000;
    checksum = checksum - sum8 * 100000000;
    long long sum9 = checksum / 10000000;
    checksum = checksum - sum9 * 10000000;
    long long sum10 = checksum / 1000000;
    checksum = checksum - sum10 * 1000000;
    long long sum11 = checksum / 100000;
    checksum = checksum - sum11 * 100000;
    long long sum12 = checksum / 10000;
    checksum = checksum - sum12 * 10000;
    long long sum13 = checksum / 1000;
    checksum = checksum - sum13 * 1000;
    long long sum14 = checksum / 100;
    checksum = checksum - sum14 * 100;
    long long sum15 = checksum / 10;
    checksum = checksum - sum1 * 10;
    long long sum16 = checksum;
    int checksum1 = sum1 * 2;
    int checksum3 = sum3 * 2;
    int checksum5 = sum5 * 2;
    int checksum7 = sum7 * 2;
    int checksum9 = sum9 * 2;
    int checksum11 = sum11 * 2;
    int checksum13 = sum13 * 2;
    int checksum15 = sum15 * 2;
    int checker1 = checksum1 / 10 + (checksum1 % 10);
    int checker3 = checksum3 / 10 + (checksum3 % 10);
    int checker5 = checksum5 / 10 + (checksum5 % 10);
    int checker7 = checksum7 / 10 + (checksum7 % 10);
    int checker9 = checksum9 / 10 + (checksum9 % 10);
    int checker11 = checksum11 / 10 + (checksum11 % 10);
    int checker13 = checksum13 / 10 + (checksum13 % 10);
    int checker15 = checksum15 / 10 + (checksum15 % 10);
    total = checker1 + checker3 + checker5 + checker7 + checker9 + checker11 + checker13 + checker15 + sum2 + sum4 + sum6 + sum8 + sum10 + sum12 + sum14 + sum16;

    if (total % 10 == 0){
        cout << "\n卡號有效";
    } else {
        cout << "\n卡號無效";
    }
}
