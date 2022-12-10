// BMIを求める関数
double getBmi(double height, double weight)
{
    double bmi; // BMIの計算結果を入れる

    height /= 100;

    bmi = weight / height / height;

    return bmi;
}