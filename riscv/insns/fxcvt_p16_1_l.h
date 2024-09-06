P16_1fx _rs1 = P16_1fx::from_sraw(RS1);
WRITE_RD(P16_1fx::unpacked_low2full(_rs1.unpack_low()).v);