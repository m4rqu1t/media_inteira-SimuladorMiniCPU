void decode_execute(uint8_t op, uint8_t a, uint8_t b) {
switch (op) {
case 0x01: reg[a] = mem[b]; break;
case 0x02: mem[b] = reg[a]; break;
case 0x03: reg[a] = reg[a] + reg[b]; break;
case 0x04: reg[a] = reg[a] - reg[b]; break;
case 0x05: reg[a] = b; break;
//Parte pessoa 3 da função decode_execute abaixo:
case 0x06: zf = (reg[a] == reg[b]) ? 1 : 0; break;
case 0x07: pc = a; break;
case 0x08: if (zf) pc = a; break;
case 0x09: if (!zf) pc = a; break;
case 0x0A: running = 0; break;
}
}
