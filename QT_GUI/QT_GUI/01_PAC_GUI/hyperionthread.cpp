#include "hyperionthread.h"

HyperionThread::HyperionThread(QObject *parent) : QObject(parent)
{
    peak_chanel1 = 0;
    peak_chanel2 = 0;
    peak_chanel3 = 0;
    peak_chanel4 = 0;
    isStop = false;

}

void HyperionThread::startHyThread()
{
    qDebug() << "HyThread QThread::currentThreadId()==" << QThread::currentThreadId();
    while (1) {
        if(isStop)
            return;
        readPeaks();
        sleep(0.05);
    }
}

bool HyperionThread::connectHyperion()
{
    std::string ipAddress, instrumentName;
    ipAddress = "10.0.0.1";
    instrumentName = "Hyperion";
    try
    {

        hypInst = new Hyperion(ipAddress);

    }

    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return false;
    }
    return true;
}

void HyperionThread::readPeaks()
{
    double sum = 0;
    int i = 0;
    hACQPeaks peaks = hypInst->get_peaks();
    std::vector<double> channelPeaks;
    channelPeaks = peaks.get_channel(1); //peaks on chanel1
    size_t numChannelPeaks = channelPeaks.size();
    if(numChannelPeaks == 0)
        peak_chanel1 = 0;
    else
    {
        for(i = 0; i < numChannelPeaks; i++)
            sum += channelPeaks[i];
        peak_chanel1 = sum / numChannelPeaks;
    }

    channelPeaks = peaks.get_channel(2); //peaks on chanel2
    numChannelPeaks = channelPeaks.size();
    if(numChannelPeaks == 0)
        peak_chanel2 = 0;
    else
    {
        for(i = 0; i < numChannelPeaks; i++)
            sum += channelPeaks[i];
        peak_chanel2 = sum / numChannelPeaks;
    }

    channelPeaks = peaks.get_channel(3); //peaks on chanel3
    numChannelPeaks = channelPeaks.size();
    if(numChannelPeaks == 0)
        peak_chanel3 = 0;
    else
    {
        for(i = 0; i < numChannelPeaks; i++)
            sum += channelPeaks[i];
        peak_chanel3 = sum / numChannelPeaks;
    }

    channelPeaks = peaks.get_channel(4); //peaks on chanel4
    numChannelPeaks = channelPeaks.size();
    if(numChannelPeaks == 0)
        peak_chanel4 = 0;
    else
    {
        for(i = 0; i < numChannelPeaks; i++)
            sum += channelPeaks[i];
        peak_chanel4 = sum / numChannelPeaks;
    }


}

void HyperionThread::closeHyThread()
{
    isStop = true;
}

void HyperionThread::transPeaks(std::vector<double> &vec)
{
    vec.push_back(peak_chanel1);
    vec.push_back(peak_chanel2);
    vec.push_back(peak_chanel3);
    vec.push_back(peak_chanel4);
}
