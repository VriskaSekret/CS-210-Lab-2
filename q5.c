#include <stdio.h>

void print_IP_address(unsigned int ip_address) {
  unsigned int first_octet = (ip_address >> 24) & 0xff;
  unsigned int second_octet = (ip_address >> 16) & 0xff;
  unsigned int third_octet = (ip_address >> 8) & 0xff;
  unsigned int fourth_octet = ip_address & 0xff;
  printf("%d.%d.%d.%d\n", first_octet, second_octet, third_octet, fourth_octet);
}

int q5main(void) { 
  print_IP_address(0xC0441901); 
  print_IP_address(0x9DF00823);
}
