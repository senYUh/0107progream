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
        cout<<"�����������ж���Ϸ������룬������y����������n\n";
        char pan;
        cin>> pan;
        if('n'==pan)
        {
            break;
        }
        else if('y'==pan)
         {
            int Y,M,D;
            cout<<"�����������գ�����2020 1 8��\n";
            cin >> Y >> M >> D;
            while(1)
            {
                if(M>12||M<1)
                {
                    cout<<"��������ȷ�·�";         //�ж������·��Ƿ�Ϸ�
                    cin>>Y>>M>>D;
                }
                else if((2==M&&D<1||D>29)||(D<1||D>31)||(M<8&&M%2!=0&&D>31)||(M<8&&M%2==0&&D>30)||(M>8&&M%2!=0&&D>30)||(M>8&&M%2==0&&D>31))
                {
                    cout<<"��������ȷ������\n";     //�ж����������Ƿ�Ϸ�
                    cin>>Y>>M>>D;
                }
                else
                {
                    break;
                }
            }
                int date=0;
                int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};       //����������ڵ��㷨
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
                        cout<<"�������ǽ���ĵ�"<< date<<" ��\n";
                }
         }
        else if('y'!=pan&&'n'!=pan)
            {
                cout<<"��������ȷ�ַ�\n";
            }
    }
    return 0;
 }
