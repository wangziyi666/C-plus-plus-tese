//#include <iostream>
//using namespace std;
//
//class BaseCalculator {
//public:
//    int m_A;
//    int m_B;
//    virtual int getResult() = 0;// write your code here......
//
//};
//
//// 加法计算器类
//class AddCalculator : public BaseCalculator {
//public:
//    int getResult()
//    {
//        return m_A + m_B;
//    }
//    // write your code here......
//
//};
//
//// 减法计算器类
//class SubCalculator : public BaseCalculator {
//    int getResult()
//    {
//        return m_A - m_B;
//    }
//    // write your code here......
//
//};
//
//
//int main() {
//
//    BaseCalculator* cal = new AddCalculator;
//    cal->m_A = 10;
//    cal->m_B = 20;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    cal = new SubCalculator;
//    cal->m_A = 20;
//    cal->m_B = 10;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    return 0;
//}