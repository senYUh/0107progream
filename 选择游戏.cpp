/*
 *data:2020/01/08;
 *author:liu;
 *e-mail:yuanb60624260@163.com;
 *chose a game to play in ������ and �����жϣ�
*/
#include<iostream>

using namespace std;

int main()
{
    cout<<"**************************************************************************************"<<endl;
    cout<<"*  *****  * * *********  welcome to play        **************            ************"<<endl;
    cout<<"*  *   ****   *   ����1�� �������������2���������ж� ******* ************************"<<endl;
    cout<<"    *  *****   *                       *****    ****          ************************"<<endl;
    cout<<"********************************************************************************"<<endl;
    int shu;
    cin>>shu;
    {
        switch(shu)
        {
            case 1:
        {
        while(1)
        {
            cout<<"������л��������ж�������룬������y��������룬������n��\n";
            string pan;
            cin>>pan;
            if("n"==pan)
            {
                break;
            }
            else if("y"==pan)
            {
                int data;
                cout<<"������һ����λ����\n";
                cin>>data;
                while(1)
                {
                    if(data/10000==0||data/10000>10)
                    {
                        cout<<"��������ȷ����λ����\n";
                        cin>>data;
                    }
                    else
                    {
                        break;
                    }
                }
                {
                    int m,k,d,u;
                    m=data/10000;
                    k=data%10000/1000;
                    d=data%100/10;
                    u=data%10;

                    if(m==u&&k==d)
                    {
                        cout<<"yes��\n";
                    }
                    else
                    {
                        cout<<"no!\n";
                    }
                }
            }
            else
            {
                cout<<"������Ϸ��ַ�\n";
            }
        }
        }
        break;
        case 2:
        {
            while(1)
        {
            cout<<"�����������ж���Ϸ������룬������y����������n\n";
            string pan;
            cin>> pan;
            if("n"==pan)
            {
                break;
            }
            else if("y"==pan)
            {
                int Y,M,D;
                cout<<"�����������գ�����2020 1 8��\n";
                cin >> Y >> M >> D;
                while(1)
                {
                    if(M>12||M<1)
                    {
                        cout<<"��������ȷ�·�\n";         //�ж������·��Ƿ�Ϸ�
                        cin>>Y>>M>>D;
                    }
                    else if((2==M && D>29) || (M<8&&M%2!=0&&D>31) || (M<8&&M%2==0&&D>30) || (M>8&&M%2!=0&&D>30) || (M>8 && M%2==0 && D>31)||(D<1)||((Y%4!=0&&Y%400==0)||(Y%400!=0)&&M==2&&D>28))
                    {
                        cout<<"��������ȷ������\n";     //�ж����������Ƿ�Ϸ�
                        cin>>Y>>M>>D;
                    }
                    else
                    {
                        break;
                    }
                }
                {
                    int date=0;
                    int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};       //����������ڵ��㷨
                    if ((Y%4==0&&Y%400!=0)||(Y%400==0))
                    {
                        arr[2]+=1;
                    }
                    else
                    {
                        arr[2]==28;
                    }
                    for(int i=1;i<M;i++)
                    {
                        date=arr[i]+date;

                    }
                     {
                         date=date+D;
                         cout<<"�������ǽ���ĵ�"<< date<<" ��\n";
                     }
                }

            }
            else if("y"!=pan&&"y"!=pan)
                {
                    cout<<"��������ȷ�ַ�\n";
                }
        }
        }
        break;
        }
    }
    return 0;
}
