#include "mymodbuswork.h"

MyModBusWork::MyModBusWork(QObject *parent)
    : QObject{parent}
{


}

void MyModBusWork::createConnect(const Settings &s)
{
    if(s.isMaster){
        if(s.isTCP){

        }else{

        }
    }else{
        if(s.isTCP){

        }else{

        }
    }
}
