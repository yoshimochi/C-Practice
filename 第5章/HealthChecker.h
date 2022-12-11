class HealthChecker
{
private:
    static const int STD_BMI;
    string name;
    double height;
    double weight;
    double bmi;

public:
    static int getStdBmi();                                   // 標準BMIを返すメンバ変数
    double getStdWeight();                                    // 標準体重を返すメンバ変数
    double getBmi();                                          // BMIを返すメンバ変数
    string getName();                                         // 名前を返すメンバ変数
    HealthChecker(string name, double height, double weight); // コンストラクタ
};
