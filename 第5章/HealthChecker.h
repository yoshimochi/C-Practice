class HealthChecker
{
private:
    string name;
    double height;
    double weight;
    double bmi;

public:
    double getBmi();                                          // BMIを返すメンバ変数
    string getName();                                         // 名前を返すメンバ変数
    HealthChecker(string name, double height, double weight); // コンストラクタ
};
