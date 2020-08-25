# NuLoRaNode
NuLoRaNode is Nuvoton microcontroller porting for LoRaMac-node. LoRaMac-node is a LoRaWAN end-device stack implementation and example projects. See [LoRaMac-node](https://github.com/Lora-net/LoRaMac-node).

----
## Major components in this repository
- BSP/ -- NuMicro series BSP
- Doc/ -- Documents
- LoRaMac-node/ -- LoRaMac-node official release
- NuLoRaMac/ -- NuMicro porting of LoRaMac-node

----
## Supported target
Board            |MCU      |LoRaModule           |Required ROM size  |Required RAM size
:----------------|---------|---------------------|-------------------|------------------
NuMaker-IOT-M252 |M252     |RYLR890(EU868/US915) |60KB               |13KB

----
## How to run NuLoRaNode
1. Download and install [KEIL MDK Nuvoton edition M0/M23](http://www2.keil.com/nuvoton/M0-M23)
2. Download and install [Nu-Link Keil Driver](https://www.nuvoton.com/resource-download.jsp?tp_GUID=SW1120200221180521)
3. Hardware setup steps  
a. Turn ICE function switch pin 1,2,3 on and pin 4 off  
![NuMaker-IOT-M252](https://imgur.com/g6h5oWl.jpg)  
b. Connect USB ICE to PC  
4. git clone --recursive https://github.com/OpenNuvoton/NuLoRaNode.git  
5. Browsing into device application folder and double click uVision project file(KEIL/xxx.uvprojx)  
  - Class A application: NuLoRaNode\NuLoRaMac\src\apps\LoRaMac\classA  
  - Class C application: NuLoRaNode\NuLoRaMac\src\apps\LoRaMac\classC  
6. Enter Keil compile mode  
a. Build  
b. Download  
4. Enter debug mode  
a. Run

----
## How to change LoRaWAN configuration
The application reserves a block of 1K size on the MCU internal flash as LoRaWAN configuration block. In this block, it stored LoRaWAN configuration(ex:Device EUI, APP EUI, APP Key and Network Key) for device activation process and create security link. An easy way to change these configurations under development.  
1. Flash erase all  
![Flash Erase All](https://imgur.com/Wq7loJr.jpg)
2. Modify application factory_json.h  
![Factory JSON](https://imgur.com/JzmxV9y.jpg)
3. Rebuild and Run