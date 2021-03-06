#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include "global.h"
#include "OrderSystemView.h"
#include "Identity.h"
using namespace std;

class Student : public Identity
{
private:
    
public:
    // int logNum;
    OrderSystemView osv;
    // string name;
    // int id;
    // enum AppointmentState appointmentState;
    // vector<AppointInfo> vMyAppointment;     // 存放自己的预约信息
    // vector<AppointInfo> AllAppointment;

    Student(string name, int id);
    void initStuSys();       // 初始化系统
    void appointment();      // 申请预约
    int checkSameTimeAppointment(int date, int time, int stuId);    // 查看同时段预约
    void checkAppointment(); // 查看预约信息
    // void getPersonalLog(int flag);   // 获取个人记录
    // void filterAllfLog(AppointInfo tempAppointInfo);
    // void filterSelfLog(AppointInfo tempAppointInfo);
    // void checkAllAppointment(); // 查看所有人预约
    void cancelOrder();      // 取消预约
    vector<AppointInfo>::iterator setStateToCancel(int countLog, vector<AppointInfo> & canBeCancle);
    ~Student();
};


