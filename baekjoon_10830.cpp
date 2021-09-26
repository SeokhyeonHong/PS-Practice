#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Mat;

int N;
long long B;

void printMat(Mat m)
{
    for(int i = 0; i < N; ++i ) {
        for(int j = 0; j < N; ++j) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

Mat MatMultiply(Mat mat1, Mat mat2)
{
    Mat ret(N, vector<int>(N));
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            for(int k = 0; k < N; ++k) {
                ret[i][j] += mat1[i][k] * mat2[k][j];
            }
            ret[i][j] %= 1000;
        }
    }
    return ret;
}

Mat solve(Mat mat, long long power)
{
    if(power == 1)
        return mat;
    else if(power % 2 == 1)
        return MatMultiply(mat, solve(mat, power - 1));
    else {
        Mat tmp = solve(mat, power / 2);
        return MatMultiply(tmp, tmp);
    }
}

int main()
{
    cin >> N >> B;

    Mat mat;
    mat.resize(N);
    for(int i = 0; i < N; ++i) {
        mat[i].resize(N);
        for(int j = 0; j < N; ++j) {
            cin >> mat[i][j];
            mat[i][j] %= 1000;
        }
    }

    Mat answer = solve(mat, B);
    printMat(answer);
}