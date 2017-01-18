#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
int main()
{
    char spacing[]="\t\t\t\t";
    int command;
    while(printf("\n\n\n%s______ WELCOME TO PC WIFI-HOTSPOT MAKER ______\n\n%s1)Configure Hotspot\n%s2)Start Hotspot\n%s3)Stop Hotspot\n%s4)Show Current Hotspot configuration\n%s5)Exit\n\n%sEnter a option:  ",spacing,spacing,spacing,spacing,spacing,spacing,spacing) && scanf("%d",&command) &&command!=5)
    {
        if(command==1)
        {
            system("cls");
            string createHotspot,hotspotName,hotspotPassword;
            printf("\n\n\n\n\n\n\n\n%sEnter Wifi-Hotspot Name:  ",spacing);
            cin>>hotspotName;
            printf("\n\n%sEnter Password: ",spacing);
            cin>>hotspotPassword;
            puts("\n");
            createHotspot="NETSH WLAN set hostednetwork mode=allow ssid=";
            createHotspot=createHotspot+hotspotName.c_str()+" key="+hotspotPassword.c_str();
            int success=system(createHotspot.c_str());
            if(success!=0)
            {
                Sleep(5000);
                system("NETSH Wlan stop hostednetwork");
                system("cls");
                system("NETSH Wlan start hostednetwork");
            }
        }
        else if(command==2)
        {
            system("NETSH Wlan start hostednetwork");
        }
        else if(command==3)
        {
            system("NETSH Wlan stop hostednetwork");
        }
        else if(command==4)
        {
            system("NETSH WLAN show hostednetwork");
            system("NETSH WLAN show hostednetwork setting=security");

        }
        printf("\n\n%sPress Enter to return to main menu: ",spacing);
        char cx;
        fflush(stdin);
        scanf("%c",&cx);
            if(cx=='\n')
                system("cls");
    }
    system("cls");
    printf("\n\n\n\n\n\n\n\n%sThanks for using PC WIFI-HOTSPOT MAKER \n\n%s\t\t--Developed by Fahim Al Mahmud Ashik\n\n\n",spacing,spacing);
    exit(0);
    return 0;
}
