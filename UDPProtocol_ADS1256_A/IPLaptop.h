uint8_t eth_MAC[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0x02 };


IPAddress eth_IP(192, 168, 43, 15);
IPAddress eth_MASK(255, 255, 255, 0);
IPAddress eth_DNS(192, 168, 43, 1);
IPAddress eth_GW(192, 168, 43, 1);

#define RESET_P	26				

const uint16_t localPort = 5000;