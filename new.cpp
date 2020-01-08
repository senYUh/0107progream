/*
 *author:liu;
 *e-mail:yuanb6002426@163.com
 *the date of **;
 *DATE:2020/01/08;
 */

 #include<iostream>
 using namespace std;
 int main()
 {
     while(1)
    {
        cout<<"你想玩年月判断游戏吗？如果想，请输入y不想请输入n\n";
        char pan;
        cin>> pan;
        if('n'==pan)
        {
            break;
        }
        else if('y'==pan)
         {
            int Y,M,D;
            cout<<"请输入年月日（例如2020 1 8）\n";
            cin >> Y >> M >> D;
            while(1)
            {
                if(M>12||M<1)
                {
                    cout<<"请输入正确月份";         //判定输入月份是否合法
                    cin>>Y>>M>>D;
                }
                else if((2==M&&D<1||D>29)||(D<1||D>31)||(M<8&&M%2!=0&&D>31)||(M<8&&M%2==0&&D>30)||(M>8&&M%2!=0&&D>30)||(M>8&&M%2==0&&D>31))
                {
                    cout<<"请输入正确的日期\n";     //判定输入日期是否合法
                    cin>>Y>>M>>D;
                }
                else
                {
                    break;
                }
            }
                int date=0;
                int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};       //计算相加日期的算法
                if ((Y%4==0&&Y%400!=0)||(Y%400==0))
                {
                    arr[2]+=1;
                }
                else
                {
                    arr[2]=28;
                }
                for(int i=1;i<M;i++)
                {
                    date+=arr[i];
                    date+=D;
                        cout<<"该日期是今年的第"<< date<<" 天\n";
                }
         }
        else if('y'!=pan&&'n'!=pan)
            {
                cout<<"请输入正确字符\n";
            }
    }
    return 0;
 }
