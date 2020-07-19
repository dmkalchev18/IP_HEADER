#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <cmath>
#include <ctime>
#include <vector>
#include <stdio.h>
#include <string>
using namespace std;


struct VERSION_IHL {
	unsigned char ver : 4;
	unsigned char ihl : 4;
};

struct DSCP_ECN {
	unsigned char dscp : 6;
	unsigned char ecn : 2;
};

struct FLAGS_FLAGMENT_OFFSET {
	unsigned char flags : 2;
	unsigned char flagment_offset : 6;
};

struct TTL_PROTOCOL {
	unsigned char ttl;
	unsigned char protocol;
};

struct IP_HEADER {
	VERSION_IHL version_ihl;
	DSCP_ECN dscp_ecn;
	unsigned short total_length;
	unsigned short indetification;
	FLAGS_FLAGMENT_OFFSET flags_flagment_offset;
	TTL_PROTOCOL ttl_protocol;
	unsigned short header_checksum;
	unsigned int source_address;
	unsigned int destination_address;
};

int main() {

	IP_HEADER ip;
}